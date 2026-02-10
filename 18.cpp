//wap to print 2 numbers and print the sum using pointers
#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter 2 numbers: ";
	cin>>a>>b;
	int *p;
	int *q;
	p= &a;
	q= &b;
	int sum=*p+*q;
	cout<<"\nsum of numbers is: "<<sum;
}
