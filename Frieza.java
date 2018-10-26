/*Immortal Frieza
Frieza wants to become immortal. In order to do that he must acquire all the seven dragon balls. In a legendary fight, he is able to defeat Kami, the Guardian of the dragon balls. Now he has come across a case that contains the dragon balls and he needs your help to open it.
The case requires a pin number to be unlocked. And the clever Kami has left a puzzle on the case which must be cracked to unlock the case.
On the case, is displayed a string, S of length N consisting of lowercase alphabets. To unlock, he needs to convert this string into a pin number R.
The trick to creating that pin lies in his name [f,r,i,e,z,a]. He'll have to traverse S one by one and count consecutive letters that can either be a part of the letter set [f,r,i,e,z,a] or the set containing the remaining letters of the alphabet and then store these corresponding counts in the same order in R. Thus the pin number, R will be a concatenation of the counts of these letters.
You have to help him find out R.
Input:
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
Each test case contains a single string S consisting of lowercase characters [a−z].
Output:
For each test case, output in a single line answer denoting the decoded string which Frieza can use to attain immortality.
Constraints
1≤T≤10^5
1≤N≤10^5
S consists of only lower case alphabets.
Sample Input:
2
krillinisdead
futuretrunks
Sample Output:
122111221
132114


EXPLANATION:
Example case 1: The string S is "krillinisdead". The letter, "k" does not belong to the set [f,r,i,e,z,a] and hence it's count, i.e., 1 is appended to the string R. "ri" belongs to the set [f,r,i,e,z,a] and hence 2 is appended to R. "ll" doesn't belong to the set [f,r,i,e,z,a], so it's count 2 is appended to the string R. The string R keeps getting updated and the final answer is returned when the input string has been completely traversed.

Solution:
*/
import java.util.*;

public class CAKEWALK
{
   public static void main(String[] args)
   {
       Scanner scan = new Scanner(System.in);
       int test=scan.nextInt();
       while(test-->0)
       {
           String str=scan.next();
           int[] arr=new int[26];
           arr['f'-'a']=1;
           arr['r'-'a']=1;
           arr['i'-'a']=1;
           arr['e'-'a']=1;
           arr['z'-'a']=1;
           arr['a'-'a']=1;
           int[] ans=new int[str.length()];
           int count=1;
           int j=0;
           for(int i=1;i<str.length();i++)
           {
               if(arr[str.charAt(i)-'a']==arr[str.charAt(i-1)-'a'])
               {
                   count++;
               }
               else
               {
                   ans[j]=count;
                   count=1;
                   j++;
               }
           }
           ans[j]=count;

           for(int i=0;i<ans.length;i++)
           {
               if(ans[i]==0)
               {
                   break;
               }
               System.out.print(ans[i]);
           }
           System.out.println();
       }
   }
}
