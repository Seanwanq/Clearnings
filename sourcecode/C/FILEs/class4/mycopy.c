/*
    �����н���ļ�����д�İ���
    ��ʵ��dos��copyָ��
    �����в���: �������Ĳ���
    �ļ�����: ���ַ��ķ�ʽ��д
*/


#include <stdio.h>
#include <string.h>


int main(int argv, char *argc[])        //�����г���
{
    if (argv != 3)      //��¼�������ַ�������
    {
        printf("use myCopy file1 file2");
    }
    else
    {
        //printf("argc[0] = %s\n", argc[0]);      //����ļ�Ŀ¼
        //printf("argc[1] = %s\n", argc[1]);      //��ŵڶ���ָ��
        //printf("argc[2] = %s\n", argc[2]);      //��ŵ�����ָ��
        printf("���� argc[2] ��? (Yes/No/All): ");

    }
    
    return 0;
}