﻿#include<iostream>
using namespace std;
int main(){
float a,b;
int x,y,m,n,t;
cin>>a>>b;
x=int(a)*60+(a-int(a))*100;
y=int(b)*60+(b-int(b))*100;
m=y-x;
cin>>a>>b;
x=int(a)*60+(a-int(a))*100;
y=int(b)*60+(b-int(b))*100;
n=y-x;
t=n-m;
while(t<0)t+=1440;
t=double(t)/120.0+double(0.5);
while(t>5)t-=12;
while(t<0)t+=12;
if(t>5)cout<<12-t;
else cout<<t;
}