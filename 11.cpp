//wap to swap 2 nos using a third variable called temp
#include<iostream>
using namespace std;
int main(){
	int a, b;
	cin>>a>>b;
	cout<<"no. before swap: "<<a<<" "<<b<<endl;
	int temp=a;
	a=b;
	b=temp;
	cout<<"no. after swap: "<<a<<" "<<b<<endl;
}
