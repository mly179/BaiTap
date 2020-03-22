#include<iostream>
using namespace std;
int n, a[100];
bool check[100];

	void init(){
	cin >> n;
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
	
}
 void display(){
	for(int i=1;i<=n;i++){
		cout << a[i] <<" ";
	}
	cout << endl;
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(check[j]){
			check[j] == false;
			a[i] = j;
			if(i==n) 
				display();
			else 
				Try(i+1);
			check[j] = true;
		}
	}
	
}
int main(){
	init();
	Try(1);
	return 0;
}
