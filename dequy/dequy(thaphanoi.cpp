#include<iostream>
using namespace std;
void Thap(int n, char A , char B , char C){
	if(n==1){
	cout << A << "----> " << C << endl ;
	return ;
		   }
	else{
	
	Thap(n-1, A ,C,B);
	Thap(1,A,B,C);
	Thap(n-1,B,A,C);
	}
	
}
int main(){
	int n;	
	char A='A',B='B',C='C';
	cin >> n;
	Thap(n,A,B,C);
}
