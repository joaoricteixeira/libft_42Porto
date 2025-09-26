#include "libft.h"
#include <assert.h>
#include <stdlib.h>

int main(void)
{
	const char *tests[] = {
        "0", "42", "-42",
        "   42", "\t\n\v\f\r123",
        "+123", "-123", "--123", "+-123",
        "123abc", "-42xyz", "  56 78",
        "+", "-", "", "   ",
        "2147483647", "-2147483648",
        "2147483648", "-2147483649"
    };
	size_t i;

	i = 0;
	while (i < sizeof(tests)/sizeof(tests[0]))
	{
		assert(ft_atoi(tests[i]) == atoi(tests[i]));
		i++;
	}

return (0);
}
