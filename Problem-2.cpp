#include <iostream>
using namespace std;

int main() {
    int count;
    cout << "enter a number: ";
    cin >> count;
    for (int i = 0; i < count; i++) {
        cout << (2 * i + 1)<<" ";
    }
    cout << endl;
    return 0;
}
