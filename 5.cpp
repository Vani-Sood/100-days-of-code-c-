//wap in c++ to accept student roll number, marks in 3 subjects and calculate total,average and print it
#include<iostream>
using namespace std;
int main(){
	int roll_no;
	double marks1, marks2, marks3;
	cin>>roll_no>>marks1>> marks2>> marks3;
	double total=(marks1+marks2+marks3);
	double average=(total/3);
	cout<<"The students roll number is: "<<roll_no<<endl;
	cout<<"marks1: "<<marks1<<endl;
	cout<<"marks2: "<<marks2<<endl;
	cout<<"marks3: "<<marks3<<endl;
	cout<<"total: "<<total<<endl;
	cout<<"average: "<<average<<endl;
}
