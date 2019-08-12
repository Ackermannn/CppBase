// 输入一句英文句子，计算空格数和字母数
// 2019-7-18 by Ackermann Xia
#include<iostream>
#include<string>
int main()
{
	using namespace std;
	cout << "请输入一句英文并以句点结尾." << endl;
	string senten;
	getline(cin, senten);
	//cin >> senten;//遇到空格就停止了 
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

	cout << "空格数:" << space << endl;
	cout << "字母数:" << word << endl;
	return 0;
}