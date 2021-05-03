#include <stdio.h>

static unsigned int nums[6] = {8, 8, 7, 9, 23, 74};
static unsigned long int next = 1;

int rand(void) // RAND_MAX assumed to be 32767
{
    int num = nums[next - 1];
    next++;
    return (unsigned int)num;
}
