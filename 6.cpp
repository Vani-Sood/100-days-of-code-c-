//wap to read three numbers and print the biggest of the given numbers
#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b && a>c){
		cout<<"The biggest number is: "<<a;
	}
	else if(b>a && b>c){
		cout<<"The biggest number is: "<<b;
	}
	else if(c>b && c>a){
		cout<<"The biggest number is: "<<c;
	}
	else{
		cout<<"ERROR";
	}
}

