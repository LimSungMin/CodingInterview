#include <iostream>
#include <string>

using namespace std;

/*
	�ݺ��Ǵ� ������ ������ ���� ����� �⺻���� ���ڿ� ���� �޼��带 �ۼ��϶�.
	���� ��� ���ڿ� aabcccaaa�� �����ϸ� a21c3a3�� �ȴ�. ���� ����� ���ڿ���
	���̰� ���� ���ڿ��� ���̺��� ��ٸ� ���� ���ڿ��� ��ȯ�ؾ� �Ѵ�.
*/

void PrintCompressString(const string s)
{
	string result("");	

	char temp = s[0];
	int count = 0;

	for (int i = 1; i <= s.length(); i++)
	{
		count++;
		if (s[i] != temp || i >= s.length())
		{			
			result += temp + to_string(count);
			temp = s[i];
			count = 0;
		}		
	}

	if (result.length() > s.length())
	{
		result = s;
	}

	cout << result << endl;
}

int main() 
{
	PrintCompressString("aabcccccaaa");
	PrintCompressString("aaaaaaaabbbbcccdfasd");
}