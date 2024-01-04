#include <bits/stdc++.h>

using namespace std;

int main() {
    string sentence;
    string word;
    getline(cin, sentence);
    cin >> word;
    int count = 0;
    string::size_type pos = 0;

    while ((pos = sentence.find(word, pos)) != string::npos) {
        ++count;
        pos += word.length();
    }

    cout << "The word \"" << word << "\" appeared " << count << " time(s) in the sentence." << endl;

    return 0;
}
