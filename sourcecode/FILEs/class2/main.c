#include <stdio.h>
#include <string.h>

int main()
{
    FILE *write = fopen("testfile.file", "w+");

    char str[] = "I love you. ";
    //���е��ļ������������������ƶ��ļ�ָ��
    for(int i = 0; i < strlen(str) + 1; i++)
    {
        fputc(str[i], write);
    }

    fclose(write);

    //char buff[1024] = "";
    FILE *read = fopen("testfile.file", "r");
    int ch = fgetc(read);
    //�ļ���ʶ���ļ�ĩβ�ı�ǣ�EOF
    while(ch != EOF)
    {
        putchar(ch);
        ch = fgetc(read);
    }
    printf("\n");
    fclose(read);
    return 0;
}