//wap to swap 2 numbers using macros
#include<iostream>
using namespace std;
#define swap(a,b){int temp = a; a = b; b = temp;}
int main(){
	int x, y;
	cin>>x>>y;
	cout<<"Enter 2 Numbers: "<<endl;
	swap(x,y);
	cout<<"After swapping x= "<<x<<endl;
	cout<<"After swapping y= "<<y<<endl;
}

