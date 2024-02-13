#include <cstdio>
#include <cctype>

int main(int c, char **v)
{
    int i = 0;
    int j = 1;
    const   char*   text = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    if (c == 1)
        puts(text);
    else
    {
        while (v[j] != 0)
        {
            while (v[j][i] != 0)
                putchar(toupper(v[j][i++]));
            j++;
            i = 0;
        }
        putchar('\n');
    }
    return (0);
}