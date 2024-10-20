#include <stdio.h>
#include <stdlib.h>
void str_rev(char s1[]);
void str_copy (char s1[]);
void str_concat(char s1[],char s2[]);
void str_len(char s1[]);
int str_cmp(char s1[],char s2[]);
void str_pal(char s1[]);
int main()
{
     char data[50];
    char data_1[50];
    int choice;
    do{
    printf("\n1 StrLen");
    printf("\n2 StrCopy");
    printf("\n3 StrConcat");
    printf("\n4 StrCmp");
    printf("\n5 StrRev");
    printf("\n6 StrPalindrome");
    printf("\n7 Exit");
    printf("\n Enter Choice");
    scanf("%d" , &choice);
    switch(choice)
    {
    case 1:
        printf("enter your string here\n");
        fflush(stdin);
        gets(data);
        str_len(data);
        break;
    case 2:
        printf("enter string \n");
        fflush(stdin);
        gets(data);
        str_copy(data);
        break;
    case 3:
        printf("enter string 1 here \n");
        fflush(stdin);
        gets(data);
        printf("enter string 2 here \n");
        fflush(stdin);
        gets(data_1);
        str_concat(data,data_1);
        break;
    case 4:
        printf("enter string 1 here \n");
        fflush(stdin);
        gets(data);
        printf("enter string 2 here \n");
        fflush(stdin);
        gets(data_1);
        int cmp;
        cmp = str_cmp(data,data_1);
        if(cmp==0)
        {
             printf("str same");
        }
        else
        {
               printf("str not same");
        }
        break;
    case 5:
        printf("enter string  here \n");
        fflush(stdin);
        gets(data);
        str_rev(data);
        break;

    case 6:
        printf("enter str 1 here");
        fflush(stdin);
        gets(data_1);
        str_pal(data_1);
        break;

    case 7:
        exit(1);
        break;

    default:
        printf("\n WRONG CHOICE!!!!!!!!!!!");

    }
    }while(choice!=7);
    return 0;
}

void str_rev(char s1[])
{
    char s2[20];
    int i=0;int j=0;
    while(s1[i]!='\0')
    {
        i++;
    }
    i--;
    while(i>=0)
    {
        s2[j]=s1[i];
        i--;
        j++;
    }
    s2[j]='\0';
    printf("rerverse str =%s",s2);
}

void str_copy(char s1[])
{
    char s2[50];
    int i=0;
    while(s1[i]!='\0')
    {
        s2[i]=s1[i];
        i++;
    }
s2[i]='\0';
printf("copied str =%s",s2);
}


void str_concat(char s1[],char s2[])
{
    int i=0,j=0;
    while(s1[i]!='\0')
    {
        i++;
    }
    printf("in fun");
    while(s2[i]!='\0')
    {
        s1[i]=s2[j];
        i++;
        j++;
    }
s1[i]='\0';
printf("concat= %s",s1);
}
void str_len(char s1[])
{
    int i=0;
    while(s1[i]!='\0')
    {
        i++;
    }
    printf("len of string=%d",i);
    }
int str_cmp(char s1[],char s2[])
{
    int i=0;int j=0;int flag=0;
    while(s1[i]!='\0'&& s2[j]!='\0')
    {
        if (s1[i]!=s2[j])
        {
            flag=1;
            break;

        }
        i++;
        j++;
    }
        return flag;
}

void str_pal(char s1[])
{
    char s2[20];
    int i=0,j=0,flag=0;
    while(s1[i]!='\0')
    {
        i++;
    }
    i--;
    while(i>=0)
    {
        s2[j]=s1[i];
        j++;
        i--;
    }
    s2[j]='\0';
    i=0,j=0;
    while(s1[i]!='\0'&& s2[j]!='\0')
          {
              if(s1[i]!=s2[j])
            {
                flag=1;
                break;
            }
            i++;
            j++;
          }
          if(flag==0)
          {
              printf("palindrom");

          }
          else
          {
              printf("not palindrom");
          }
}
