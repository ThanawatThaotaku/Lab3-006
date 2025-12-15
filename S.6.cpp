#include <stdio.h>
int main()
{
	int score;
	scanf("%d",&score);
	if (score > 100)
		printf("error score");
	else if (score >= 87)
		printf("A");
	else if (score >= 79)
		printf("B");
	else if (score >= 71)
		printf("C %d",79 - score);
	else if (score >= 63)
		printf("D");
	else if (score >= 12)
	printf("F");
	
	return 0;
}
