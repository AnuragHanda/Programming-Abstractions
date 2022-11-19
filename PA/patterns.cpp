#include<iostream>

using namespace std;
/*
int pattern(int n){                *
	for(int i=1;i<=n;i++){         **
		for(int j=0;j<i;j++){      ***
			cout<<"* ";            ****
		}
		cout<<endl;
	}
}*/

/*int pattern(int n){
	for(int i=1;i<=n;i++){      1111
		int j=1;                2222
		while(j<=n){            3333
			cout<<i;            4444
			j+=1;
		}
		cout<<endl;
	}*/
	/*
int pattern(int n){
	for(int i=1;i<=n;i++){     1234
		int j=1;               1234
		while(j<=n){           1234
			cout<<j;           1234
			j+=1;
		}
		cout<<endl;
	
}
}*/
/*
int pattern(int n){
	for(int i=1;i<=n;i++){     //4321
		int j=1;               //4321
		while(j<=n){           //4321
			cout<<n-j+1;       //4321
			j+=1;
		}
		cout<<endl;
	}
}*/
/*int pattern(int n){
	int count=1;   
	for(int i=1;i<=n;i++){            //1 2 3 4
		int j=1;                      //5 6 7 8
		                              //9 10 11 12
		while(j<=n){                  //13 14 15 16
			cout<<count<<" ";         //17 18 19 20
			count++;
			j+=1;
		}
		cout<<endl;
}
}*/
/*
int pattern(int n){                //1
	for(int i=1;i<=n;i++){         //22
		for(int j=0;j<i;j++){      //333
			cout<<i;               //4444
		}
		cout<<endl;
}
}*/
/*int pattern(int n){   
int count =1;                      //1
	for(int i=1;i<=n;i++){         //23
		for(int j=0;j<i;j++){      //456
			cout<<count<<" ";      //789
			count++;               //10 11 12
		}
		cout<<endl;
	}
}*/
/*
int pattern(int n){   
//int count =1;                      
	for(int i=1;i<=n;i++){          //123
	int val=i;                      //234
		for(int j=0;j<i;j++){       //345
			cout<<val<<" ";         //567
			val++;                  //789
		}
		cout<<endl;
	}
}*/
/*
int pattern(int n){   
//int count =1;                      
	for(int i=1;i<=n;i++){          //1
	int val=i;                      //21
		for(int j=0;j<i;j++){       //321
			cout<<val<<" ";         //4321
			val--;                  //54321
		}
		cout<<endl;
	}
}*/

