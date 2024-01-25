#include <stddef.h>

int square_sum(const int values[], size_t count)
{
    int i = -1;
    int sm = 0;

    while (++i < count)
        sm = sm + (values[i] * values[i]);
	return sm;
}
