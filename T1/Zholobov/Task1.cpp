#include <stdio.h>
int main(void)
{
    int list[]={23,145,1,23,456,9,10};
    int size = sizeof(list)/sizeof(int);
    int f = 0, i, j;
    if(size == 1)
    {
        printf("������ ������� �� ������ ����������� ��������\n");
        return 0;
    }
    for(i = 0; i < size - 1; i++)
    {
        for(j = i + 1; j < size; j++)
        {
            if(list[i] == list[j])
            {
                printf("�������� %d � %d �������� ����� %d �� ���������\n", i, j, list[i]);
                f = 1;
            }
        }
    }

    if(!f)
    {
        printf("��� �������� ���������\n");
        return 0;
    }
}
