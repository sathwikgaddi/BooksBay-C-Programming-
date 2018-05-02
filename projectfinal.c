#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


void login();
void reg();
void client(char *username);
void customer(char *username);
void appinfo();
static int i=0;

typedef struct booksinapp
{
    char name[100];
    int stock;
    int costofrent;
}ba;

typedef struct user
{
    char name[30];
     char pass[30];
     int booksrented;
     int booksowned;
}u;

typedef struct rent
{
    char name[30];
    char date[30];
    char book[100];
}rented;


int main()
{
    system("cls");
    system("color 0B");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t      WELCOME TO BOOKSBAY\t\t\t\t");
    printf("\n\t\t\t\t                     -your books partner:)\t\t\t\t");
    printf("\n\t\t\t***************************************************");
   char ch;
    int wh=1;
    printf("\n\n\n\t\t\t\xB2 --->1 -> Login");
    printf("\n\n\n\t\t\t\xB2     2 -> Sign up\n\n");
    printf("\n\t\t\t\xB2     3 -> learn about application.\n\t\t");
    printf("\n\n\t\t\t\xB2     4-> exit the application.\n\n\n\t\t\t");
    while(ch=getch())
    {
        if(ch==13) break;
        if(ch==72 && wh==2)
        {
            system("cls");
            printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
     printf("\n\n\n\t\t\t\t      WELCOME TO BOOKSBAY\t\t\t\t");
    printf("\n\t\t\t\t                     -your books partner:)\t\t\t\t");
    printf("\n\t\t\t***************************************************");
            printf("\n\n\n\t\t\t\xB2 --->1 -> Login");
    printf("\n\n\n\t\t\t\xB2     2 -> Sign up\n\n");
    printf("\n\t\t\t\xB2     3 -> learn about application.\n\t\t");
    printf("\n\n\t\t\t\xB2     4-> exit the application.\n\n\n\t\t\t");
    wh=1;
        }
        else   if(ch==72 && wh==3)
        {
            system("cls");
            printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
     printf("\n\n\n\t\t\t\t      WELCOME TO BOOKSBAY\t\t\t\t");
    printf("\n\t\t\t\t                     -your books partner:)\t\t\t\t");
    printf("\n\t\t\t***************************************************");
            printf("\n\n\n\t\t\t\xB2     1 -> Login");
    printf("\n\n\n\t\t\t\xB2 --->2 -> Sign up\n\n");
    printf("\n\t\t\t\xB2     3 -> learn about application.\n\t\t");
    printf("\n\n\t\t\t\xB2     4-> exit the application.\n\n\n\t\t\t");
    wh=2;
        }
        else   if(ch==72 && wh==4)
        {
            system("cls");
            printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
     printf("\n\n\n\t\t\t\t      WELCOME TO BOOKSBAY\t\t\t\t");
    printf("\n\t\t\t\t                     -your books partner:)\t\t\t\t");
    printf("\n\t\t\t***************************************************");
            printf("\n\n\n\t\t\t\xB2     1 -> Login");
    printf("\n\n\n\t\t\t\xB2     2 -> Sign up\n\n");
    printf("\n\t\t\t\xB2 --->3 -> learn about application.\n\t\t");
    printf("\n\n\t\t\t\xB2     4-> exit the application.\n\n\n\t\t\t");
    wh=3;
        }
        else if(ch==80 && wh==2)
        {
            system("cls");
            printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
     printf("\n\n\n\t\t\t\t      WELCOME TO BOOKSBAY\t\t\t\t");
    printf("\n\t\t\t\t                     -your books partner:)\t\t\t\t");
    printf("\n\t\t\t***************************************************");
            printf("\n\n\n\t\t\t\xB2     1 -> Login");
            printf("\n\n\n\t\t\t\xB2     2 -> Sign up\n\n");
            printf("\n\t\t\t\xB2 --->3 -> learn about application.\n\t\t");
            printf("\n\n\t\t\t\xB2     4-> exit the application.\n\n\n\t\t\t");
            wh=3;
        }
        else   if(ch==80 && wh==1)
        {
            system("cls");
            printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
     printf("\n\n\n\t\t\t\t      WELCOME TO BOOKSBAY\t\t\t\t");
    printf("\n\t\t\t\t                     -your books partner:)\t\t\t\t");
    printf("\n\t\t\t***************************************************");
            printf("\n\n\n\t\t\t\xB2     1 -> Login");
    printf("\n\n\n\t\t\t\xB2 --->2 -> Sign up\n\n");
    printf("\n\t\t\t\xB2     3 -> learn about application.\n\t\t");
    printf("\n\n\t\t\t\xB2     4-> exit the application.\n\n\n\t\t\t");
    wh=2;
        }
          else if(ch==80 && wh==3)
        {
            system("cls");
            printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
     printf("\n\n\n\t\t\t\t      WELCOME TO BOOKSBAY\t\t\t\t");
    printf("\n\t\t\t\t                     -your books partner:)\t\t\t\t");
    printf("\n\t\t\t***************************************************");
            printf("\n\n\n\t\t\t\xB2     1 -> Login");
    printf("\n\n\n\t\t\t\xB2     2 -> Sign up\n\n");
    printf("\n\t\t\t\xB2     3 -> learn about application.\n\t\t");
    printf("\n\n\t\t\t\xB2 --->4-> exit the application.\n\n\n\t\t\t");
    wh=4;
        }


}
    if(wh==1)
    {
        login();
    }
    else if(wh==2)
    {
        reg();
    }
    else if(wh==3)
    {
        appinfo();
    }
    else if(wh==4)
    {
        exit(0);
    }
    return 0;
}

