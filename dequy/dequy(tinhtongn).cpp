#include<iostream>
using namespace std;
int tong(int n){
	if(n==0){
		return 0;
			}
	else
		return n+tong(n-1);
}
int main(){
	int n;
	cin >> n;
	cout << tong(n);
}
