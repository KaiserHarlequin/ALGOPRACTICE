//SEGMENTED TREE Range Minimum Query

#include <iostream>
using namespace std;

int maxx=-1;

int work(int arr[],int segment[] ,int l1,int l2,int pos)
{

if(l1==l2)
	
	{ if(pos>maxx) maxx=pos; segment[pos]=arr[l1];
		return(arr[l1]);
}
int q=min(work(arr,segment,l1,(l1+l2)/2,2*pos+1),work(arr,segment,((l1+l2)/2+1),l2,2*pos+2));
if(pos>maxx) maxx=pos;
segment[pos]=q;
return(q);
}

int mini(int start,int stop,int l1,int l2,int pos,int segment[])
{  
	if(start<=l1 && stop>=l2)
		{ cout<"K";
			return(segment[pos]);
		}
    else if(start>l2 || stop<l1)
    	return(99999);
  else 
  	return(min(mini(start,stop,l1,(l1+l2)/2,2*pos+1,segment),mini(start,stop,(l1+l2)/2+1,l2,2*pos+2,segment)));
}













int main()
{
int arr[9999],n,segment[9999],l1,l2,uu;
cin>>n;
for(int j=0;j<n;j++)
	cin>>arr[j];
for(int j=0;j<n;j++)
	segment[j]=9999999;

int f=work(arr,segment,0,n-1,0);
for(int e=0;e<=maxx;e++)
	cout<<segment[e]<<" ";
cin>>l1>>l2;
uu=mini(l1,l2,0,n-1,0,segment);

cout<<endl;
cout<<uu;
}







 






 