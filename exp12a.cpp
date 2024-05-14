#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
int main() 
{
    ifstream inFile("data.txt");

    int charCount = 0;
    int wordCount = 0;
    int lineCount = 0;
    string line;

    while (getline(inFile, line)) 
	{
        lineCount++; 
        charCount += line.length(); 

        stringstream ss(line);
        string word;
        while (ss >> word) 
		{
            wordCount++; 
        }
    }

    inFile.close();
    cout << "Number of characters " << charCount << endl;
    cout << "Number of words " << wordCount << endl;
    cout << "Number of lines " << lineCount << endl;

    return 0;
}

