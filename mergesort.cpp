#include <iostream>
using namespace std;
void merge(int ar[],int l1,int f1,int l2,int f2)
{

int br[999],k=0;
int p1=l1,p2=l2;
while(1!=0)
{
if(ar[p1]<ar[p2])
{
br[k]=ar[p1];
++k;
++p1;
}
else
	{br[k]=ar[p2];
++k;
++p2;}
if(p1==f1+1 || p2==f2+1)
{



	if(p1==f1+1)for(int u=p2;u<=f2;u++){br[k]=ar[u];++k;}
	else for(int u=p1;u<=f1;u++){br[k]=ar[u];++k;}

}
if(k==f2+-l1+1)break;




}
for(int j=0;j<k;j++)
	{ar[l1]=br[j];
++l1;

}

}






void sort(int low,int high,int arr[])
{


if(low+1==high || low==high)
{

	int u;
	if(arr[low]>arr[high])
	{

u=arr[low];
 
arr[low]=arr[high];
arr[high]=u;
	}





}
else
{
 int mid=(low+high)/2;
 sort(low,mid,arr);
 sort(mid+1,high,arr);
 merge(arr,low,mid,mid+1,high);
}
}
int main()
{


int q[111];
	for(int l=0;l<=9;l++)
		cin>>q[l];
	sort(0,9,q);

for(int l=0;l<=9;l++)
		cout<<q[l]<<endl;






}