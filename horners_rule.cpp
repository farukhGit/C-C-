#include "iostream"

using namespace std;

double horner(float x, float n){

    float s = 1;
    for(;n > 0; n--){
        s = 1 + x * s / n;
    }
    return s;
}

double horner_rec(float x, float n){

    static double s = 1;
    if(n == 0){
        return s;
    }else{
        s = 1 + s * x / n;
        return horner_rec(x, n - 1);
    }
}

int main(){
    double x = 4.0, n = 10;
    cout << "\n" <<horner_rec(x, n) <<endl;
    return 1;
}