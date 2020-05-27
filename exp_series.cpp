#include "iostream"

using namespace std;


float exp(float x, float n){
    
    static float p, f;
    float r = 1;
    p = 1;
    f = 1;

    if(n == 0){
        
        return 1;
    }else{

        r = exp(x, n - 1);
        p = p * x;
        f = f * n;
        r =  r + p / f;
        return r;
    }
}

int main(){

    float x = 2, n = 10;
    cout << "\n"<< exp(x, n) <<endl;
    return 1;
}