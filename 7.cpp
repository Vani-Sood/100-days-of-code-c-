//wap to print numeric pyramid
//    1
//   121
//  12321
// 1234321
//123454321
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int s=1;s<=n-i;s++){//for space
			cout<<" ";
		}
		for(int j=1;j<=i;j++){//for increasing no.
			cout<<j;
		}
		for(int j=i-1;j>=1;j--){//for decreasing no.
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}

