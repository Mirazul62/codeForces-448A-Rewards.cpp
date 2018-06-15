#include<bits/stdc++.h>
using namespace std;
int main()
{
      int i,a[1000],b[1000],n,s1=0,s2=0,x,y,z;
      for(i=0;i<3;i++)
      {
          cin>>a[i];
          s1+=a[i];


      }

        for(i=0;i<3;i++)
      {
          cin>>b[i];
          s2+=b[i];

      }
      cin>>n;
      if(s1%5==0)
      {
          x=s1/5;
      }
      else
      {
          x=(s1/5)+1;
      }


       if(s2%10==0)
      {
          y=s2/10;
      }
      else
      {
          y=(s2/10)+1;
      }
      z=x+y;


     // cout<<x<<" "<<y<<" ";
     // if(n==1 && s1>=1 && s2>=1)
     //               cout<<"NO";
   //   if(n==1 && s1<1 || s2<1)
    //    cout<<"YES";

      if(z<=n)
        cout<<"YES";
      if(z>n)
        cout<<"NO";


}
