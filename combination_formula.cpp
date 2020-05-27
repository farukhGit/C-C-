// combination formula using factorial function;
#include "iostream"

using namespace std;

int fact(int n){
    
    if(n <= 1){
        return n;
    }else{
        return fact(n - 1) * n;
    } 
}

int c(int n, int r){

    return fact(n) / (fact(r) * fact(n - r));
}

int rc(int n, int r){

    if(n == r || r == 0){
        return 1;
    }
    return rc(n - 1, r) + rc(n - 1, r - 1);
}

int main(){

    cout << "\n" <<rc(6, 3) <<endl;
    return 1;
}