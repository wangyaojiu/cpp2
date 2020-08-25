/***********************
AUTOR:WANGHAO
TIME:08/25
WORKS:3_2 P67 输入8位二进制转换为十进制
判断二进制待完善 
************************/
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;


double power(double x,int y);  //引用 3_1 

int main(){
//int a;
int k,j;
char s[100];	
int value=0;
cout<<"请输入一个八位二进制树"<<endl;
/*cin>>a;

for(k=0,j=strlen(s);k<j;k++)
if(s[k]<48||49<s[k])break;   //判读是否为二进制 
if(k<j)
k=0;
else
cout<<"不是一个二进制数"<<endl;  
return 0;                    //若输入的不是二进制则结束 
if(k==0){

*/	for (int i=7;i>=0;i--){
		char ch;
		cin>>ch;
		if(ch=='1')
		value+=static_cast<int>(power(2,i));
		
	}
	cout<<"十进制数是"<<value<<endl;
	return 0;
}

//else
//return 0;}
double power(double x,int y){


  double val=1.0;
  while (y--)
	  val*=x;
  return val;


}
