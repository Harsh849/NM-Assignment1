#include<iostream>
using namespace std;
int sum(int n)
{
	int sum = 0;
	for (int x=1; x<=n; x++)
		sum += x*x*x ;
	return sum;
}
int main()
{
 int n = 5;
 cout<<sum(n);
 return 0;
}
