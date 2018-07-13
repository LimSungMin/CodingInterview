#include <iostream>

using namespace std;

/*
	���ڿ��� �����ϴ� ������� �� ���� ������ �ִ�.
	���� ����, ���� ����, ���� ��ü. ���ڿ� �ΰ��� �־����� ��
	���ڿ��� ���� ����� ���� ���� Ƚ���� 1ȸ �̳����� Ȯ���ϴ�
	�Լ��� �ۼ��϶�.
*/

bool CheckStringSimilar(string s1, string s2)
{
	int diff_count = 0;		

	// ���ڿ� ���̰� �Ȱ��� ��
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
		// ���̳� ��

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