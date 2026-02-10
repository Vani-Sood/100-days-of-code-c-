//wap to read n mumber and print them in matrix terms in all order
#include<iostream>
using namespace std;
int main(){
	int r, c;
	cin>>r>>c;
	int a[10][10];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}
	//original matrix
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
	//row-wise order
	cout<<"\nRow-wise order: ";
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<a[i][j];
		}
	}
	//column-wise order
	cout<<"\nColumn-wise order: ";
	for(int j=0;j<c;j++){
		for(int i=0;i<r;i++){
			cout<<a[i][j];
		}
	}
	//transpose
	cout<<"\nTranspose order: ";
	for(int j=0;j<c;j++){
		for(int i=0;i<r;i++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
}
