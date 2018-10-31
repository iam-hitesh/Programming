#include <iostream>
#include <algorithm>

using namespace std;

void show(int a[],int n)
{
	for(int i = 0; i < n; ++i)
		cout << a[i] << " ";
}

int main()
{
	int a[100],n;
	cin>>n;
	for(int i=0;i<n;i++)
        cin>>a[i];
	cout << "\n The array before sorting is : ";
	show(a,n);

	sort(a, a+n);

	cout << "\n\n The array after sorting is : ";
	show(a,n);

	return 0;

}
