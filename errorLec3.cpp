#include<iostream>
using namespace std;

int main(){
	char p[50];
	int a;
	int '65';
	int '90';
	cout<<"enter password: "<<endl;
	cin>>p;

	try{
		if(p<='65' || p>='90'){
			throw 7;
		}else{
			cout<<"Ur password does not contain upper case"<<endl;
		}
		
	}
	catch(int b){
		cout<<"Ur password is valid"<<endl;
	}
}
