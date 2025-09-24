#include <assert.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char src[20] = "Hello world!";
	char dst1[20];
	char dst2[20];
	size_t i;

	//Array of test sizes
	i = 0;
	size_t sizes[] = {0, 1, 5, strlen(src)};
	while (i < sizeof(sizes)/sizeof(sizes[0]))
	{
		//Reset destination buffers
		memset(dst1, 0, sizeof(dst1));
		memset(dst2, 0, sizeof(dst2));

		//Run both functions
		void *ret1 = ft_memcpy(dst1, src, sizes[i]);
		void *ret2 = memcpy(dst2, src, sizes[i]);

		//Check return value
		assert(ret1 == dst1);
		assert(ret2 == dst2);

		//Compare contents
		assert(memcmp(dst1, dst2, sizeof(dst1)) == 0);
		
		i++;
	}

	//test src == dest
	char buf1[10] = "asdasdasd";
	ft_memcpy(buf1, buf1, 6);
	assert(memcmp(buf1, "asdasdasd", 6) == 0);

	return (0);
}
