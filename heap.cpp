//HEAPIFY AN ARRAY THEN HEAP SORT IT



#include <iostream>
using namespace std;

int u,v;
void work(int arr[],int i,int size)    // MAX HEAPIFY
{

int l=2*i;
int r=2*i+1;

if(l<=size)
{

if(arr[i]<arr[l])
	{u=l;
		v=arr[l];}
		else {u=i;v=arr[i];}
	}

if(r<=size)

{    if(v<arr[r])
	{u=r;
		v=arr[r];}
		         }
		         if(u!=i)
		         	{   arr[u]=arr[i];
		         		arr[i]=v;}

		         		int l1=2*u;
		         		int l2=2*u+1;
		         		if(  (l1<=size && arr[u]<arr[l1] ) || (l2 <=size && arr[u]<arr[l2]))
		         			work(arr,u,size);
		         	}





 













int main()
{

int arr[50];
int n;
cin>>n;
for(int e=1;e<=n;e++)cin>>arr[e];
for(int e=n/2;e>=1;e--)
	work(arr,e,n);

for(int ef=1;ef<=n;ef++) cout<<arr[ef]<< "  ";//heapified
	cout<<endl;
//HEAP SORT in descending  order
	for(int y=1;y<n;y++)
	{
       int r=arr[1];
       cout<<r<<endl;
        
       arr[1]=arr[n-y+1];
     
    work(arr,1,n-y);



	}

cout<<arr[2];

}