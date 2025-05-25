// File name: exercise_7 
// Author: Wang Pengyu
// Create date: 2025-05-25
// Description: 
#include <iostream>
#include <string>
#include <cctype>

int main()
{
    using namespace std;
    string temp_input;
    int word_count = 0, vowels = 0, notalpha = 0;
    cout << "Enter words (q to quit): \n";
    cin >> temp_input;
    while (true)
    {
        word_count++;
        if (temp_input.length() == 1 && temp_input[0] == 'q')
        {
            word_count--;
            break;
        } 
        switch (temp_input[0])
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            vowels++;
        default :
            break;
        }
        if (!isalpha(temp_input[0]))
            notalpha++;
        cin >> temp_input;
    }

    // display input result
    cout << "words count: " << word_count << endl;
    cout << "words beginning with vowels count: " << vowels << endl;
    cout << "words beginning with nonalpha: " << notalpha << endl;
    return 0;
}
