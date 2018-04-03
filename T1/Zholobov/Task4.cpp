#include <stdio.h>
#include <malloc.h>
#include <string.h>
int main(void)
{
    char str[1024], *p;
    int l, i, j;

    printf("������� ������: ");
    gets(str);
    l = strlen(str);
    if(l == 0)
    {
        printf("������� ������ ������\n");
        return 0;
    }

    p = (char *)malloc(l);

    i = l - 1;
    // ���������� ������� ������
    while(i >= 0 && (str[i] == ' ' || str[i] == '\n'))
    {
        str[i--] = 0;
    }
    if(i < 0)
    {
        printf("������ ������� �� ��������\n");
        return 0;
    }

    // ���������� ������� �������
    i = 0;
    while(str[i] == ' ' || str[i] == '\n') i++;
    printf("���������: %s\n", str);


    j = 0;
    while(str[i])
    {
        if(str[i] == ' ')
        {
            p[j++] = '*';
            while(str[i] && str[i] == ' ') i++;
        }
        p[j++] = str[i++];
    }

    printf("���������: %s\n", p);
    free(p);
    return 0;
}
