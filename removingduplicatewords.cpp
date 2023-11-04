#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    char str[100];
    	gets(str);
    char res[100][100];
    	int num = 0;
    char *token = strtok(str, " ");
    while (token != NULL)
    {
        int dup = 0;
        for (int i = 0; i < num; i++)
        {
            if (strcmp(token, res[i]) == 0)
            {
                dup = 1;
                break;
            }
        }
        if (dup == 0)
        {
            strcpy(res[num], token);
            num++;
        }
        token = strtok(NULL, " ");
    }
    for(int i = 0; i < num; i++)
        printf("%s ", res[i]);
    return 0;
}
