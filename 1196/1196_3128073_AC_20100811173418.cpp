﻿#include <iostream>
using namespace std;
inline int __cdecl getchar1 (void)
{
  return (--stdin->_cnt >= 0)
    ?  (int) (unsigned char) *stdin->_ptr++
    : _filbuf (stdin);
}
inline int __cdecl putchar1(int __c)
{
  return (--stdout->_cnt >= 0)
    ?  (int) (unsigned char) (*stdout->_ptr++ = (char)__c)
    :  _flsbuf (__c, stdout);}
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
void mp(int s){
     char b[12];
     int l=0,i,m=0;
     if(s==0){
       putchar(48);
       return;
     }
     if(s<0){
       m=1;
       s=-s;
     }
     while(s){
       b[l]=s%10;
       l++;
       s/=10;
     }
     if(m)putchar('-');
     for(i=l-1;i>=0;i--)putchar(b[i]+'0');
}
int main(){
int n,i,in,y,c=0;
ios::sync_with_stdio(false);
cin>>n;
for(i=0;i<n;i++){
cin>>in;
y=in-((in>>18)<<18);
t=new H();
t->n=h[y];
t->s=in;
h[y]=t;
}
cin>>n;
for(i=0;i<n;i++){
cin>>in;
t=h[in-((in>>18)<<18)];
while(t!=0){
if(t->s==in){
c++;
break;
}
t=t->n;
}
}
cout<<c;
}
