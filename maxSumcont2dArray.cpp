//MAXIMUM SUM CONTIGUOUS 2D ARRAY USING KADANE STYLE


#include <iostream>
using namespace std;
int start,stop,finalle=0;
int m,n;
void fire(int arr[]) //KADANE STYLE
{

int current=0;
for(int u=0;u<m;u++)
{
	if(current<=0  )
		{current=0;
			start=u;}
current=current+arr[u];
if(current>finalle)
 {finalle=current;
stop=u;
}
}








}






int main()
{
int  arr[999][999],max=-9999;
int left,rght,upp,down;
cin>>m>>n;
for(int e=0;e<m;e++)
{  
for(int t=0;t<n;t++)
	{ cin>>arr[e][t];
	}
}
for(int r=0;r<n;r++)
{  finalle=0;
	int dum[999]={0};
    for(int h=r;h<n;h++)
    {
for(int ww=0;ww<m;ww++)
{
	dum[ww]=dum[ww]+arr[ww][h];
	 }
	 fire(dum);
	//cout<<finalle<<endl;
if(finalle>=max)
{ max=finalle;
left=r;
rght=h;
upp=start;
down=stop;

}
}
}

 cout<<max;
}

 






 














 