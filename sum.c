#include <sum.h>

int sumre = 0;
int sum(int n)
{	
	int res = 0;
	for(int i=1;i<101;i++)
		res += i;
	return res;
}
