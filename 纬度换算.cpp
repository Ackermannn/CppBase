#include<iostream>
using namespace std;
int main()
{
	const double deg_to_min = 60;
	const double min_to_sec = 60;
	
	cout << "请依次输入度、分、秒：" << endl;
	
	cout << "请输入度：";
	double degrees;
	cin >> degrees;
	
	cout << "请输入分：";
	double minutes;
	cin >> minutes;

	cout << "请输入秒：";
	double seconds;
	cin >> seconds;

	double result;
	result = degrees + 1 / deg_to_min * minutes + 1 / deg_to_min / min_to_sec * seconds;
	cout << "结果是：" <<result<< "度" << endl;
	return 0;
}