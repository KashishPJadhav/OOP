#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() 
{  
    ofstream outFile("data.txt");
    
    cout << "Enter data to file " << endl;
    string line;
    while (getline(cin, line)) 
	{
        outFile << line << endl;
    }

    outFile.close();

    cout << "Data entered" << endl;

    return 0;
}

