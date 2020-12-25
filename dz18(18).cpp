#include <iostream>
#include <vector>
#include <string>
using namespace std;

void split(vector<string>& words, string row);

int main()
{
	cout << "Input string: ";
	string row;
	getline(cin, row);

	vector<string> words;
	split(words, row);

	cout << "Input symbol: ";
	char symbol;
	cin >> symbol;

	cout << "Words with \"" << symbol << "\": " << endl;
	for (int i = 0; i < words.size(); ++i)
	{
		for (int j = 0; j < words[i].length(); ++j)
		{
			if (words[i][j] == symbol)
			{
				cout << words[i] << endl;
			}
		}
	}

	return 0;
}

void split(vector<string>& words, string row)
{
	auto pos1 = row.find(" ");
	int step = 1;
	for (int i = pos1 + 1; i < row.length(); ++i)
	{
		if ((char)row[i] != ' ')
		{
			step = i - pos1;
			break;
		}
	}
	if (pos1 != string::npos)
	{
		words.push_back(row.substr(0, pos1));
	}
	auto pos2 = row.find(" ");
	if (pos2 != string::npos)
	{
		split(words, row.substr(pos1 + step));
	}
	else
	{
		words.push_back(row.substr(pos1 + step));
	}
}