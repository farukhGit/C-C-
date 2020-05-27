#include "iostream"

using namespace std;

int fibonacci_iter(int x){
    int t[2];
    t[0] = 0;
    t[1] = 1;
    int s;
    if(x<= 1){
        return x;
    }
    for(int i = 2; i <= x; i++){
        s = t[0] + t[1];
        t[0] = t[1];
        t[1] = s;
    }
    return s;
}

int fibonacci_rec(int x){

    if(x <= 1){

        return x;
    }else{

        return fibonacci_rec(x - 2) + fibonacci_rec(x - 1);
    }
}

int main(){

    int nth_term = 5;
    cout << "\n" <<fibonacci_rec(nth_term - 1) <<endl;
    return 1;
}