void choice(char *s)
{
    char ch;
    int wh=1;
    system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t\t\t\t\t\t\t\t->Logged in as %s",s);
    printf("\n\n\t\t\t\tChoose who you are:");
    printf("\n\n\n\t\t\t\t\xB2 --->1.client\n\n\t\t\t\t\xB2     2.customer\n\n\t\t\t\t\xB2     3.logout\n\n\n");
    while(ch=getch())
    {
        if(ch==13) break;
        if(ch==72 && wh==2)
        {
            system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t\t\t\t\t\t\t\t->Logged in as %s",s);
    printf("\n\n\t\t\t\tChoose who you are:");
    printf("\n\n\n\t\t\t\t\xB2 --->1.client\n\n\t\t\t\t\xB2     2.customer\n\n\t\t\t\t\xB2     3.logout\n\n\n");
    wh=1;
        }
        else if(ch==72 && wh==3)
        {
            system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t\t\t\t\t\t\t\t->Logged in as %s",s);
    printf("\n\n\t\t\t\tChoose who you are:");
    printf("\n\n\n\t\t\t\t\xB2     1.client\n\n\t\t\t\t\xB2 --->2.customer\n\n\t\t\t\t\xB2     3.logout\n\n\n");
    wh=2;
        }
        else if(ch==80 && wh==1)
        {
            system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t\t\t\t\t\t\t\t->Logged in as %s",s);
    printf("\n\n\t\t\t\tChoose who you are:");
    printf("\n\n\n\t\t\t\t\xB2     1.client\n\n\t\t\t\t\xB2 --->2.customer\n\n\t\t\t\t\xB2     3.logout\n\n\n");
    wh=2;
        }
       else if(ch==80 && wh==2)
       {
           system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t\t\t\t\t\t\t\t->Logged in as %s",s);
    printf("\n\n\t\t\t\tChoose who you are:");
    printf("\n\n\n\t\t\t\t\xB2     1.client\n\n\t\t\t\t\xB2     2.customer\n\n\t\t\t\t\xB2 --->3.logout\n\n\n");
    wh=3;
       }
    }
    switch(wh)
    {
        case 1:
        client(s);
        break;
        case 2:
        customer(s);
        break;
        case 3:
        main();
        break;
    }
}

void incrementstring(char *str)
{
    int i;
    int j;
    int length = strlen(str);
    for(i = strlen(str)-1; i >= 0; i--)
    {
        if (str[i] == '9')
        {
            str[i] = '0';
            if (str[0] == '0')
            {
                for (j = strlen(str)-1; j>=0; j--)
                {
                    str[j+1] = str[j];
                }
                str[0] = '1';
            }
        }
        else{
            str[i]++;
            return;
        }
    }
}

void decrementstring(char *str)
{
    int i,j;
    int len=strlen(str);
    if(str[0]=='1' && len==1)
    {
        strcpy(str,"0");
    }
    else if(str[strlen(str)-1]=='0')
    {
        if(strlen(str)>1)
        {
            str[strlen(str)-1]='9';
            str[strlen(str)-2]--;
        }
        else
            {
            str[strlen(str)-1]='9';
        }
    }
    else str[strlen(str)-1]--;
}

void addbooks(char *username)
{
    system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    FILE *fp;
    fp=fopen("books.txt","a+");
    char name[100];
    printf("\n\n\n\t\t\t\t\tEnter name of book ->  ");
    fflush(stdin);
    gets(name);
    ba b1;
    char s[100];
    int flag=0;
    char temp[500][500];
    int i=0,j=0,k=0;
    char ch[30],wh;
    char common[30];
    int ad;
    while(!feof(fp))
    {
        fgets(b1.name,100,fp);
        if(b1.name[strlen(b1.name) - 1] == '\n')
            b1.name[strlen(b1.name) - 1] = '\0';
        if(strcmp(b1.name,name)==0)
        {
            printf("same");
            strcpy(common,name);
            printf("\ncommon:%s",common);
            flag=1;
            rewind(fp);
            while(!feof(fp))
            {
               fgets(b1.name,100,fp);
                if(b1.name[strlen(b1.name) - 1] == '\n')
                    b1.name[strlen(b1.name) - 1] = '\0';
                strcpy(temp[i++],b1.name);
           }
           break;
        }
    }
    int flag1=0;
    if(flag==1)
    {
        fclose(fp);
        fp=fopen("books.txt","w");
        for(k=0;k<i-1;k++)
        {
            if(flag1==1)
            {
                incrementstring(temp[k]);
                flag1=0;
            }
            if(strcmp(temp[k],common)==0)
            {
                flag1=1;
            }
            fputs(temp[k],fp);
            fputs("\n",fp);
        }
        fclose(fp);
        ad=1;
        system("cls");
        printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
        printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\n\n\n\t\t\t\t\tBook added succesfully!!!");
        printf("\n\n\t\t\t\t\t\xB2 -->1.Add other books.\n\n\t\t\t\t\t\xB2    2.Back to home.\n");
        while(wh=getch())
        {
            if(wh==13) break;
            if(wh==72&&ad==2)
        {
            system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t\tDeleted successfully!!!");
    printf("\n\n\t\t\t\t\t\xB2 -->1.Add other books.\n\n\t\t\t\t\t\xB2    2.Back to home.\n");
    ad=1;
        }
        else if(wh==80&&ad==1)
        {
            system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t\tDeleted successfully!!!");
    printf("\n\n\t\t\t\t\t\xB2    1.Add other books.\n\n\t\t\t\t\t\xB2 -->2.Back to home.\n");
    ad=2;
        }
        }
        if(ad==1)
        {
            addbooks(username);
        }
        else if(ad==2)
        {
            client(username);
        }
    }
    strcpy(b1.name,name);
    b1.stock=1;
    printf("\n\t\t\t\t\tEnter cost of rent ->  ");
    fflush(stdin);
    int cor;
    scanf("%d",&cor);
    b1.costofrent=cor;
    fputs(b1.name,fp);
    fprintf(fp,"\n%d\n%d\n",b1.stock,b1.costofrent);
    fclose(fp);
    ad=1;
    system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t\t->Book added succesfully!!!");
    printf("\n\n\t\t\t\t\t\xB2 -->1.Add other books.\n\n\t\t\t\t\t\xB2    2.Back to home.\n");
    while(wh=getch())
        {
            if(wh==13) break;
            if(wh==72&&ad==2)
        {
            system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t\tDeleted successfully!!!");
    printf("\n\n\t\t\t\t\t\xB2 -->1.Add other books.\n\n\t\t\t\t\t\xB2    2.Back to home.\n");
    ad=1;
        }
        else if(wh==80&&ad==1)
        {
            system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t\tDeleted successfully!!!");
    printf("\n\n\t\t\t\t\t\xB2    1.Add other books.\n\n\t\t\t\t\t\xB2 -->2.Back to home.\n");
    ad=2;
        }
        }
    if(ad==1)
    {
        addbooks(username);
    }
    else if(ad==2)
    {
        client(username);
    }
}

