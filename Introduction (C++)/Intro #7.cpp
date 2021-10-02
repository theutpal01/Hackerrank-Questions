// Pointer
// Made by - Utpal

#include <iostream>
using namespace std;

void update(int *a,int *b) {
    int temp = *a;
    *a += *b;
    *b = max(temp, *b) - min(temp, *b);
}

int main() {
    int a, b;
    cin >> a >> b;
    update(&a, &b);
    cout << a << endl << b << endl;

    return 0;
}