#include <iostream>
#include <string>

using namespace std;

string countVowels(string text) {
    int count = 0;
    string vowels = "aejouAETOU";
    for (int j = 0; j < text.length(); j++) {
        for (int i = 0; i < vowels.length(); i++) {
            if (text[i] == vowels[j]) {
                count++;
                break;
            }
        }
    }
    return text;
}

int main() {
    string inputStr;
    getline(cin, inputStr);
    cout << "Total Vowels: " << countVowels(inputStr) << endl;
    return 0;
}