void editcost(char *username)
{
    system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    FILE *fp;
    fp=fopen("books.txt","a+");
    char name[100];
    printf("\n\n\t\t\t\tEnter name of book ->  ");
    fflush(stdin);
    gets(name);
    ba b1;
    char s[100];
    int flag=0;
    char temp[500][500];
    int i=0,j=0,k=0;
    char ch[30],wh;
    char common[30];
    int ad;
    while(!feof(fp))
    {
        fgets(b1.name,100,fp);
        if(b1.name[strlen(b1.name) - 1] == '\n')
            b1.name[strlen(b1.name) - 1] = '\0';
        if(strcmp(b1.name,name)==0)
        {
            strcpy(common,name);
            flag=1;
            rewind(fp);
            while(!feof(fp))
            {
                fgets(b1.name,100,fp);
                if(b1.name[strlen(b1.name) - 1] == '\n')
                    b1.name[strlen(b1.name) - 1] = '\0';
                strcpy(temp[i++],b1.name);
           }
           break;
        }
    }
    int flag1=0;
    if(flag==1)
    {
        fclose(fp);
        fp=fopen("books.txt","w");
        for(k=0;k<i-1;k++)
        {
            if(flag1==1)
            {
                flag1=2;
            }
            else if(flag1==2)
            {
                printf("\n\t\t\t\tEnter new cost ->  ");
                int nc;
                scanf("%d",&nc);
                char nnc[10];
                itoa(nc,nnc,10);
                strcpy(temp[k],nnc);
                flag1=0;
            }
            if(strcmp(temp[k],common)==0)
            {
                flag1=1;
            }
            fputs(temp[k],fp);
            fputs("\n",fp);
        }
        fclose(fp);
        ad=1;
        system("cls");
        printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
        printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\n\n\n\t\t\t\t\tCost edited successfully!!!");
        printf("\n\n\t\t\t\t\t\xB2 -->1.Add other books.\n\n\t\t\t\t\t\xB2   2.Back to home.\n");
        while(wh=getch())
        {
            if(wh==13) break;
            if(wh==72&&ad==2)
        {
            system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t\tDeleted successfully!!!");
    printf("\n\n\t\t\t\t\t\xB2 -->1.Add other books.\n\n\t\t\t\t\t\xB2    2.Back to home.\n");
    ad=1;
        }
        else if(wh==80&&ad==1)
        {
            system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t\tDeleted successfully!!!");
    printf("\n\n\t\t\t\t\t\xB2    1.Add other books.\n\n\t\t\t\t\t\xB2 -->2.Back to home.\n");
    ad=2;
        }
        }
        if(ad==1)
        {
            addbooks(username);
        }
        else if(ad==2)
        {
            client(username);
        }
    }
    //printf("\nNo such book found");
    system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t\tNo such book found!!!");
    printf("\n\n\t\t\t\t\t\xB2 -->1.Add other books.\n\t\t\t\t\t\xB2    2.Back to home.\n");
    while(wh=getch())
        {
            if(wh==13) break;
            if(wh==72&&ad==2)
        {
            system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t\tDeleted successfully!!!");
    printf("\n\n\t\t\t\t\t\xB2 -->1.Add other books.\n\n\t\t\t\t\t\xB2    2.Back to home.\n");
    ad=1;
        }
        else if(wh==80&&ad==1)
        {
            system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t\tDeleted successfully!!!");
    printf("\n\n\t\t\t\t\t\xB2    1.Add other books.\n\n\t\t\t\t\t\xB2 -->2.Back to home.\n");
    ad=2;
        }
        }
    if(ad==1)
    {
        addbooks(username);
    }
    else if(ad==2)
    {
        client(username);
    }
}

void deletebooks(char *username)
{
    system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    FILE *fp1;
    printf("\n\n\t\t\t\tEnter the name of book u wanna delete ->  ");
    char deletingbook[100];
    fflush(stdin);
    gets(deletingbook);
    char bookname[100],ch;
    char bookstemp[100][100];
    int booki=0,bookk=0,f1=0,ad=1;
    fp1=fopen("books.txt","r");
    while(!feof(fp1))
    {
        fgets(bookname,100,fp1);
        if(bookname[strlen(bookname)-1]=='\n')
            bookname[strlen(bookname)-1]='\0';
        strcpy(bookstemp[booki++],bookname);
    }
    fclose(fp1);
    fp1=fopen("books.txt","w");
    int f=0;
    for(bookk=0;bookk<booki-1;bookk++)
    {
        if(f==1)
        {
            decrementstring(bookstemp[bookk]);
            f=0;
        }
        else if(strcmp(bookstemp[bookk],deletingbook)==0)
        {
            f=1;
            f1=1;
        }
        fputs(bookstemp[bookk],fp1);
        fputs("\n",fp1);
    }
    fclose(fp1);
    if(f1==0)
    {
        system("cls");
        printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
        printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\n\n\n\t\t\t\t\tNo such book found!!!");
        printf("\n\n\t\t\t\t\t\xB2 -->1.Add other books.\n\n\t\t\t\t\t\xB2    2.Back to home.\n");
        while(ch=getch())
        {
            if(ch==13) break;
            if(ch==72&&ad==2)
        {
            system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t\tDeleted successfully!!!");
    printf("\n\n\t\t\t\t\t\xB2 -->1.Add other books.\n\n\t\t\t\t\t\xB2    2.Back to home.\n");
    ad=1;
        }
        else if(ch==80&&ad==1)
        {
            system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t\tDeleted successfully!!!");
    printf("\n\n\t\t\t\t\t\xB2    1.Add other books.\n\n\t\t\t\t\t\xB2 -->2.Back to home.\n");
    ad=2;
        }
        }
        if(ad==1)
        {
            addbooks(username);
        }
        else if(ad==2)
        {
            client(username);
        }
    }
    ad=1;
    system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t\tDeleted successfully!!!");
    printf("\n\n\t\t\t\t\t\xB2 -->1.Delete other books.\n\n\t\t\t\t\t\xB2    2.Back to home.\n");
    while(ch=getch())
    {
        if(ch==13) break;
        if(ch==72&&ad==2)
        {
            system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t\tDeleted successfully!!!");
    printf("\n\n\t\t\t\t\t\xB2 -->1.Delete other books.\n\n\t\t\t\t\t\xB2    2.Back to home.\n");
    ad=1;
        }
        else if(ch==80&&ad==1)
        {
            system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t\tDeleted successfully!!!");
    printf("\n\n\t\t\t\t\t\xB2    1.Delete other books.\n\n\t\t\t\t\t\xB2 -->2.Back to home.\n");
    ad=2;
        }
    }
    if(ad==1)
    {
        deletebooks(username);
    }
    else if(ad==2)
    {
        client(username);
    }
}

