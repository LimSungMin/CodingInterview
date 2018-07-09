#include <iostream>
#include <unordered_map>

using namespace std;

/*
	�ߺ��� ���°� : ���ڿ��� �־����� ��, �� ���ڿ��� ���� ���ڰ� �ߺ��Ǿ�
	�����ϴ��� Ȯ���ϴ� �˰����� �ۼ��϶�. �ڷᱸ���� �߰��� �������
	�ʰ� Ǯ �� �ִ� �˰��� ���� ����϶�.
	��Ʈ : #44, #117, #132
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