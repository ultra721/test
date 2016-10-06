#include <iostream>
#include <iomanip>
#include <cstdlib> // 變數參數
#include <ctime> // 時間參數 
using namespace std;

int cosmos();   //順序 
int zero();   //得分數 
int x[5];

int main(){
	srand(time(0));// 時間變數 
        for(int b=1;b<=500;b++){	//骰b次 
	        for(int a=1;a<=4;a++){  //四個骰子 
	    	    x[a]=1+rand()%6;
	    		cout<<setw(3)<<x[a];
	        }
	       cosmos(); //順序 
	       zero(); //得分數 
			if(zero()!=0){
				if(zero()==100)
					cout<<setw(5)<<"報子"<<endl; //當豹子時 
				else
					cout<<setw(7)<<"分數= "<<zero()<<endl; //當2 2或2 1 1時		
			} 
			else
		    	cout<<setw(7)<<"無分數"<<endl; //當3 1或四個數都不一樣時 
	   }}
	
	int cosmos(){ //順序(比大小) 
	   x[0]=0; //暫存器
	   for(int a=1;a<=3;a++){
	   	  for(int b=a+1;b<=4;b++){
	   	  	if(x[a]>x[b]){ 
             x[0]=x[a];
             x[a]=x[b];
             x[b]=x[0];
             }}}}
	
	int zero(){ //得分數  
		if(x[1]==x[4])
			return 100; //豹子 
		else if(x[1]==x[2]&&x[3]==x[4])
			return x[3]+x[4]; //2 2(兩對相同) 	
		else if(x[1]==x[3] || x[2]==x[4])
			return 0; //3 1(三個相同)  
		else if(x[1]==x[2])
			return x[3]+x[4]; //2 1 1(兩個相同) 
		else if(x[2]==x[3])
			return x[1]+x[4]; //2 1 1(兩個相同) 
		else if(x[3]==x[4])
			return x[1]+x[2]; //2 1 1(兩個相同) 
		else
		     return 0; //四個數都不一樣時 
	} 