void client(char *username)
{
    char ch;
    int wh=1;
    system("cls");
    system("color 30");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t\twelcome %s\n\n\n",username);
    printf("\t\t\t\t\t\xB2 --->1.Add books\n\n\t\t\t\t\t\xB2     2.Edit books\n\n\t\t\t\t\t\xB2     3.Delete books\n\n\t\t\t\t\t\xB2     4.go back\n");

    while(ch=getch())
    {
        if(ch==13) break;
        if(ch==72 && wh==2)
        {
            system("cls");
    system("color 30");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t\twelcome %s\n\n\n",username);
    printf("\t\t\t\t\t\xB2 --->1.Add books\n\n\t\t\t\t\t\xB2     2.Edit books\n\n\t\t\t\t\t\xB2     3.Delete books\n\n\t\t\t\t\t\xB2     4.go back\n");
    wh=1;
        }
        else if(ch==72 && wh==3)
        {
            system("cls");
    system("color 30");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t\twelcome %s\n\n\n",username);
    printf("\t\t\t\t\t\xB2     1.Add books\n\n\t\t\t\t\t\xB2 --->2.Edit books\n\n\t\t\t\t\t\xB2     3.Delete books\n\n\t\t\t\t\t\xB2     4.go back\n");
    wh=2;
        }
        else if(ch==72 && wh==4)
        {
            system("cls");
    system("color 30");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t\twelcome %s\n\n\n",username);
    printf("\t\t\t\t\t\xB2     1.Add books\n\n\t\t\t\t\t\xB2     2.Edit books\n\n\t\t\t\t\t\xB2 --->3.Delete books\n\n\t\t\t\t\t\xB2     4.go back\n");
   wh=3;
        }
        else if(ch==80 && wh==1)
        {
            system("cls");
    system("color 30");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t\twelcome %s\n\n\n",username);
    printf("\t\t\t\t\t\xB2     1.Add books\n\n\t\t\t\t\t\xB2 --->2.Edit books\n\n\t\t\t\t\t\xB2     3.Delete books\n\n\t\t\t\t\t\xB2     4.go back\n");
    wh=2;
        }
        else if(ch==80 && wh==2)
        {
            system("cls");
    system("color 30");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t\twelcome %s\n\n\n",username);
    printf("\t\t\t\t\t\xB2     1.Add books\n\n\t\t\t\t\t\xB2     2.Edit books\n\n\t\t\t\t\t\xB2 --->3.Delete books\n\n\t\t\t\t\t\xB2     4.go back\n");
    wh=3;
        }
        else if(ch==80 && wh==3)
        {
            system("cls");
    system("color 30");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t\twelcome %s\n\n\n",username);
    printf("\t\t\t\t\t\xB2     1.Add books\n\n\t\t\t\t\t\xB2     2.Edit books\n\n\t\t\t\t\t\xB2     3.Delete books\n\n\t\t\t\t\t\xB2 --->4.go back\n");
    wh=4;
        }

    }
    switch(wh)
    {
        case 1:
        addbooks(username);
        break;
        case 2:
        editcost(username);
        break;
        case 3:
        deletebooks(username);
        break;
        case 4:
        choice(username);
        break;
    }
}

void status(char *s)
{
    system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    FILE *fp;
    fp=fopen("rented.txt","r");
    char un[100],book[100],date[100];
    int flag=0;
    while(fgets(un,100,fp)!=NULL)
    {
        if(un[strlen(un) - 1] == '\n')
            un[strlen(un) - 1] = '\0';
            //printf("\nusername:%s",un);
        fgets(book,100,fp);
        if(book[strlen(book) - 1] == '\n')
            book[strlen(book) - 1] = '\0';
		//printf("\nbook:%s",book);
        fgets(date,100,fp);
        if(date[strlen(date) - 1] == '\n')
            date[strlen(date) - 1] = '\0';
		//printf("\ndate:%s",date);
		//printf("\nun:%s  s:%s",un,s);
        if(strcmp(un,s)==0)
        {
            flag=1;
            printf("\n\n\t\t\t->You rented %s book on %s\n",date,book);
        }
    }
    if(flag==0)
    {
        printf("\n\n\t\t\tYou did not rent any book till now!!!");
    }
    printf("\n\n\t\t\t");
    system("pause");
    customer(s);
}

