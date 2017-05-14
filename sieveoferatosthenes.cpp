//AWESOME procedure to find prime numbers upto a certain NUMBER



#include <iostream>
#include <math.h>
using namespace std;
 
void plant(int n,int arr[999])
{

arr[0]=1;
arr[1]=1;
for(int q=2;q<=sqrt(n);q++)
{ 
	if(arr[q]==0)
     for(int l=2;q*l<=n;l++)
     {
          arr[q*l]=1;

 

     }
}
}
int main()

{  int arr[999]={0};
plant(100,arr);
for(int h=0;h<=100;h++)
{if(arr[h]==0)cout<<h<<endl;

}











}



 

















 