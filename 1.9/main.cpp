#include <iostream>

using namespace std;

/*
	한 단어가 다른 문자열에 포함되어 있는지 판별하는 isSubstring
	이라는 메서드가 있다고 하자. s1과 s2의 두 문자열이 주어졌고, 
	s2가 s1을 회전시킨 결과인지 판별하고자 한다. isSubstring 메서드를
	단 한 번만 호출해서 판변할 수 있는 코드를 작성하라.
*/

bool isSubstring(string s1, string s2)
{
	if (s2.find(s1) != string::npos)
		return true;
	else
		return false;
}

bool IsRotated(string s1, string s2)
{
	// 문자열의 길이가 같지 않으면 false
	if (s1.length() != s2.length())
		return false;

	/*
	// 회전인지만 검증(구 알고리즘)
	string temp = s2;
	for (int i = 0; i < s1.length(); i++)
	{
		if (temp[0] == s1[0] && s1.compare(temp) == 0)
		{
			return true;
		}					
		// 회전
		temp = temp[temp.length() - 1] + temp.substr(0, temp.length() - 1);
	}
	return false;
	*/

	// 회전문자열+회전문자열 안엔 기존문자열이 반드시 들어가있다.
	return isSubstring(s1, s2 + s2);
}

int main()
{
	cout << IsRotated("waterbottle", "erbottlewat") << endl;	// true
	cout << IsRotated("titanic", "anictit") << endl;	// true
	cout << IsRotated("holyromanempire", "romanholyempire") << endl;	// false
}