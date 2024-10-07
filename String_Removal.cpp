#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;  // Read number of test cases
    while (t--) {
        string s;
        cin >> s;  // Read the string for each test case
        int n = s.size();

        if (n % 2 != 0) {
            // If the length of the string is odd, we cannot make it empty
            cout << "NO" << endl;
        } else {
            // Check if we have at least one 'ab' or 'ba' pair
            bool can_remove = false;
            for (int i = 0; i < n - 1; i++) {
                if (s[i] != s[i + 1]) {
                    can_remove = true;
                    break;
                }
            }
            if (can_remove) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
