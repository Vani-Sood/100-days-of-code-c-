//wap to convert decimal number to binary number
#include<iostream>
using namespace std;
int main(){
	int decimal;
	cin>>decimal;
	long long binary=0;
	int base=1;
	while(decimal!=0){
		int remainder=decimal%2;
		binary=binary+remainder*base;
		base*=10;
		decimal/=2;
	}
	cout<<"binary number is: "<<binary;
}
