﻿#include<iostream>
using namespace std;
int n,k,m,size=0,hash[200]={0},ans[51000]={0};
int main(){
int i,a,b,t,j;
cin>>n>>k>>m;
for(i=1;i<=k;i++){
scanf("%d",&a);
b=0;
for(j=1;j<=a;j++){
scanf("%d",&t);
b+=t;
}
b%=(n+1);
if(hash[b]==0){
size++;
hash[b]=size;
if(size>m){
cout<<"NO";
return 0;
}
}
ans[i]=hash[b];
}
cout<<"YES"<<endl;
for(i=1;i<=k;i++)printf("%d\n",ans[i]);
}