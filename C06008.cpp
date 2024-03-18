#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    gets(str);
    char res[101][101];
    int num = 0;
    char *token = strtok(str, " ");
    while (token != NULL)
    {
        int flag = 1;
        for (int i = 0; i < num; ++i)
        {
            if (strcmp(token, res[i]) == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            strcpy(res[num], token);
            num++;
        }
        token = strtok(NULL, " ");
    }
    for (int i = 0; i < num; ++i)
        printf("%s ", res[i]);
    return 0;
}
