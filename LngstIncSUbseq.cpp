//LONGEST INCREASING SUBSEQUENCE-TIME COMPLEXITY 0(N^2)

#include <iostream>
using namespace std;
int main()
{
int count[999] ;
int arr[999],n,maxw=0;
cin>>n;

for(int l=0;l<n;l++)
	{cin>>arr[l];
     count[l]=1;
}

for(int e=1;e<n;e++)
{  
	for(int k=0;k<e;k++)
	{
       if(arr[e]>arr[k])
       	if(1+count[k]>count[e])
       	count[e]= 1+count[k];


}


	}
	for(int e=0;e<n;e++)
	{
  if(maxw<count[e])
  	maxw=count[e];
}
  cout<<maxw;



	}




 












 