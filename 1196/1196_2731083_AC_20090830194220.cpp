﻿#include <stdio.h>
#pragma comment(linker,"/STACK:16777216")
struct H{
int s;
H *n;
}*h[500000]={0},*t;
int ms(){
int s=0;
char c;
while(1){
c=getchar();
if(c>='0'&&c<='9')break;
}
s=c-'0';
while(1){
c=getchar();
if(c<'0'||c>'9')break;
s=s*10+c-'0';
}
return s;
}
int main(){
int n,i,in,y,c1=0;
n=ms();
for(i=0;i<n;i++){
in=ms();
y=in%500000;
t=new H();
t->n=h[y];
t->s=in;
h[y]=t;
}
n=ms();
for(i=0;i<n;i++){
in=ms();
t=h[in%500000];
while(t!=0){
if(t->s==in){
c1++;
break;
}
t=t->n;
}
}
printf("%d",c1);
}

