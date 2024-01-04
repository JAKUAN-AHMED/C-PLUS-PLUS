#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N; // Read the number N
    char S;
    int freq[26] = {0}; // Frequency array to store the count of each letter
    for(int i=0;i<N;i++)
    {
        cin>>S;
        freq[S-'a']++;
    }
    
    // Reconstruct the sorted string based on the frequency array
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < freq[i]; j++) {
            cout << (char)('a' + i);
        }
    }
    
    cout << endl; // Print a newline character after the sorted string
    
    return 0;
}
