// Problem Codeforce - Boy Or Girl
#include <iostream>
#include <set>
using namespace std;

int main() {
    string username;
    cin >> username;  // Read the username

    set<char> distinct_characters;  // A set to store distinct characters

    // Insert each character of the username into the set
    for (char ch : username) {
        distinct_characters.insert(ch);
    }

    // Check if the size of the set (number of distinct characters) is even or odd
    if (distinct_characters.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;  // Even, so print "CHAT WITH HER!"
    } else {
        cout << "IGNORE HIM!" << endl;  // Odd, so print "IGNORE HIM!"
    }

    return 0;
}
