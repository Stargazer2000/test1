#include"test1.h"
int main()
{
	int len = 0, a[100] = { 0 };
	cin >> len;
	for (int i = 0;i < len;i++) cin >> a[i];
	cout << sum(a, len) << endl;
	return 0;
}