void returnbook(char *username)
{
    system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    FILE *fp,*fp1;
    fp=fopen("rented.txt","r");
    printf("\n\n\t\t\t\tEnter the name of book u wanna return ->  ");
    char returningbook[100];
    fflush(stdin);
    gets(returningbook);
    char un[100],book[100],date[100],temp[100][100];
    char s[100],wh;
    char returneddate[100];
    char actualdate[100];
    char actualcost[100];
    while(fgets(un,100,fp)!=NULL)
    {
        if(un[strlen(un) - 1] == '\n')
            un[strlen(un) - 1] = '\0';
        fgets(date,100,fp);
        if(date[strlen(date) - 1] == '\n')
            date[strlen(date) - 1] = '\0';
		fgets(book,100,fp);
        if(book[strlen(book) - 1] == '\n')
            book[strlen(book) - 1] = '\0';
        rented r1;
        if(strcmp(un,username)==0)
        {
            if(strcmp(returningbook,book)==0)
            {
                strcpy(actualdate,date);
                char bookstemp[300][300];
                int booki=0,bookk=0;
                fp1=fopen("books.txt","a+");
                char bookname[100];
                while(!feof(fp1))
                {
                    fgets(bookname,100,fp1);
                    if(bookname[strlen(bookname)-1]=='\n')
                        bookname[strlen(bookname)-1]='\0';
                    strcpy(bookstemp[booki++],bookname);
                }
                fclose(fp1);
                fp1=fopen("books.txt","w");
                int f=0;
                for(bookk=0;bookk<booki-1;bookk++)
                {
                    if(f==1)
                    {
                        incrementstring(bookstemp[bookk]);
                        f=2;
                    }
                    else if(f==2)
                    {
                        strcpy(actualcost,bookstemp[bookk]);
                        f=0;
                    }
                    else if(strcmp(bookstemp[bookk],returningbook)==0)
                    {
                        f=1;
                    }
                    fputs(bookstemp[bookk],fp1);
                    fputs("\n",fp1);
                }
                fclose(fp1);
                rewind(fp);
                int i=0;
                while(!feof(fp))
                {
                    fgets(r1.name,100,fp);
                    if(r1.name[strlen(r1.name) - 1] == '\n')
                        r1.name[strlen(r1.name) - 1] = '\0';
                    fgets(r1.date,100,fp);
                    if(r1.date[strlen(r1.date) - 1] == '\n')
                        r1.date[strlen(r1.date) - 1] = '\0';
                    fgets(r1.book,100,fp);
                    if(r1.book[strlen(r1.book) - 1] == '\n')
                        r1.book[strlen(r1.book) - 1] = '\0';
                    if(strcmp(r1.name,username)!=0 || strcmp(r1.book,returningbook)!=0)
                    {
                        strcpy(temp[i++],r1.name);
                        strcpy(temp[i++],r1.date);
                        strcpy(temp[i++],r1.book);
                    }
                }
                int l=0;
                for(l=0;l<i-3;l++)
                {
                    printf("\n%s\n\n\n",temp[l]);
                }
                fclose(fp);
                fp=fopen("rented.txt","w");
                int k=0;
                for(k=0;k<i-3;k++)
                {
                   fputs(temp[k],fp);
                   fputs("\n",fp);
                }
                fclose(fp);
                printf("\n\t\t\t\t->Returned succesfully!!!\n\n\t\t\t\t");
                system("pause");
                system("cls");
                printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
                printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                printf("\n\n\n\t\t");
                time_t t=time(NULL);
                struct tm *tm=localtime(&t);
                char s[64];
                strftime(s,sizeof(s),"%c",tm);
                strcpy(returneddate,s);
                int calculatecost=atoi(actualcost);
                char calculateyear1[3],calculateyear2[3],calculatemonth1[3],calculatemonth2[3];
                calculateyear1[0]=actualdate[6];
                calculateyear1[1]=actualdate[7];
                calculateyear1[2]='\0';
                calculateyear2[0]=returneddate[6];
                calculateyear2[1]=returneddate[7];
                calculateyear2[2]='\0';
                calculatemonth1[0]=actualdate[0];
                calculatemonth1[1]=actualdate[1];
                calculatemonth1[2]='\0';
                calculatemonth2[0]=returneddate[0];
                calculatemonth2[1]=returneddate[1];
                calculatemonth2[2]='\0';
                int temp=0;
                int y1=atoi(calculateyear1);
                int y2=atoi(calculateyear2);
                int m1=atoi(calculatemonth1);
                int m2=atoi(calculatemonth2);
                int nom=(y2-y1)*12+(m2-m1);
                if(nom==0)
                {
                    temp=calculatecost;
                }
                else
                {
                    temp=calculatecost*nom;
                }
                printf("\n\t\t\t***************************************************");
                printf("\n\t\t\t|                                                 |");
                printf("\n\t\t\t|                  ->BILL RECEIPT<-               |");
                printf("\n\t\t\t|              amount payable:%d rupees          |",temp);
                printf("\n\t\t\t|                                                 |");
                printf("\n\t\t\t***************************************************");
                printf("\n\n\n\t\t\t");
                system("pause");
                customer(username);
            }
        }
    }
    printf("\n\n\t\t\tYou did not rent this book\n");
    printf("\n\t\t\t\t\t\xB2 -->1.Retry\n\n\t\t\t\t\t\xB2    2.Home");
    int h=1;;
      while(wh=getch())
        {
            if(wh==13) break;
            if(wh==72&&h==2)
        {
            system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t\tDeleted successfully!!!");
    printf("\n\n\t\t\t\t\t\xB2 -->1.Retry\n\n\t\t\t\t\t\xB2    2.home.\n");
    h=1;
        }
        else if(wh==80&&h==1)
        {
            system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t\tDeleted successfully!!!");
    printf("\n\n\t\t\t\t\t\xB2    1.Retry\n\n\t\t\t\t\t\xB2 -->2.home.\n");
    h=2;
        }
        }
    if(h==1)
    {
        returnbook(username);
    }
    else
    {
        customer(username);
    }
}

