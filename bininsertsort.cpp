  //BINARY INSERTION SORT ALGORITHM




   #include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void work(int arr[999],int s,int f)
{  int h;
	h=arr[f];
if (s!=f)
{
for(int e=f-1;e>=s;e--)
{

arr[e+1]=arr[e];


}

arr[s]=h;

}

}
int  bin(int arr[],int low ,int high,int value)
{
if(high>=low)
{
int mid=(high+low)/2;
if(arr[mid]<arr[value] )
{if(mid==high )
	return(high+1);
else if(arr[value]<arr[mid+1])
	return(mid+1);
else if(arr[value]>arr[mid+1])
	return(bin(arr,mid+1,high,value));
}
else if(arr[mid]>arr[value])
{
{if(mid==low)
	return(low);
else if(arr[value]>arr[mid-1])
	return(mid);
else if(arr[value]<arr[mid-1])
	return(bin(arr,low,mid-1,value));
}
}
}
}
int main()
{
	int q[111];
	for(int l=0;l<=9;l++)
		cin>>q[l];
for(int h=1;h<=9;h++)
{
	if(h>1)
{int u=bin(q,0,h-1,h);
work(q,u,h);}
else
{
if(q[1]<q[0])
	{int u=q[1];
		q[1]=q[0];
		q[0]=u;}




}
for(int l=0;l<=9;l++)
		cout<<q[l];
cout<<endl;
}

//for(int l=0;l<=9;l++)
//		cout<<q[l];




}