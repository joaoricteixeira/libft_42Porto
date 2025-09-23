#include <assert.h>
#include <string.h>
#include "libft.h"

int main(void) 
{
	assert(ft_strlen("") == strlen(""));
	assert(ft_strlen("42") == strlen("42"));
	assert(ft_strlen("Hello_world") == strlen("Hello_world"));
	assert(ft_strlen("abc\0hidden") == strlen("abc\0hidden"));
	return 0;
}
