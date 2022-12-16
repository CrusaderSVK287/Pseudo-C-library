#include "../pseudo_c.h"
#include <stdio.h>

#define N 10

/* LET macro uses __auto_type which is not defined in c++ and therefore cannot be used */
#ifdef __cplusplus

PROCEDURE(sort, int num[])
BEGIN
	int j = 0;
	int i = 0;

	FOR (SET(i) TO(0), STEP INCREMENT i, UNTIL i < N-1)
        DO
		FOR (SET(j) TO(0) ,STEP INCREMENT j, UNTIL j < N-1 )
		DO
			IF (num[j] IS_LESS num[j+1]) THEN(
					SWAP(num[j], num[j+1])
					)
		END
	END
END
#else

PROCEDURE(sort, int num[])
BEGIN
	LET(i, 0)
	LET(j, 0)

	FOR (SET(i) TO(0), STEP INCREMENT i, UNTIL i < N-1)
        DO
		FOR (SET(j) TO(0) ,STEP INCREMENT j, UNTIL j < N-1 )
		DO
			IF (num[j] IS_LESS num[j+1]) THEN(
					SWAP(num[j], num[j+1])
					)
		END
	END
END
#endif	/* cplusplus */

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
