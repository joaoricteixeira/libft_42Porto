#include <assert.h>
#include <string.h>
#include "libft.h"  // your ft_memmove

int main(void)
{
    char src[20] = "Hello, memmove!";
    char dst1[20];
    char dst2[20];
    size_t i = 0;

    // Array of test sizes
    size_t sizes[] = {0, 1, 5, strlen(src)};
    while (i < sizeof(sizes)/sizeof(sizes[0]))
    {
        memset(dst1, 0, sizeof(dst1));
        memset(dst2, 0, sizeof(dst2));

        void *ret1 = ft_memmove(dst1, src, sizes[i]);
        void *ret2 = memmove(dst2, src, sizes[i]);

        // Return value check
        assert(ret1 == dst1);
        assert(ret2 == dst2);

        // Memory contents check
        assert(memcmp(dst1, dst2, sizeof(dst1)) == 0);

        i++;
    }

    // src == dest
    char buf1[10] = "abcdef";
    char buf2[10] = "abcdef";
    ft_memmove(buf1, buf1, 6);
    memmove(buf2, buf2, 6);
    assert(memcmp(buf1, buf2, 6) == 0);

    // Overlap: src < dest
    char ov1[10] = "abcdef";
    char ov2[10] = "abcdef";
    ft_memmove(ov1+2, ov1, 4);  // overlap
    memmove(ov2+2, ov2, 4);
    assert(memcmp(ov1, ov2, 10) == 0);

    // Overlap: src > dest
    char ov3[10] = "abcdef";
    char ov4[10] = "abcdef";
    ft_memmove(ov3, ov3+2, 4);  // overlap
    memmove(ov4, ov4+2, 4);
    assert(memcmp(ov3, ov4, 10) == 0);

    return 0;
}
