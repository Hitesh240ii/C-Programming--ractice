#include <stdio.h>
int main(void)
{
    char chr1;
    printf("enter a character:");
    scanf("%c",&chr1);
    if (chr1=='a'||chr1=='A'||chr1=='i'||chr1=='I'||chr1=='e'||chr1=='E'||chr1=='o'||chr1=='O'||chr1=='u'||chr1=='U')
    {
        printf("%c is vowel",chr1);
    }

    else
    {
        printf("%c is consonant",chr1);
    }

 return 0;   
}