
//0/1 KNAPSACK PROBLEM

#include <iostream>
using namespace std;
int maxi(int a,int b){
if(a>=b) return(a);
else return(b);}
int main()
{
int arr[999][999];
int val[999],weit[999];
int n,limit;
cin>>n>>limit;
for(int l=0;l<n;l++)
{
int  wt;
cin>>wt; //enter wt in sorted order
cin>>val[wt];
weit[l]=wt;
}

for(int w=0;w<n;w++)
{   	cout<<endl;
for(int j=0;j<=limit;j++)
{
if(j==0)
{arr[weit[w]][j]=0;
cout<<arr[weit[w]][j]<<" ";// tring to represent the entire thing
}
else

{
	if(w!=0)
	{ 
		if(j>=weit[w])
{
	arr[weit[w]][j]=maxi(arr[weit[w-1]][j],(val[weit[w]]+arr[weit[w-1]][j-weit[w]]));
	cout<<arr[weit[w]][j]<<" "; // tring to represent the entire thing


}
      else
     {arr[weit[w]][j] =arr[weit[w-1]][j]	;
cout<<arr[weit[w]][j]<<" " ;// tring to represent the entire thing
}  }
    else
{
	if(j>=weit[0])
   { arr[weit[0]][j]=val[weit[0]];     cout<<arr[weit[0]][j]<<" ";   // tring to represent the entire thing
    }

}
}}
}

cout<<endl<<arr[weit[n-1]][limit];


}














 