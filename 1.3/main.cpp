#include <iostream>
#include <string>

using namespace std;

/*
	문자열에 들어 있는 모든 공백을 '%20'으로 바꿔 주는 메서드를 
	작성하라. 최종적으로 모든 문자를 다 담을 수 있을 만큼 충분한 공간이 이미
	확보되어 있으며 문자열의 최종 길이가 함께 주어진다고 가정해도 된다.
*/

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