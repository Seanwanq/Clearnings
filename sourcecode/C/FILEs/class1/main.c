#include <stdio.h>

int main()
{
    //1. Ҫ��һ�������ڳ����б�ʾ�ļ�
    //�ļ�ָ���ʾ��FILE *����
    FILE * TEXT = NULL;
    //2. �����ַ������Ӧ���ļ�
    //fopen("·��", "��д��ʽ")
    //һ������: 

    TEXT = fopen("testfile.txt", "r");
    //�����Դ�ʩ

    if(TEXT == NULL)
    {
        TEXT = fopen("testfile.txt", "w+");
    }

    fclose(TEXT);

    return 0;
}