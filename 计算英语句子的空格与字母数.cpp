// ����һ��Ӣ�ľ��ӣ�����ո�������ĸ��
// 2019-7-18 by Ackermann Xia
#include<iostream>
#include<string>
int main()
{
	using namespace std;
	cout << "������һ��Ӣ�Ĳ��Ծ���β." << endl;
	string senten;
	getline(cin, senten);
	//cin >> senten;//�����ո��ֹͣ�� 
	//cout << senten.size() << endl;
	int i,space = 0,word = 0;
	for (i = 0; i < senten.size(); i++)
	{
		if (senten[i] == ' ')
			space++;
		if ((senten[i]>='a' && senten[i]<='z')
			||(senten[i] >= 'A' && senten[i] <= 'Z'))
			word++;
	}

	cout << "�ո���:" << space << endl;
	cout << "��ĸ��:" << word << endl;
	return 0;
}