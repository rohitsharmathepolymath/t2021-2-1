#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int a;
    cout << "Enter the number of input values: ";
    cin >> a;
    vector<int> input(a);
    cout << "Enter input values: ";
    for (int i = 0; i < a; i++) {
        cin >> input[i];
    }
    unordered_map<int, int> countMap;
    for (int i = 1; i <= 9; i++) {
        countMap[i] = 0;
    }
    for (int num : input) {
        for (int i = 1; i <= 9; i++) {
            if (num % i == 0) {
                countMap[i]++;
            }
        }
    }
    for (int i = 1; i <= 9; i++) {
            cout << i << ": " << countMap[i] << ", ";
    }
    cout << endl;
    return 0;
}
