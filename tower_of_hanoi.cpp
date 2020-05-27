#include "iostream"

using namespace std;

void toh(int n, int a, int b, int c){

    if(n > 0){
        toh(n - 1, a, c, b);
        cout << "\n(" << a << " --> " << c << ")" <<endl;
        toh(n - 1, b, a, c);
    }
}

int main(){

    int a = 1, b = 2, c = 3;
    int num_of_disks = 5;
    toh(num_of_disks, a, b, c);
    return 1;
}