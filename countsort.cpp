//count sort algorithm ..good for sorting characters in a character array  with a limited range of input


#include <iostream>
using namespace std;
void work(int arr[],int n,int brr[])
{
  int count[999];



  for(int m=1;m<=n;m++)
  {             
 count[arr[m]]=count[arr[m]]+1;
  }



  for(int j=2;j<=10;j++)
  {

     count[j]=count[j]+count[j-1];

  }

   for(int e=1;e<=n;e++)
   {
       brr[ count[ arr[e] ] ]=arr[e];
       count[arr[e]]-= 1;




   }
}
int main(){
int e[99],qq[88];




int l=10;
for(int h=1;h<=10;h++)
cin>>e[h];
work(e,10,qq);
for(int h=1;h<=10;h++)
cout<<qq[h];









}