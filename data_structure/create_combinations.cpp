#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int no_of_cards, mod, target;
    cin >> no_of_cards >> mod >> target; 
    
    vector<long long> A(no_of_cards + 1);
    for(int i = 1; i <= no_of_cards; i++)  scanf("%lld", &A[i]);
    
    typedef vector <int> v_int;
    vector <v_int> no_of_combinations(no_of_cards + 1, v_int(mod + 1, 0));
    
    for(int i = 1; i <= no_of_cards; i++)
    {
        for(int m = 0; m < mod; m++)
        {
            no_of_combinations[i][m] += no_of_combinations[i - 1][m]; //printf("f()")
            
            int product_m = (m*A[i])%mod;
            
            no_of_combinations[i][product_m] += no_of_combinations[i - 1][m]; //? 1 : 2*no_of_combinations[i - 1][product_m]); //printf("P %d x %lld = %d\n", m, A[i], product_m);
        }
        
        no_of_combinations[i][A[i]%mod]++;
        
       // for(int m = 0; m < mod; m++) printf("f(%d, %d) = %d\n", i, m, no_of_combinations[i][m]);
    }
    
    cout << no_of_combinations[no_of_cards][target];
    return 0;
}