void issuebooks(char *username)
{
    system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    FILE *fp,*fp1;
    fp=fopen("books.txt","a+");
    fp1=fopen("rented.txt","a+");
    char search[100];
    ba b1;
    char temp[300][300];
    printf("\n\n\t\t\tEnter the name of the book u wanna rent->  ");
    char wannarent[100];
    fflush(stdin);
    gets(wannarent);
    int k=0,i=0;
    int flag1=0;
    rewind(fp);
    char copy[100],wh;
    while(!feof(fp))
    {
        fgets(b1.name,100,fp);
        if(b1.name[strlen(b1.name) - 1] == '\n')
            b1.name[strlen(b1.name) - 1] = '\0';
        strcpy(temp[i++],b1.name);
    }
    fclose(fp);
    fp=fopen("books.txt","w");
    for(k=0;k<i-1;k++)
    {
        if(flag1==1)
        {
            printf("%s",temp[k]);
            if(strcmp(temp[k],"0")==0)
            {
                printf("\n\n\t\t\tSORRY! Stock Unavialable!!!\n\n\t\t\t");
                system("pause");
                system("cls");
                printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
                printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                printf("\n\n\t\t\t\xB2 -->1.Rent other books.");
                printf("\n\n\t\t\t\xB2    2.Back to Home.");
                int chh=1;
        while(wh=getch())
        {
            if(wh==13) break;
            if(wh==72&&chh==2)
        {
            system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t\tRented successfully!!!");
    printf("\n\n\t\t\t\t\t\xB2 -->1.Rent other books.\n\n\t\t\t\t\t\xB2    2.Back to home.\n");
    chh=1;
        }
        else if(wh==80&&chh==1)
        {
            system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t\tDeleted successfully!!!");
    printf("\n\n\t\t\t\t\t\xB2    1.Rent other books.\n\n\t\t\t\t\t\xB2 -->2.Back to home.\n");
    chh=2;
        }
        }
                if(chh==1)
                {
                    customer(username);
                }
                else
                {
                    customer(username);
                }
            }
            else
            {
             decrementstring(temp[k]);
            }
            flag1=0;
        }
        if(strcmp(temp[k],wannarent)==0)
        {
            flag1=1;
        }
        fputs(temp[k],fp);
        fputs("\n",fp);
    }
    fclose(fp);
    time_t t=time(NULL);
    struct tm *tm=localtime(&t);
    char s[64];
    strftime(s,sizeof(s),"%c",tm);
    fputs(username,fp1);
    fputs("\n",fp1);
    fputs(s,fp1);
    fputs("\n",fp1);
    fputs(wannarent,fp1);
    fputs("\n",fp1);
    fclose(fp1);
    system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t\t\t-->Book rented successfully\n");
    printf("\n\n\t\t\t\xB2 -->1.Rent other books.");
    printf("\n\n\t\t\t\xB2    2.Back to Home.");
    int chh=1;
      while(wh=getch())
        {
            if(wh==13) break;
            if(wh==72&&chh==2)
        {
            system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t\tDeleted successfully!!!");
    printf("\n\n\t\t\t\t\t\xB2 -->1.Rent other books.\n\n\t\t\t\t\t\xB2    2.Back to home.\n");
    chh=1;
        }
        else if(wh==80&&chh==1)
        {
            system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t\tDeleted successfully!!!");
    printf("\n\n\t\t\t\t\t\xB2    1.Rent other books.\n\n\t\t\t\t\t\xB2 -->2.Back to home.\n");
    chh=2;
        }
        }
    if(chh==1)
    {
        customer(username);
    }
    else
    {
        customer(username);
    }
}

