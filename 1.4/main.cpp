#include <iostream>
#include <unordered_map>

using namespace std;

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