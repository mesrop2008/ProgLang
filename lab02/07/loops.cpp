#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int x = 1;
    while (x < 1000) {
        cout << x << ' ';
        x *= 2;
    }
    cout << endl;

    int n = 0;
    do {
        cout << "n=" << n << ' ';
        ++n;
    } while (n < 3);
    cout << endl;

    for (int i = 0; i < 5; ++i)
        cout << i * i << ' ';
    cout << endl;

    int arr[] = {10, 20, 30};
    for (int v : arr)
        cout << v << ' ';
    cout << endl;

    map<string, int> age = {{"Anna", 20}, {"Oleg", 19}};
    for (const auto& [name, a] : age)
        cout << name << ':' << a << ' ';
    cout << endl;
    return 0;
}