void customer(char *username)
{
        char ch;
    int wh=1;

system("cls");
    system("color 20");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t\t\twelcome %s",username);
    printf("\n\n\t\t\t\t\xB2 --->1.view all books\n\n\t\t\t\t\xB2     2.search for a book\n\n\t\t\t\t\xB2     3.your status\n\n\t\t\t\t\xB2     4.return book\n\n\t\t\t\t\xB2     5.go back");
    wh=1;
    while(ch=getch())
    {
        if(ch==13) break;
        if(ch==72 && wh==2)
        {
            system("cls");
    system("color 20");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t\t\twelcome %s",username);
    printf("\n\n\t\t\t\t\xB2 --->1.view all books\n\n\t\t\t\t\xB2     2.search for a book\n\n\t\t\t\t\xB2     3.your status\n\n\t\t\t\t\xB2     4.return book\n\n\t\t\t\t\xB2     5.go back");
    wh=1;
        }
        else if(ch==72 && wh==3)
        {
            system("cls");
    system("color 20");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t\t\twelcome %s",username);
    printf("\n\n\t\t\t\t\xB2     1.view all books\n\n\t\t\t\t\xB2 --->2.search for a book\n\n\t\t\t\t\xB2     3.your status\n\n\t\t\t\t\xB2     4.return book\n\n\t\t\t\t\xB2     5.go back");
    wh=2;
        }
        else if(ch==72 && wh==4)
        {
            system("cls");
    system("color 20");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t\t\twelcome %s",username);
    printf("\n\n\t\t\t\t\xB2     1.view all books\n\n\t\t\t\t\xB2     2.search for a book\n\n\t\t\t\t\xB2 --->3.your status\n\n\t\t\t\t\xB2     4.return book\n\n\t\t\t\t\xB2     5.go back");
    wh=3;
        }
        else if(ch==72 && wh==5)
        {
            system("cls");
    system("color 20");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t\t\twelcome %s",username);
    printf("\n\n\t\t\t\t\xB2     1.view all books\n\n\t\t\t\t\xB2     2.search for a book\n\n\t\t\t\t\xB2     3.your status\n\n\t\t\t\t\xB2 --->4.return book\n\n\t\t\t\t\xB2     5.go back");
    wh=4;
        }
        else if(ch==80 && wh==1)
        {
            system("cls");
    system("color 20");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t\t\twelcome %s",username);
    printf("\n\n\t\t\t\t\xB2     1.view all books\n\n\t\t\t\t\xB2 --->2.search for a book\n\n\t\t\t\t\xB2     3.your status\n\n\t\t\t\t\xB2     4.return book\n\n\t\t\t\t\xB2     5.go back");
    wh=2;
        }
        else if(ch==80 && wh==2)
        {
            system("cls");
    system("color 20");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t\t\twelcome %s",username);
    printf("\n\n\t\t\t\t\xB2      1.view all books\n\n\t\t\t\t\xB2      2.search for a book\n\n\t\t\t\t\xB2 --->3.your status\n\n\t\t\t\t\xB2     4.return book\n\n\t\t\t\t\xB2     5.go back");
    wh=3;
        }
        else if(ch==80 && wh==3)
        {
            system("cls");
    system("color 20");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t\t\twelcome %s",username);
    printf("\n\n\t\t\t\t\xB2     1.view all books\n\n\t\t\t\t\xB2     2.search for a book\n\n\t\t\t\t\xB2     3.your status\n\n\t\t\t\t\xB2 --->4.return book\n\n\t\t\t\t\xB2     5.go back");
    wh=4;
        }
        else if(ch==80 && wh==4)
        {
            system("cls");
    system("color 20");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t\t\twelcome %s",username);
    printf("\n\n\t\t\t\t\xB2     1.view all books\n\n\t\t\t\t\xB2     2.search for a book\n\n\t\t\t\t\xB2     3.your status\n\n\t\t\t\t\xB2     4.return book\n\n\t\t\t\t\xB2 --->5.go back");
    wh=5;
        }
    }
    int f=0;
    FILE *fp,*fp1;
    fp=fopen("books.txt","a+");
    fp1=fopen("rented.txt","a+");
    char search[100];
    ba b1;
    char  temp[300][300];
    if(wh==1)
    {
        system("cls");
        printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
        printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\n\n\n");
        while(fgets(b1.name,100,fp)!=NULL)
        {
            if(b1.name[strlen(b1.name) - 1] == '\n')
                b1.name[strlen(b1.name) - 1] = '\0';
            char stock[100],cost[100];
            fgets(stock,100,fp);
            if(stock[strlen(stock) - 1] == '\n')
                stock[strlen(stock) - 1] = '\0';
            fgets(cost,100,fp);
            if(cost[strlen(cost) - 1] == '\n')
                cost[strlen(cost) - 1] = '\0';
            printf("\t\t\t-->name:%s\n\t\t\t   stock available:%s\n\t\t\t   rent for a month:%s\n\n",b1.name,stock,cost);
            f=1;
        }
        printf("\n\n\t\t\t\t");
        system("pause");
        if(f==1)
        {
                char ch;
    int wh;
    system("cls");
     printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
        printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\n\n\n");
            printf("\n\t\t\tDo you wanna rent a book");
            printf("\n\ne\t\t\t\xB2 --->1.Yes\n\n\t\t\t\xB2     2.No");
            wh=1;
            while(ch=getch())
            {
                if(ch==13) break;
                if(ch==72 && wh==2)
                {
                    system("cls");
                     printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
        printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\n\n\n");
                    printf("\n\t\t\tDo you wanna rent a book");
            printf("\n\ne\t\t\t\xB2 --->1.Yes\n\n\t\t\t\xB2     2.No");
            wh=1;
                }
                else if(ch==80 && wh==1)
                {
                    system("cls");
                     printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
        printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\n\n\n");
                    printf("\n\t\t\tDo you wanna rent a book");
            printf("\n\ne\t\t\t\xB2     1.Yes\n\n\t\t\t\xB2 --->2.No");
            wh=2;
                }

            }
            if(wh==1)
                issuebooks(username);
            else if(wh==2)
                choice(username);
        }
        else if(f==0)
        {
             printf("\n\n\t\t\tNo books available for rent");
            printf("\n\n\t\t\ttry after some time\n\n\t\t\t");
            system("pause");
            customer(username);
        }
    }
    else if(wh==2)
    {
        system("cls");
        printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
        printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\n\n\n");
        printf("\n\t\t\tEnter the book u wanna search ->  ");
        fflush(stdin);
        gets(search);
        rewind(fp);
        char book1[100],stock1[100],cost1[100];
        int flag=0;
        while(fgets(book1,100,fp)!=NULL)
        {
            if(book1[strlen(book1) - 1] == '\n')
                book1[strlen(book1) - 1] = '\0';
            fgets(stock1,100,fp);
            if(stock1[strlen(stock1) - 1] == '\n')
                stock1[strlen(stock1) - 1] = '\0';
            fgets(cost1,100,fp);
            if(cost1[strlen(cost1) - 1] == '\n')
                cost1[strlen(cost1) - 1] = '\0';
            if(strcmp(book1,search)==0)
            {
                printf("\n\n\t\t\t-->Name:%s\n\t\t\tStock available:%s\n\t\t\tRent for a month:%s\n\n",book1,stock1,cost1);
                printf("\n\t\t\t->Do u wanna rent this book\n\t\t\t\xB2 -->1.Rent\n\n\t\t\t\xB2    2.Reject");
                int r,k=0;
                r=1;
                while(ch=getch())
                {
                    if(ch==13) break;
                    if(ch==72&&r==2)
                    {
                        system("cls");
                        printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                        printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
                        printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                        printf("\n\n\n");
                        printf("\n\t\t\t-->Name:%s\n\t\t\tStock available:%s\n\t\t\tRent for a month:%s\n\n",book1,stock1,cost1);
                        printf("\n\t\t\t->Do u wanna rent this book\n\t\t\t\xB2 -->1.Rent\n\n\t\t\t\xB2    2.Reject");
                        r=1;
                    }
                    else if(ch==80&&r==1)
                    {
                        system("cls");
                        printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                        printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
                        printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                        printf("\n\n\n");
                        printf("\n\t\t\t-->Name:%s\n\t\t\tStock available:%s\n\t\t\tRent for a month:%s\n\n",book1,stock1,cost1);
                        printf("\n\t\t\t->Do u wanna rent this book\n\t\t\t\xB2    1.Rent\n\n\t\t\t\xB2 -->2.Reject");
                        r=2;
                    }
                }
                if(r==1)
                {
                    time_t t=time(NULL);
                    struct tm *tm=localtime(&t);
                    char s[64];
                    strftime(s,sizeof(s),"%c",tm);
                    fprintf(fp1,"%s\n%s\n%s\n",username,s,search);
                    fclose(fp1);
                    system("cls");
                    printf("%s",temp[k]);
                    if(strcmp(temp[k],"0")==0)
                    {
                        printf("\n\n\t\t\tSORRY! Stock Unavialable!!!\n\n\t\t\t");
                        system("pause");
                        system("cls");
                        printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                        printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
                        printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                        printf("\n\n\t\t\t\xB2 -->1.Rent other books.");
                        printf("\n\n\t\t\t\xB2    2.Back to Home.");
                        int chh=1;
                        while(ch=getch())
                        {
                            if(ch==13) break;
                            if(ch==72&&chh==2)
                            {
                                system("cls");
                        printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                        printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
                        printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                        printf("\n\n\t\t\t\xB2 -->1.Rent other books.");
                        printf("\n\n\t\t\t\xB2    2.Back to Home.");
                        chh=1;
                            }
                            else if(ch==80&&chh==1)
                            {
                                system("cls");
                        printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                        printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
                        printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                        printf("\n\n\t\t\t\xB2 -->1.Rent other books.");
                        printf("\n\n\t\t\t\xB2    2.Back to Home.");
                        chh=2;
                            }
                        }
                        if(chh==1)
                        {
                            customer(username);
                        }
                        else
                        {
                            customer(username);
                        }
                    }
                    else
                    {
                        decrementstring(temp[k]);
                        printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                        printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
                        printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                        printf("\n\n\n");
                        printf("\t\t\t-->Rented successfully\n\n\t\t\t");
                        system("pause");
                        flag=1;
                        break;
                    }
                    flag=0;
                    choice(username);
                }
                if(strcmp(temp[k],search)==0)
                {
                    flag=1;
                }
                fputs(temp[k],fp);
                fputs("\n",fp);
                fclose(fp);
            }
            else
            {
                customer(username);
            }
        }
        if(flag==0)
        {
            printf("\n\n\t\t\tNo books available for rent");
            printf("\n\n\t\t\ttry after some time\n\n\t\t\t");
            system("pause");
            customer(username);
        }
    }
    else if(wh==3)
    {
        status(username);
    }
    else if(wh==4)
    {
        returnbook(username);
    }
    else if(wh==5)
    {
        choice(username);
    }
}

