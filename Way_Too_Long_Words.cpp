#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read the number of words
    for (int i = 0; i < n; ++i) {
        string word;
        cin >> word;  // Read each word

        // If the word has more than 10 characters, abbreviate it
        if (word.length() > 10) {
            cout << word[0] << word.length() - 2 << word.back() << endl;
        } else {
            // Otherwise, print the word as it is
            cout << word << endl;
        }
    }
    return 0;
}
