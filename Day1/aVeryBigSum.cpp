#include <iostream>
using namespace std;

int main() {

    int n;
    unsigned long long int sum = 0;
    unsigned long long int in;

    cout << "Enter n";
    cin >> n;

    cout << "Enter num : ";
    for(int i = 0;i < n;i++) {

        cin >> in;
        sum += in;
    }
    cout << sum;
    cout << "\n";
    return 0;
}
