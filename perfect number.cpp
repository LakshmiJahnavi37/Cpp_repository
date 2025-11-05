#include <iostream>
using namespace std;
int main() {
    int n, temp, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;
   for (int i = 1; i < temp; i++) {
        if (temp % i == 0) {
            sum += i;
        }
    }
    if (sum == n) {
        cout << n<< " is a Perfect Number!" << endl;
    } else {
        cout << n<< " is NOT a Perfect Number." << endl;
    }
   return 0;
}
