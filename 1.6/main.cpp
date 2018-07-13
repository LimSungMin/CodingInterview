#include <iostream>
#include <string>

using namespace std;

/*
	반복되는 문자의 갯수를 세는 방식의 기본적인 문자열 압축 메서드를 작성하라.
	예를 들어 문자열 aabcccaaa를 압축하면 a21c3a3이 된다. 만약 압축된 문자열의
	길이가 기존 문자열의 길이보다 길다면 기존 문자열을 반환해야 한다.
*/

void PrintCompressString(const string s)
{
	string result("");	

	char temp = s[0];
	int count = 0;

	for (int i = 1; i <= s.length(); i++)
	{
		count++;
		if (s[i] != temp || i >= s.length())
		{			
			result += temp + to_string(count);
			temp = s[i];
			count = 0;
		}		
	}

	if (result.length() > s.length())
	{
		result = s;
	}

	cout << result << endl;
}

int main() 
{
	PrintCompressString("aabcccccaaa");
	PrintCompressString("aaaaaaaabbbbcccdfasd");
}