//MEDIAN FINDING ALGO TO FIND A NUMBER OF ANY RANK IN AN ARRAY
// I MODIFIED THE ORIGINAL ALGORITHM THOU





#include <iostream>
#include <algorithm>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}






void partition(int arr[],int element,int size) //i was only testing simple partition algorithm, aint using it in program
{ int zt;
for(zt=0;zt<size;zt++)
{
	if(arr[zt]==element) break;
}
swap(&arr[zt],&arr[size-1]);
int q=size-2;
int r=0,z;
for(int t=0;t<size-1;t++)
{ if(r==q)break;
if(arr[r]>element && arr[q]<element)
{ swap(&arr[r],&arr[q]);z=q;++r;--q;}
else if(arr[r]>element && arr[q]>element)
{z=q;--q;}
else if(arr[r]<element && arr[q]<element)
++r;
else{++r;z=q;--q;}

}
swap(&arr[z],&arr[size-1]);
}


int findMedian(int arr[],int n)
{     sort(arr, arr+n);  // Sort the array
    return arr[n/2]; 


}
int med(int arr[] ,int n)

{   int i;
  int median[99] ;
 for (i=0; i<n/5; i++)
            median[i] = findMedian(arr+i*5, 5);
        if (i*5 < n) //For last group with less than 5 elements
        {
            median[i] = findMedian(arr+i*5, n%5); 
            i++;
        }    




 
if(i==1)
return(median[0]);
else
return(med(median,i));




}

 










 int kora(int arr[],int k,int size)

 { /*int th=0,memed;
 	int median[99]={0};
for(int e=0;e<size;e=e+5)
{  int z=fmed(arr,e,5);
     median[th]=z;++th;
}
if(size%5!=0)
{
median[th]=fmed(arr,5*(th-1),size%5);
++th;
}
 if(th==1)
 	{memed=median[th];}
 else
 	memed=kora(median,th/2,th);



//int q=arr[size/2];

int q=memed;

*/

 


int q=med(arr,size);








int b[99]={0};
int c[99]={0};
int l1=0,l2=0;
for(int r=0;r<size;r++)
{
if(arr[r]<q)
{

b[l1]=arr[r];++l1;


}
else if(arr[r]>q)
{c[l2]=arr[r];++l2;}
}
if(k==l1+1)
 return(q);
else if(k<=l1)
{
return kora(b,k,l1);

}
else 
return kora(c,k-l1-1,l2);
}

int main()
{


int size,pos,arr[99];
cin>>size>>pos;
for(int z=0;z<size;z++)
{cin>>arr[z];

}

int e=kora(arr,pos,size);
//partition(arr,8,size);

//for(int z=0;z<size;z++)
 cout<<e;

//}



}


















 