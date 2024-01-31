#include<iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"enter age: "<<endl;
	cin>>a;

	try{
		if(a>=18){
			throw 70;
		}else{
			cout<<"u r not capable to vote"<<endl;
		}
		
	}
	catch(int b){
		cout<<"u r capable to vote"<<endl;
	}
}
