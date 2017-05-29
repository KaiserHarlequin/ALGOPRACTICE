//FIBONACCI USING DYNAMIC PROGRAMMING


#include <iostream>
using namespace std;
int arr[9999];
int work(int n)
  
{ int c;
if(n==1)
return(0);if(n==2)return(1);
 if(!arr[n])
{  c=work(n-1)+work(n-2);
 arr[n]=c;}
 else
 	c=arr[n];

return(c);


}
int main()
{
for(int e=1;e<=10;e++)
{

	cout<<work(e)<<endl;
}
	 

}