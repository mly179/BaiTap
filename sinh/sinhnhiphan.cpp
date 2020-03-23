#include <iostream>

using namespace std;


int  bin[10];

void init(int n){
    for (int i=0; i<n; i++){
        bin[i] = 0;
    }
}

bool check(int n){

    for (int i=0; i<n; i++){
        if (bin[i] == 0){
            return 1;
        }
    }
    return 0;

}


void nextGen(int n){

    int i =  n-1;
    while(i>=0 && bin[i] != 0) i--;

    bin[i] = 1;
    for (int j = i+1; j<n; j++){
        bin[j] = 0;
    }
}

void display(int n){
    for (int i=0; i<n; i++){
        cout<<bin[i];
    }
    cout<<endl;
}



int main(){
    int n;
    cin>>n;
    init(n)
;
    display(n)
;
    while (check(n)){
        nextGen(n)
;
        display(n)
;
    }

    cout<<endl;

    return 0;
}
