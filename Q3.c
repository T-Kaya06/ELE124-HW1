/* home_value_no_math.c
   Calculates the minimum house price without using math.h */

#include <stdio.h>

int main(void)
{
    int popularity;          /* popularity score (integer) */
    int size;                /* size of the house (integer) */
    long long homeValue;     /* result can exceed 2 billion */

    /* ---- input ---- */
    printf("Enter popularity: ");
    scanf("%d", &popularity);

    printf("Enter size: ");
    scanf("%d", &size);

    /* ---- calculation (no math.h) ---- */
    long long popularityCubed = (long long)popularity * popularity * popularity; /* pop^3 */
    long long sizeSquared     = (long long)size * size;                          /* size^2 */

    homeValue = (popularityCubed + sizeSquared) * 10000LL;

    /* ---- output ---- */
    printf("Home value is: %lld\n", homeValue);

    return 0;
}
