
//WEIGHTED INTERVAL SCHEDULING USING DYNAMIC PRGRAMMING

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int zzz=0;
bool fire(pair< pair<int,int>,int >v1,pair< pair<int,int>,int >v2)
{


	return(v2.first.second>v1.first.second);

}
void  work(vector<pair< pair<int,int>,int > >brr,int l,int u,int r)  // i used binary search technique
{
if(l<=u)
{

int mid=(l+u)/2;
if(brr[mid].first.second<=brr[r].first.first)

 {
  zzz=mid;
  //cout<<z<<" ";
  work(brr,mid+1,u,r);
}

else 
	{ 
       
  work(brr,l,mid-1,r);



	}
}
}
int maxi(int a ,int b){if(a>b)return a; else return b;}

int dynamic(vector<pair< pair<int,int>,int > >brr,int jj[] ,int k)

{     if(k==0)
	return(0);
	else


return(maxi((brr[k].second+dynamic(brr,jj,jj[k])),dynamic(brr,jj ,k-1)));









}
 









int main()

{
vector<pair< pair<int,int>,int > >v;
int aee[99],x,y,z;
v.push_back(make_pair(make_pair(-1,-1),-1));
for(int j=1;j<=8;j++)
{
cin>>x>>y>>z;
v.push_back(make_pair(make_pair(x,y),z));

}

sort(v.begin(),v.end(),fire);
 
aee[1]=0;
for(int wl=2;wl<=8;wl++)

{

zzz=0;

work(v,1,wl-1,wl);
 aee[wl]=zzz;

}
cout<<dynamic(v,aee,8);
}