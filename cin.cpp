#include <iostream>
using namespace std;

int main()
{
	char c;
	int count = 0;
	while (cin >> c)
	{
		if ((c >= '0') && (c <= '9'))
		{
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
