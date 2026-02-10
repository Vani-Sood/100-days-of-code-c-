//wap to check whether a given number is perfect number or not
#include<iostream>
using namespace std;
int main(){
	int n;
	int sum=0;
	cin>>n;
	for(int i=1;i<=(n/2);i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(sum==n and n!=0){
		cout<<"It is a perfect number";
	}
	else{
		cout<<"Not a perfect number";
	}
}
