#include<iostream>
using namespace std;
int sum(int n)
{
	int sum = 0;
	for (int x=11; x<=40; x++)
		sum += x*x*x;
	return sum;
}
int main()
{
	int n;
	cout<<sum(n);
	return 0;
}
