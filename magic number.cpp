#include <iostream>
using namespace std;
int main() {
    int n, temp, sum;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;
    while (temp > 9) {
        sum = 0;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        temp = sum;
    }
    if (temp == 1) {
        cout << n << " is a Magic Number!" << endl;
    } else {
        cout << n << " is NOT a Magic Number." << endl;
    }
	return 0;
}
