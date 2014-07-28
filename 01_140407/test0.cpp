#include<iostream>
using namespace std;

int test(int i, int j) {
    return i*j;
}

int main() {
    int i=3, j=2, k;
    k = test(i, j);
    if (k > 5) cout << ">5" << endl;
    else cout << "<=5" << endl;
    return 0;
}

