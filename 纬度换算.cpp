#include<iostream>
using namespace std;
int main()
{
	const double deg_to_min = 60;
	const double min_to_sec = 60;
	
	cout << "����������ȡ��֡��룺" << endl;
	
	cout << "������ȣ�";
	double degrees;
	cin >> degrees;
	
	cout << "������֣�";
	double minutes;
	cin >> minutes;

	cout << "�������룺";
	double seconds;
	cin >> seconds;

	double result;
	result = degrees + 1 / deg_to_min * minutes + 1 / deg_to_min / min_to_sec * seconds;
	cout << "����ǣ�" <<result<< "��" << endl;
	return 0;
}