//wap to accept string in any case and print it in another case
#include<iostream>
#include<cctype>
using namespace std;
int main(){
	string str;
	cin>>str;
	for(int i=0;i<=str.length();i++){
		if(islower(str[i])){
			str[i]=toupper(str[i]);
		}
		else if(isupper(str[i])){
			str[i]=tolower(str[i]);
		}
	}	
	cout<<"converted string= "<<str<<endl;
	return 0;
}
