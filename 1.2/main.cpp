#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

/*
	���ڿ� �� �밡 �־����� �� �� ���� ���� ���� ���迡 �ִ���
	Ȯ���ϴ� �޼��带 �ۼ��϶�.
*/

bool IsPermutation(string s1, string s2)
{
	// �� ���ڿ��� ������ �� ������ Ȯ���Ѵ�
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());

	if (!s1.compare(s2))
		return true;
	return false;
}

int main()
{
	cout << IsPermutation("abcd", "dcba") << endl;		// true
	cout << IsPermutation("bdabdc", "cbdabd") << endl;	// true
	cout << IsPermutation("abcde", "gdcba") << endl;	// false
}
