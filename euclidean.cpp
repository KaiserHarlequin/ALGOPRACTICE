//Excellent way to find GCD using recursion.time complexity is logarithmic
//gcd(a,b)=gcd(b,a%b)
#include <iostream>
using namespace std;
void euc(int x,int y)
{

if(y==0)
	{cout<<x; }
else
	euc(y,x%y);
}
int main()
{
	int a,b;
cin>>a>>b;
if(b>=a)
	euc(b,a);
else
	euc(a,b);





}