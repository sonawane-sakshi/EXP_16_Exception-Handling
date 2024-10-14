#include <iostream>
using namespace std;

int main() {
    float n1, n2, ans;
    cout << "Enter values of number 1 & 2: ";
    cin >> n1 >> n2;

    try {
        if (n2 == 0) {
            throw n2;
        } else {
            ans = n1 / n2;
            cout << "Answer = " << ans << endl;
        }
    }
    catch (float num) {
        cout << "\nERROR: Division by " << num << endl;
    }

    return 0;
}
