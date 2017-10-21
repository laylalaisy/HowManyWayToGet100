#include <iostream>
#include <string>
using namespace std;

static int nCount;

void howMany(string num, int resultTemp, int resultFinal)
{
	int numTop;
	int resultLeft = resultFinal - resultTemp;

	numTop = 10 - num.size();

	if (num.size() > 2)
	{
		howMany(num.substr(1, num.length() - 1), resultTemp + numTop, resultFinal);
		howMany(num.substr(1, num.length() - 1), resultTemp - numTop, resultFinal);
		howMany(num.substr(2, num.length() - 2), resultTemp * 10 + numTop + 1, resultFinal);
	}
	else if (num.size() == 2)
	{
		howMany(num.substr(1, num.length() - 1), resultTemp + numTop, resultFinal);
		howMany(num.substr(1, num.length() - 1), resultTemp - numTop, resultFinal);
		if (numTop * 10 + numTop + 1 == resultLeft || numTop * 10 + numTop + 1 == -resultLeft)
		{
			nCount++;
		}
	}
	else if (num.size() == 1)
	{
		if (numTop == resultLeft || numTop == -resultLeft)
		{
			nCount++;
		}
	}
}

int main()
{
	string numOri = "123456789";
	int resultFinal = 100;

	howMany (numOri, 0, resultFinal);

	cout << nCount;
}
