#include "../pseudo_c.h"
#include <stdio.h>

#define N 10

PROCEDURE(sort, int num[])
BEGIN
        int j;
        int i;
	FOR (SET(i) TO(0), STEP i++ ,UNTIL i < N-1)
        DO
		FOR (SET(j) TO(0) ,STEP j++ ,UNTIL j < N-1 )
		DO
			IF (num[j] IS_LESS num[j+1]) THEN(
					SWAP(num[j], num[j+1])
					)
		END
	END
END

int main()
{
	int nums[N] = {4,8,12,17,7,0,6,8,2,1};

	printf("Unsorted: ");
	for (int i = 0; i < N; i++)
		printf("%2d ", nums[i]);

	sort(nums);

	printf("\nSorted:   ");

	for (int i = 0; i < N; i++)
		printf("%2d ", nums[i]);

	puts("");

	return 0;
}
