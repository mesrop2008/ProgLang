#include <iostream>
using namespace std;

int main() {
    int k = 3;
    while (int left = k--)
        cout << "left=" << left << ' ';
    cout << endl;

    int i;
    for (i = 0; i < 3; i++)
        cout << i << ' ';
    cout << endl;

    int s = 0;
    for (;;) {
        if (++s == 4) break;
        cout << s << ' ';
    }
    cout << endl;

    for (int v : {7, 8, 9})
        cout << v << ' ';
    cout << endl;
    return 0;
}
