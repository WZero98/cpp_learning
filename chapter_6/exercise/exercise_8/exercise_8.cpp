// File name: exercise_8
// Author: Wang Pengyu
// Create date: 2025-05-25
// Description: 
#include <iostream>
#include <fstream>
#include <string>

int main()
{   
    using namespace std;
    string filename;
    ifstream inFile;
    int char_count = 0, count_no_space = 0;
    char tmp_ch;
    cout << "Please input the filename or filepath: " << endl;
    getline(cin, filename);
    inFile.open(filename);
    if (!inFile.is_open())
    {
        exit(EXIT_FAILURE);
    }
    else 
    {
        inFile.get(tmp_ch);
        while (inFile.good())
        {
            if (tmp_ch != '\n' && tmp_ch != ' ')
                count_no_space++;  // count without \n and space
            char_count++; // count \n and space
            inFile.get(tmp_ch);
        }
    }
    cout << "Total characters: " << char_count << endl;
    cout << R"(Total characters (exclude '\n' and spaces): )" << count_no_space << endl;
    cin.get();
    return 0;
}
