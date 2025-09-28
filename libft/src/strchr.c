#include <stddef.h>

char *ft_strchr(const char *str, int c)
{
    size_t i = 0;

    // Search through the string
    while (str[i])
    {
        if (str[i] == (char)c)
            return (char *)(str + i);  // Return pointer into original string
        i++;
    }

    // Check if we are searching for the null terminator
    if (c == '\0')
        return (char *)(str + i);

    // Character not found
    return NULL;
}