/*
int pattern(int n){
	for(int i=1;i<=n;i++){             //AAAA
		int j=1;                       //BBBB
		while(j<=n){                   //CCCC
			cout<<char('A'+i-1);       //DDDD
			j+=1;
		}
		cout<<endl;
	}
}*/
/*
int pattern(int n){
	for(int i=1;i<=n;i++){             //ABCD
		int j=1;                       //ABCD
		while(j<=n){                   //ABCD
			cout<<char('A'+j-1);       //ABCD
			j+=1;
		}
		cout<<endl;
	}
}*/
/*
int pattern(int n){
	int count=0;   
	for(int i=1;i<=n;i++){                      //A B C D
		int j=1;                                //E F G H
		                                        //I J K L
		while(j<=n){                            //M N O P
			cout<<char('A'+count)<<" ";         
			count++;
			j+=1;
		}
		cout<<endl;
}
}*/
/*
int pattern(int n){   
//int count =1;                      
	for(int i=1;i<=n;i++){                    //ABCD
	int val=i-1;                              //BCDE
		for(int j=1;j<=n;j++){                //CDEF
			cout<<char('A'+val)<<" ";         //DEFG
			val++;                            //EFGH
		}
		cout<<endl;
	}
}*/
/*
int pattern(int n){   
//int count =1;                      
	for(int i=1;i<=n;i++){                    //ABCD
	int val=i-1;                              //BCDE
		for(int j=1;j<=n;j++){                //CDEF
			cout<<char('A'+val)<<" ";         //DEFG
			val++;                            //EFGH
		}
		cout<<endl;
	}
}*/
/*
int pattern(int n){                            //1
	for(int i=1;i<=n;i++){                     //22
		for(int j=0;j<i;j++){                  //333
			cout<<char('A'+i-1);               //4444
		}
		cout<<endl;
}
}*/
/*
int pattern(int n){
	for(int i=1;i<=n;i++){                 //A
		int val=i-1;                       //BC  
		for(int j=0;j<i;j++){              //DEF
			cout<<char('A'+val);           //GHIJ
			val++;
		}
		cout<<endl;
	}
}*/
/*
int pattern(int n){
	for(int i=1;i<=n;i++){              //D
		for(int j=0;j<i;j++){           //CD
			cout<<char('A'+n-i+j);      //BCD
		}                               //ABCD
		cout<<endl;
	}
}*/
/*
int pattern(int n){
	for(int i=1;i<=n;i++){
		int spaces=n-i;
		while(spaces){
			cout<<" ";        //   *
			spaces--;         //  **
		}                     // ***
		int col=1;            //****
		while(col<=i){
			cout<<"*";
			col++;
		}
		cout<<endl;
	}
}*/
/*
int pattern(int n){
	for(int i=0;i<n;i++){
		int spaces=i;              //****
 		for(int j=i;j<n;j++){      //***
			cout<<"*";             //**
		}                          //*
	/*	while(spaces){
			cout<<" ";
			spaces--;
		}*/
		/*
		cout<<endl;
	}
}*/
/*
int pattern(int n){
	for(int i=0;i<n;i++){
		int spaces=i;              
 		while(spaces){
			cout<<" ";
			spaces--;
		}                          //****
		for(int j=i;j<n;j++){      // ***
			cout<<"*";             //  **
		}                          //   *
		
		
		cout<<endl;
	}
}*/
/*
int pattern(int n){
	for(int i=1;i<=n;i++){
		int val=1;
		int c=1; 
		int spaces=n-i;
		while(spaces){
			cout<<" ";
			spaces--;
		}
		for(int j=1;j<=i;j++){    //1
			                      //12
			cout<<val;           //121
			val++;              //12321
		}                      //1234321
		for(int k=2;k<=i;k++){
			cout<<c;
			c++;
		}
		cout<<endl;
		
	}
}*/
/*
int pattern(int n){
	for(int i=1;i<=n;i++){ 
		int spaces=n-i;
		while(spaces){
			cout<<" ";
			spaces--;
		}
		for(int j=1;j<=i;j++){    //*
			                     //**
			cout<<"*";           //***
			                    //*****
		}                      //*******
		for(int k=2;k<=i;k++){
			cout<<"*";
			
		}
		cout<<endl;
		
	}
}*//*
int pattern(int n){
	for(int i=1;i<=n;i++){
		int val=i;
		int spaces=i;              //****
 		for(int j=i;j<=n;j++){    
		    int v=j;                     //***
			cout<<v;
			
			                        //**
		}                          //*
		while(spaces){
			cout<<" ";
			spaces--;
		}		
		cout<<endl;
	}
}*/

int pattern(int n){  
  
  /*
      // *
	for(int i=1;i<=n;i++){         //1      1
		for(int j=1;j<=i;j++){    // 12    21
			cout<<j;             //  123  321
		}                       //   12344321
		
	int spaces=2*(n-i)-1;  
      while(spaces){
      	cout<<" ";
      	
	  }
   
                           //**
	for(int j=i;j>=1;j--){   
	      
			if(j==n){                         //***
			continue;
		}
			cout<<j;
		}                  //****
	
		cout<<endl;
}

/*
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=i;j++){
    		cout<<j;
		}
		for(int s=2*(n-i)-1;s>0;s--){     //1     1
			cout<<" ";                    //12   21
		}                                 //123 321
			for(int j=i;j>=1;j--){        //1234321
				if(j==n) continue;
    		cout<<j;
		}
		cout<<endl;
	}
	
	*/
}
int main(){
	pattern(4);
	return 0;
}