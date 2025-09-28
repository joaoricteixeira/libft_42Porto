#include "libft.h"
#include <ctype.h>
#include <assert.h>
#include <stdio.h>

int main(void)
{
	int tests[] = {
        'a', 'z', 'm',
        'A', 'Z', 'M',
        '0', '9',
        '!', '@', '#', '.', ',',
        ' ', '\t', '\n',
        EOF, 128, 255
    };
	size_t i;
/*	int std;
	int mine;

	i = 0;
	while(i < sizeof(tests)/sizeof(tests[0]))
	{
		std = toupper((unsigned char) tests[i]); //unsigned char to not give issues with EOT
		mine = ft_toupper((unsigned char)tests[i]);

		if(std != mine)
		{
			printf("Failed on %d\n", tests[i]);
			return (1);
		}
		else
			printf("Passed\n");
		i++;
	}
*/
	i = 0;
	while(i < sizeof(tests)/sizeof(tests[0]))
	{
		assert(ft_tolower(tests[i]) == tolower(tests[i]));
		i++;
	}
}
