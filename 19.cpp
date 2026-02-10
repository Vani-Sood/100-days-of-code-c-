//wap in c++ to accept a string in uppercase and print it in lowercase
#include<iostream>
#include<cctype>
using namespace std;
int main(){
	string str;
	cin>>str;
	for(int i=0;i<=str.length();i++){
		if(isupper(str[i])){
			str[i]=tolower(str[i]);
		}
	}
	cout<<"converted string: "<<str;
}
