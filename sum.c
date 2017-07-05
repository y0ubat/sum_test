#include <stdio.h>
#include "sum.h"

int sum(int n)
{	
	int res = 0;
	for(int i=1;i<101;i++)
		res += i;
	return res;
}
