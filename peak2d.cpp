////FINDING THE PEAK IN AN TWO D ARRAY



#include <iostream>
using namespace std;


int work(int low,int high,int arr[999][999],int p)
{     
int mid=(low+high)/2;
//cout<<mid<<endl;
if(high>=low)
{
 //cout<<"AS";
if(mid!=0 && mid!=4 && arr[mid][p]>arr[mid-1][p] && arr[mid][p]>arr[mid+1][p])
	return(mid);

else if(mid!=0 && mid!=4 && arr[mid][p]>arr[mid-1][p] && arr[mid][p]<arr[mid+1][p])
{  return work(mid,high,arr,p);

}

else if(mid!=0 && mid!=4 && arr[mid][p]<arr[mid-1][p] && arr[mid][p]>arr[mid+1][p])
{  return work(low,mid,arr,p);

}
}
} 
int fire(int low1,int high1,int arr[999][999])

{ 
int mid=(low1+high1)/2;
 
int u=work(0,4,arr,mid);
//cout<<u<<endl;
//cout<<arr[u][mid];
if(mid!=0 && mid!=4 && arr[u][mid]>arr[u][mid+1] && arr[u][mid]>arr[u][mid-1])
	cout<<u<<"+"<<mid;


else if(mid!=0 && mid!=4 && arr[u][mid]>arr[u][mid+1] && arr[u][mid]<arr[u][mid-1])
fire(low1,mid,arr);
else if(mid!=0 && mid!=4 && arr[u][mid]<arr[u][mid+1] && arr[u][mid]>arr[u][mid-1])
 
fire(mid,high1,arr);
}
int main()
{  int b[999][999];


	
for(int e=0;e<=4;e++)
{
for(int f=0;f<=4;f++)
{
	cin>>b[e][f];
}
}
fire(0,4,b);








} 

