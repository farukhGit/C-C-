// what will be the output of the following function f for f(1)?
// a. 5     b. 6    c. 7    d.  8

#include "iostream"

using namespace std;

int f(int i){

    static int n = 1;
    if(i >= 5) return i;
    i += n;
    n++;
    return f(i);
}


int main(){

    cout <<endl;
    cout << f(1) <<endl;
    return 1;
}
