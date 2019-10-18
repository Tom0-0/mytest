#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class str
{
public:
	str()
	{
		str s;
	}
};

void test()
{
	char *p = NULL;
	strcpy(p, "hellpo");
	printf("%s" ,p);
}

int main(void)
{
	int a = 0;
	a = a++;
	printf("%d ", a);

	printf("\n");
	system("pause");
	return 0;
}
