#include<iostream>
using namespace std;

int main(){
	int a,b,c,d;
	cout<<"enter number: "<<endl;
	cin>>a;
	cout<<"enter number: "<<endl;
	cin>>b;
	
	try{
		if(d==0){
			throw 7;
		}else{
			c=a/b;
		}
		
	}
	catch(...){
		cout<<"can't devide by 0..."<<endl;
	}
}
