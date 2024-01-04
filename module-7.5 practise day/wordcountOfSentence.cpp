#include <bits/stdc++.h>
using namespace std;

int main() {
    string sentence, word;
    getline(cin, sentence); // Input the sentence including spaces
    cin >> word; // Input the word to be counted
    cout<<word<<endl;
    int count = 0;
    stringstream ss(sentence);
    string s;
    while (ss >> s) {
            if(word==s)
            {
                count++;
            }
    }

    cout <<count  << endl;
    return 0;
}