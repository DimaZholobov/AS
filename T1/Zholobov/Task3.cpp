#include <stdio.h>
int main(void)
{
    int d;
    printf("������� ����� �����: ");
    scanf("%d", &d);
    printf("�������� ������� ����: ");
    if(!d)
    {
        printf("0\n");
        return 0;
    }
    while(d)
    {
        printf("%d", d%10);
        d /= 10;
    }
    printf("\n");
    
    return 0;
}
