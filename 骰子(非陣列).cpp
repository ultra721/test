#include <iostream>
#include <iomanip>
#include <cstdlib> // 跑计把计
#include <ctime> // 丁把计 
using namespace std;

int cosmos();   //抖 
int zero();   //眔だ计 
int b=0,c=0,d=0,e=0,x=0;

int main(){
	srand(time(0));// 丁跑计  
		cout<<"Faces of 4 dices:"<<endl;
        for(int r=1;r<=500;r++){	//浑きΩ 
	        for(int a=1;a<=4;a++){  //浑 
	    	    x=1+rand()%5;
	    		cout<<setw(3)<<x;
			    if(a==1){  
	    	        b=x; //计 
	    	        } 
	    	    if(a==2){ 
	    	        c=x; //计
	    	        } 
	    	    if(a==3){ 
	    	        d=x; //计
	    	        } 
	    	    if(a==4){ 
	    	        e=x;//计 	        
	    	        } 
	        }
	       cosmos(); //抖 
	       zero(); //眔だ计 
	      
			if(zero()!=0) 
			cout<<setw(7)<<"だ计= "<<zero()<<endl; //讽癨,2 2┪2 1 1 
			else
			cout<<setw(7)<<"礚だ计"<<endl; //讽3 1┪计常ぃ妓 
	   } 
	   cout<<"Finished executing";
	}
	
	int cosmos(){ //抖(ゑ) 
	    int z=0; //既竟 
     	if(b>c){ 
             z=b;
             b=c;
             c=z;
             } 
		if(b>d){
		     z=b;
             b=d;
             d=z;
         }
		if(b>e){ 
             z=b;
             b=e;
             e=z;
		} 
		if(c>d){ 
             z=c;
             c=d;
             d=z;
		} 
		if(c>e){ 
             z=c;
             c=e;
             e=z;
		} 
		if(d>e){ 
             z=d;
             d=e;
             e=z;
		} 
    }
	
	
	int zero(){ //眔だ计  
		if(b==c&&c==d&&d==e)
			return 100; //癨 
		else if(b==c&&d==e)
			return d+e; //2 2(ㄢ癸) 	
		else if(b==c&&c==d||c==d&&d==e)
			return 0; //3 1()  
		else if(b==c)
			return d+e; //2 1 1(ㄢ) 
		else if(c==d)
			return b+e; //2 1 1(ㄢ) 
		else if(d==e)
			return b+c; //2 1 1(ㄢ) 
		else
		     return 0; //计常ぃ妓 
	} 
