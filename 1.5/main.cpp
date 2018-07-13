#include <iostream>

using namespace std;

/*
	문자열을 편집하는 방법에는 세 가지 종류가 있다.
	문자 삽입, 문자 삭제, 문자 교체. 문자열 두개가 주어졌을 때
	문자열을 같게 만들기 위한 편집 횟수가 1회 이내인지 확인하는
	함수를 작성하라.
*/

bool CheckStringSimilar(string s1, string s2)
{
	int diff_count = 0;		

	// 문자열 길이가 똑같을 때
	if (s1.length() == s2.length())
	{
		for (unsigned int i = 0; i < s1.length(); i++)
		{
			if (s1[i] != s2[i])
			{
				diff_count++;
				if (diff_count > 1) return false;
			}
		}
	}
	else
	{
		// 차이날 때

		string ls, ss;
		if (s1.length() > s2.length())
		{
			ls = s1;
			ss = s2;
		}
		else {
			ls = s2;
			ss = s1;
		}
		
		int l_index = 0;
		int s_index = 0;

		while (l_index < ls.length() && s_index < ss.length())
		{
			if (ls[l_index] != ss[s_index])
			{
				l_index++;
				if (l_index - s_index > 1) return false;
			}
			else
			{
				l_index++;
				s_index++;
			}
		}
	}

	return true;
}

int main()
{
	cout << CheckStringSimilar("pale", "ple") << endl;
	cout << CheckStringSimilar("pales", "pale") << endl;
	cout << CheckStringSimilar("pale", "bale") << endl;
	cout << CheckStringSimilar("pale", "bake") << endl;
}