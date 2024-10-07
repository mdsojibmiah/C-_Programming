#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;  // Read the input word

    int upper_count = 0, lower_count = 0;

    // Count the number of uppercase and lowercase letters
    for (char c : s) {
        if (isupper(c)) {
            upper_count++;
        } else {
            lower_count++;
        }
    }

    // Compare the counts and transform the word accordingly
    if (upper_count > lower_count) {
        for (char &c : s) {
            c = toupper(c);  // Convert to uppercase
        }
    } else {
        for (char &c : s) {
            c = tolower(c);  // Convert to lowercase
        }
    }

    cout << s << endl;  // Output the result

    return 0;
}

