/*
*Time:08/25
*Autor:wanghao
*works:3_6 骰子游戏 P71
*Dev-c++ v5.11 
*/
#include<iostream>
#include<cstdlib> 
using namespace std;
int rolldice(){
	int a=1+rand()%6;     //生成随机数 
	int b=1+rand()%6;
	int sum=a+b;
	cout<<"骰子点数和为"<<a<<" + "<<b<<" = "<<sum<<endl;
	return sum;
}
enum moshi {WIN,FALSE,PLAYING};
int main(){
	int mypoint,sum;
	moshi status;   
	unsigned seed;  //引入rand函数的种子 
	cout<<"********************************游  戏  规  则****************************************"<<endl;
	cout<<""<<endl;
	cout<<"*每轮投掷两颗骰子，点数和为7或11胜出 为2,3,12则失败"<<endl;
	cout<<""<<endl;
	cout<<"*其余进入第二局，上一局点数和作为下一局的点数"<<endl;
	cout<<""<<endl;
	cout<<"*若点数合和等于第一局点数和，则胜出，在此之前点数和若为7，则失败"<<endl;
	cout<<""<<endl;
	cout<<"请输入一个数字，它可以是任意数，开始随机投掷骰子"<<endl;
	cin>>seed;
	srand(seed);  
	sum=rolldice();
    switch(sum){
    	case 7:
    	case 11:
		status=WIN;   //如果点数和为7&11 胜利 
		break;
	    case 2:
	    case 3:
	    case 12:
	    status=FALSE;    //如果和为2&3&12  失败 
	    break;
	    default:
	    	status=PLAYING;  
			mypoint=sum;            
	    	cout<<"进入下一轮游戏"<<mypoint<<endl;
			break;
		}
		while(status==PLAYING){    //进入下一局 
			sum=rolldice();
			if (sum==mypoint)
			status=WIN;
			else if(sum==7)
			status=FALSE; 
		}
		
		if(status==WIN)
		
			cout<<"****恭喜你赢了o(*￣▽￣*)ブ****"<<endl;
		
		else
			cout<<"虽然输了，但是也要再接再励┗|｀O′|┛祝你好运~"<<endl;
			return 0;
		}
