#include <iostream>
#include <unordered_map>

using namespace std;

/*
	중복이 없는가 : 문자열이 주어졌을 때, 이 문자열에 같은 문자가 중복되어
	등장하는지 확인하는 알고리즘을 작성하라. 자료구조를 추가로 사용하지
	않고 풀 수 있는 알고리즘 또한 고민하라.
	힌트 : #44, #117, #132
*/

bool CheckDuplicateCharacter(string input)
{
	unordered_map<char, bool> hash_map;
	for (const char& c : input)
	{
		if (hash_map.find(c) != hash_map.end())
			return true;
		hash_map[c] = true;
	}
	return false;
}

int main()
{
	cout << CheckDuplicateCharacter("abcdefg") << endl;
	cout << CheckDuplicateCharacter("aaabdccc") << endl;
	cout << CheckDuplicateCharacter("abdeghag") << endl;
	cout << CheckDuplicateCharacter("deacf") << endl;
}