#include <iostream>

using namespace std;

bool isSubstring(string s1, string s2)
{
	if (s2.find(s1) != string::npos)
		return true;
	else
		return false;
}

bool IsRotated(string s1, string s2)
{
	// ���ڿ��� ���̰� ���� ������ false
	if (s1.length() != s2.length())
		return false;

	/*
	// ȸ�������� ����(�� �˰���)
	string temp = s2;
	for (int i = 0; i < s1.length(); i++)
	{
		if (temp[0] == s1[0] && s1.compare(temp) == 0)
		{
			return true;
		}					
		// ȸ��
		temp = temp[temp.length() - 1] + temp.substr(0, temp.length() - 1);
	}
	return false;
	*/

	// ȸ�����ڿ�+ȸ�����ڿ� �ȿ� �������ڿ��� �ݵ�� ���ִ�.
	return isSubstring(s1, s2 + s2);
}

int main()
{
	cout << IsRotated("waterbottle", "erbottlewat") << endl;	// true
	cout << IsRotated("titanic", "anictit") << endl;	// true
	cout << IsRotated("holyromanempire", "romanholyempire") << endl;	// false
}