#include<iostream>
using namespace std;
int a[15],n;
void init(){
	for(int i=1;i<=n;i++){
		a[i]==0;
	}	
}
void display(){
	for(int i=1;i<=n;i++ ) 
		cout << a[i];
	cout << endl;
}
void Try(int i){
	for(int j=0;j<=1;j++){
		if(1){
			a[i]=j;
			if(i==n ) display();
			else Try(i+1);
		}
	}
}
int main(){
	n=3;
	init();
	Try(1);
	return 0;
}
