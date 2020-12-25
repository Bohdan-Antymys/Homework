#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;


int main()
{
    ifstream input("test.txt");
    map<string, int> lines;
    int counter = 0;

    while(input)
    {
        string line;
        getline(input, line);
        if(line != "")
        {
            lines.insert({line, line.length()});
        }
        else
        {
            counter++;
        }
        
    }
    cout << "Longest string: " << lines.begin()->first << " of length: "  << lines.begin()->second << endl;
    cout << "Empty strings: " << counter - 1 << endl;
 
    return 0;
}