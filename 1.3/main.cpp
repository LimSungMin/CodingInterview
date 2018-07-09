#include <iostream>
#include <string>

using namespace std;

void PrintReplaceBlank(string s)
{
	string output("");
	for (const char& c : s)
	{
		if (c != ' ')
			output += c;
		else
			output += "%20";
	}
	cout << output << endl;
}

int main()
{
	PrintReplaceBlank("Mr John Smith");
}