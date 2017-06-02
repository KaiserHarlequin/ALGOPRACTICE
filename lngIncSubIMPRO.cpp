//LONGEST INCREASING SUBSEQUENCE-TIME COMPLEXITY 0(Nlog(N))

#include <iostream>
using namespace std;
int work(int arr1[999],int size,int n,int arr2[999])
{
int low=0,rj;
int high=size-1;
while(low<=high)
{   int mid=(low+high)/2;
	if(n<arr2[arr1[mid]])
		{rj=mid;
			high=mid-1;
		}
		else
			low=mid+1;
}
}

int main()
{   int arr[999],dum[999], count[999],t=0,d,maxx=-1;
	int size;
	cin>>size;
	for(int k=0;k<size;k++)
		{
            count[k]=1;

			cin>>arr[k];
		}
		dum[0]=0;
	for(int e=1;e<size;e++)
	{   if(arr[e]>arr[dum[t]])
		{  dum[t+1]= e ;
			count[dum[t+1]]=count[dum[t]]+1;
			++t;
			 
		}
		else
		{
          int k=work(dum,t,arr[e],arr);
           
          dum[k]= e ;
          if(k!=0)
          	count[e]=count[dum[k-1]]+1;

		}
	}
	for(int z=0;z<size;z++)
	{
     if(maxx<count[z])
     	maxx=count[z];



	}
cout<<maxx;
}