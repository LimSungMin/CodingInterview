#include <iostream>
#include <string>

using namespace std;

/*
	���ڿ��� ��� �ִ� ��� ������ '%20'���� �ٲ� �ִ� �޼��带 
	�ۼ��϶�. ���������� ��� ���ڸ� �� ���� �� ���� ��ŭ ����� ������ �̹�
	Ȯ���Ǿ� ������ ���ڿ��� ���� ���̰� �Բ� �־����ٰ� �����ص� �ȴ�.
*/

void PrintReplaceBlank(string s)
{
	string output("");
	for (const char& c : s)
	{
		if (c != ' ')
			output += c;
		else
			output += "%20";
	}
	cout << output << endl;
}

int main()
{
	PrintReplaceBlank("Mr John Smith");
}