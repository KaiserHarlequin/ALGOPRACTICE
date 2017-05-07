//FINDING THE PEAK IN AN ONE D ARRAY


#include <iostream>
using namespace std;


 
int f=0;
int work(int low,int high,int arr[10])
{ int mid;
  mid=(low+high)/2;
  //cout<<mid<<endl;
  if(mid!=0 && mid!=9 && arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])

{cout<<"found"<<mid;
f=-1;}
else if (mid!=0 && mid!=9 && arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1])
{ //cout<<"sd";
work(mid,high,arr);
}
else if (mid!=0 && mid!=high && arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1])
{ 
//cout<<"sd1";
work(low,mid,arr);
}


}
int main()
{
int arr[10]={10,20,30,34,355,3000,388,378,368,41};
work(0,9,arr);





}

