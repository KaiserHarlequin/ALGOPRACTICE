//RADIX SORT-NORMALLY FASTER BUT CONSUMES A LOT SPACE



#include <iostream>
using namespace std;


void work(int arr[],int n ,int ev)
{
  int count[999]={0};
int brr[99]={0};


  for(int m=0;m<n;m++)
  {             
 count[(arr[m]/ev)%10]=count[(arr[m]/ev)%10]+1;
  }



  for(int j=1;j<=9;j++)
  {

     count[j]=count[j]+count[j-1];

  }

   for(int e=n-1;e>=0;e--)
   {
       brr[ count[ (arr[e]/ev)%10 ] -1]=arr[e];
       count[(arr[e]/ev)%10]-= 1;




   }   for(int e=n-1;e>=0;e--) arr[e]=brr[e];





}
int main()
{
int arr[100],qq[100], n,l=1;
int maxdigits;
cin>>n;
cin>>maxdigits;//MAX NUMBER OF DIGITS IN A NUMBER
for(int g=0;g<n;g++)
cin>>arr[g];
for(int eq=1;eq<=maxdigits;eq++)
{work(arr,n ,l);
l=l*10;
}
for(int ez=0;ez<n;ez++)
  cout<<arr[ez]<<" ";
}



 