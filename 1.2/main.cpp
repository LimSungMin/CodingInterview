#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

/*
	문자열 두 대가 주어졌을 때 이 둘이 서로 순열 관계에 있는지
	확인하는 메서드를 작성하라.
*/

bool IsPermutation(string s1, string s2)
{
	// 두 문자열을 정렬한 뒤 같은지 확인한다
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
