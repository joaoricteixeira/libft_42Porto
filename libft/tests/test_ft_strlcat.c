#include <assert.h>
#include <string.h>
#include "libft.h"  // your ft_strlcat

int main(void)
{
    const char *srcs[] = {"World!", "", "42Porto"};
    const char *dests_init[] = {"Hello, ", "", "Foo"};
    size_t dstsizes[] = {0, 1, 5, 10, 20};

    char dst1[50];
    char dst2[50];

    for (size_t i = 0; i < sizeof(srcs)/sizeof(srcs[0]); i++)
    {
        for (size_t j = 0; j < sizeof(dstsizes)/sizeof(dstsizes[0]); j++)
        {
            // Reset buffers
            memset(dst1, 'X', sizeof(dst1));
            memset(dst2, 'X', sizeof(dst2));
            strcpy(dst1, dests_init[i]);
            strcpy(dst2, dests_init[i]);

            size_t ret1 = ft_strlcat(dst1, srcs[i], dstsizes[j]);
            size_t ret2 = strlcat(dst2, srcs[i], dstsizes[j]);

            // Return values must match
            assert(ret1 == ret2);

            // Buffers must match
            assert(memcmp(dst1, dst2, sizeof(dst1)) == 0);
        }
    }

    return 0;
}
