#include <assert.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    const char *srcs[] = {"Hello, strlcpy!", "", "42Porto"};
    size_t dstsizes[] = {0, 1, 3, 6, 20};

    char dst1[50];
    char dst2[50];

    for (size_t i = 0; i < sizeof(srcs)/sizeof(srcs[0]); i++)
    {
        for (size_t j = 0; j < sizeof(dstsizes)/sizeof(dstsizes[0]); j++)
        {
            memset(dst1, 'X', sizeof(dst1));
            memset(dst2, 'X', sizeof(dst2));

            size_t ret1 = ft_strlcpy(dst1, srcs[i], dstsizes[j]);
            size_t ret2 = strlcpy(dst2, srcs[i], dstsizes[j]);

            assert(ret1 == ret2);
            // Compare *only the destination buffer*, not the whole array blindly
            assert(memcmp(dst1, dst2, sizeof(dst1)) == 0);
        }
    }

    return 0;
}
