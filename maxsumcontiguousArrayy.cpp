//KADANE'S ALGORITHM OR MAX SUB ARRAY CONTINOUS PROBLEM

#include <iostream>
using namespace std;
int main()
{
int current,finalle,arr[9999],n;
int sum=0;
cin>>n;
for(int r=0;r<n;r++)
	cin>>arr[r];
for(int u=0;u<n;u++)
{
	if(current<=0  )
		current=0;
current=current+arr[u];
if(current>finalle)
 finalle=current;


}
cout<<finalle;







}