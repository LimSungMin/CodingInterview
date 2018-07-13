#include <iostream>
#include <unordered_map>

using namespace std;

/*
	주어진 문자열이 회문의 순열인지 아닌지 확인하는 함수를 작성하라.
	회문이란 앞으로 읽으나 뒤로 읽으나 같은 단어 혹은 구절을 의미하며,
	순열이란 문자열을 재배치하는 것을 뜻한다. 회문이 꼭 사전에 등장하는
	단어일 필요는 없다.
*/

bool IsPailndromeArray(const string& s)
{
	unordered_map<char, unsigned short> char_counter;
	for (const char& c : s)
	{
		// 찾지 못했을 때
		if (char_counter.find(c) == char_counter.end())
		{
			char_counter[c] = 1;
		}
		else 
		{
			char_counter[c] = char_counter[c] + 1;
		}
	}
	// 홀수개 가진 원소가 2개 이상이면 false
	unsigned short odd_count = 0;
	for (const auto& kvp : char_counter)
	{
		if (kvp.second % 2 == 1)
			odd_count++;
	}
	if (odd_count > 1)
		return false;
	else
		return true;
}

int main()
{
	cout << IsPailndromeArray("tactcoa") << endl;	// true
	cout << IsPailndromeArray("abc") << endl;		// false
	cout << IsPailndromeArray("aabbccdd") << endl;	// true
}