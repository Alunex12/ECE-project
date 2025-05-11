#include <bits/stdc++.h>
using namespace std;
int main(){
    string word;
    cout << "Enter your word: ";
    cin >> word;
    string ans = word;
    int size = word.size();
    int left = size;
    char ltrs[size];
    char in;
    int atmpt = 6;
    for (int i = 0; i < size; i++) {
        ltrs[i] = '*';
    }

    
    while(atmpt > 0 && left > 0)
    {
        cout << "Guess a letter: ";
        cin >> in;
        bool found = 0;
        for(int i = 0; i < size; ++i){
            if(in == word[i]){
                ltrs[i] = word[i];
                word[i] = '*';
                left--;
                found = 1;
            }
        }
        if(found){
            if (left > 0)
            cout << ltrs << "\n" << "You got one right! " << left << " letters left." << "\n";
            else{
                cout << "The word is " << ans << "\n" << "You won!!" << "\n";
                break;
                }
        } else {
            atmpt--;
            if (atmpt > 0)
                cout << ltrs << "\n" << "Wrong guess! Attempts left: " << atmpt << "\n";
            else{
                cout << "The word was " << ans << "\n" << "You lost!!" << "\n";
                break;
                }
        }
    }
    system("pause");
    return 0;
}