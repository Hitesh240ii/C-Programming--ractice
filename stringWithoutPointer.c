#include<stdio.h>
 #include<stdlib.h>
 void my_str_cpy(char str1[],char str2[]);
 void my_str_rev(char str1[],char str2[]);
 void my_str_cat(char Str1[],char Str2[]);
 void my_str_pal(char str1[],char str2[]);
 int main()
 {
    char s1[30],s2[30];
    int choice;
 do{
    printf("\n Enter the string 1::");
    fflush(stdin);
    gets(s1);
    printf("\n Enter the string 2::");
    gets(s2);
    printf("\n 1. string copy");
    printf("\n 2. string reverse");
    printf("\n 3. string concat ");
    printf("\n 4. String palindrome");
    printf("\n 7. Exit");
    printf("\n Enter your choice::");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
            my_str_cpy(s1,s2);
        break;
    case 2:
            my_str_rev(s1,s2);
        break;
    case 3:
            my_str_cat(s1,s2);
        break;
    case 4:
            my_str_pal(s1,s2);
        break;
    case 7:
        exit(0);
    default:
        printf("\n you have entered Wrong choice");
    }
 }while(choice!=7);
 return 0;
 }
 void my_str_cpy(char str1[],char str2[])
 {
    int i=0;
    while(str1[i]!='\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
    printf("\nThe First string is : %s\n", str1);
    printf("The Second string is : %s\n", str2);
    printf("Number of characters copied : %d\n\n", i);
 }
 void my_str_rev(char str1[],char str2[])
 {
    int i=0,j=0;
    for(i=0; str1[i]!='\0';i++);
    i--;
    for(j = 0 ; i>=0 ;i--,j++ )
    {
        str2[j] = str1[i];
    }
    str2[j] = '\0';
    printf("\n Reversed string is ::%s",str2);
 }
 void my_str_cat(char Str1[],char Str2[])
 {
    int i,j;
    for (i = 0; Str1[i]!='\0'; i++);
 for (j = 0; Str2[j]!='\0'; j++, i++)
 {
 Str1[i] = Str2[j];
 }
 Str1[i] = '\0';
 printf("\n String after the Concatenate = %s", Str1);
 }
 void my_str_pal(char str1[],char str2[])
 {
    int i=0,j=0,flag = 0;;
    for(i=0; str1[i]!='\0';i++);
    i--;
    for(j = 0 ; i>=0 ;i--,j++ )
    {
        str2[j] = str1[i];
    }
    str2[j] = '\0';
   i= 0,j=0;
    while(str1[i] != '\0' && str2[j] != '\0')
    {
        if(str1[i] != str2[j])
        {
            flag = 1;
            break;
        }
        i++;
        j++;
    }
    if (flag == 1)
    {
        printf("String are not palindrome");
    }
    else
        printf("String are  palindrome");
 }