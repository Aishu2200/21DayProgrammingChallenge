#include <bits/stdc++.h>
using namespace std;

int main(){
int x1,v1,x2,v2;

cout << "Enter x1,v1,x2,v2:";
cin>>x1; //starting point kangaroo1
cin>>v1; //jump velocity kangaroo1
cin>>x2; //starting point kangaroo2
cin>>v2; // jump velocity kangroo2

while(true)
{
if( x1>x2&&v1>v2 || v1==v2)
{
cout<<"NO";
break;
}
if ((x1=x1+v1)==(x2=x2+v2))
{
cout<<"YES";
break;
}
}
return 0;
}