void appinfo()
{
    system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\nThis is a simple book renting application.\n");
    printf("->There are 2 phases in the application.\n");
    printf("->1.client phase.\n->2.customer phase.\n->This application works as a mediator for client and customer.\n");
    printf("->Client can add his books for rent by giving a particular cost per month to his book\n");
    printf("->Customer can rent a book from the application.\n");
    printf("->when customer returns the book he had to pay the bill according to number of days he rents the book\n");
    printf("->Customer should remember that bill will be calculated according to the cost of book on the particular returning date\n");
    printf("->If a customer rented a book for 1 day in month , customer should have to pay the cost of whole month\n");
    printf("->customer rents a book for 1 month and 1 day , he should pay the cost of two months\n\n\n\t\t\t\t\t");
    system("pause");
    main();
}

void reg()
{
    system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\n\n");
    FILE *fp;
    char c,name[30],uname[30],upass[30];
    u u1;
    int j=0;
    fp=fopen("user.txt","a+");
    while(fp==NULL)
    {
        printf("\nerror opening file");
        system("pause");
        fclose(fp);
        main();
    }
    printf("\n\t\t\t\t\t----------------");
    printf("\n\t\t\t\t\t| REGISTRATION |");
    printf("\n\t\t\t\t\t----------------");
    printf("\n\n\n\t\t\t\t\tEnter Username ->  ");
    scanf("%s",name);
    while(!feof(fp))
    {
        fscanf(fp,"%s",uname);
        if(strcmp(name,uname)==0)
        {
            printf("\nUsername already exists Try sing up with different name ->\t");
            fclose(fp);
            system("pause");
            reg();
        }
    }
    strcpy(u1.name,name);
    u1.booksrented=0;
    u1.booksowned=0;
    fclose(fp);
    printf("\n\t\t\t\t\tEnter Password ->  ");
    while((c=getch())!=13)
    {
        if(c==8)
        {
            u1.pass[j--]='\0';
            printf("\b \b");
        }
        else
        {
            u1.pass[j++]=c;
            printf("%c",'*');
        }
    }
    u1.pass[j]='\0';
    fp=fopen("user.txt","a+");
    fprintf(fp,"%s\n%s\n",u1.name,u1.pass);
    fclose(fp);
    printf("\n\n\n");
    int k=0;
    char *t="%";
    for(k=1;k<=100;k++)
    {
        printf("\r\t\t\t\t\tSigning up...%d%s",k,t);
        fflush(stdout);
        usleep(40000);
    }
    printf("\n\n\n\t\t\t\t-->You registered successfully!!!\n\n\t\t\t\t");
    system("pause");
    main();
}

void login()
{
    system("cls");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2  BOOKSBAY  \xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    FILE *fp;
    char c,name[30],pass[30],uname[30],upass[30];
    int j=0,ui,p;
    fp=fopen("user.txt","a+");
    if(fp==NULL)
    {
        printf("\nError opening file\n");
        system("pause");
        fclose(fp);
        main();
    }
    printf("\n\n\n\n\n\t\t\t\t\t-----------");
    printf("\n\t\t\t\t\t|  LOGIN  |");
    printf("\n\t\t\t\t\t-----------");
    printf("\n\n\t\t\t\t\tEnter Username ->  ");
    scanf("%s",name);
    printf("\n\n\t\t\t\t\tEnter Password ->  ");
    while((c=getch())!=13)
    {
        if(c==8)
        {
            pass[j--]='\0';
            printf("\b \b");
        }
        else
        {
            pass[j++]=c;
            printf("%c",'*');
        }
    }
    pass[j]='\0';
    u u1;
    char tempuser[30],temppass[30];
    char *t="%";
    int flag=0,k=0;
    while(!feof(fp))
    {
        fgets(tempuser,30,fp);
        if(tempuser[strlen(tempuser) - 1] == '\n')
            tempuser[strlen(tempuser) - 1] = '\0';
        fgets(temppass,30,fp);
        if(temppass[strlen(temppass) - 1] == '\n')
            temppass[strlen(temppass) - 1] = '\0';
        ui=strcmp(name,tempuser);
        p=strcmp(pass,temppass);
        printf("\n\n\n");

        if(ui==0 && p==0)
        {
            flag=1;
             for(k=1;k<=100;k++)
            {
            printf("\r\t\t\t\t\tLogging in...%d%s",k,t);
            fflush(stdout);
            usleep(40000);
            }
            printf("\n\n\t\t\t\t-->you have logged in successfully!!\n\n\t\t\t\t");
            system("pause");
            break;
        }
        else if(ui==0 && p!=0)
        {
            flag=1;
            printf("\n\n\t\t\t\twrong password");
            printf("\n\t\t\t\t\t-->press y to login again!");
            fclose(fp);
            if(getch()=='y' || getch()=='Y')
            {
                login();
            }
        }
    }
    if(flag==0)
    {
        printf("you are not registered");
        system("pause");
        main();
    }

    choice(name);
}
