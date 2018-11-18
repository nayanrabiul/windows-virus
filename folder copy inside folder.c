#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int take_c(char g[]);
int take_d(char g[]);
int take_e(char g[]);
int main()
{
    int i,j,k;
    char g[34]={'A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A'};
    mkdir("C://v");
    //mkdir("D://v");
    //mkdir("E://v");
    for(k=0;k<34;k++)
    {
        for(i=0;i<52;i++){
            j=take_c(g);
            if(j==1){
                break;
            }
        }
    }
    for(k=0;k<34;k++)
    {
        for(i=0;i<52;i++){
            j=take_d(g);
            if(j==1){
                break;
            }
        }
    }
    for(k=0;k<34;k++)
    {
        for(i=0;i<52;i++){
            j=take_e(g);
            if(j==1){
            break;
            }
            g[k]++;
        }
        k++;
    }
    return 0;
}

int take_c(char g[])
{
    FILE *input,*output[100];
    int i;
    input=fopen("ARTCELL - Oniket Prantor cover by Tahsin,Tamim,Shamim,Wali,Shohan.mp3","rb");
    char c,count='0',count1[2]={'0','0'};
    int s=8;
    for(i=0;i<100;i++)
    {
        char str[]={'C',':','/','v','/','/',g[0],g[1],g[2],g[3],g[4],g[5],g[6],g[7],g[8],g[9],g[10],g[11],g[12],g[13],g[14],g[15],g[16],
        g[17],g[18],g[19],g[20],g[21],g[22],g[23],g[24],g[25],g[26],g[27],g[28],g[29],g[30],g[31],g[32],g[33],count1[1],count1[0],count,'\0'};
        //char str1[]={'o',count};
        output[i]=fopen(str,"wb");
        if(output[i]==NULL){
            return 1;
        }
        if(count=='9'){
            count='0';
            count--;
            if(count1[0]=='9'){
                count1[0]='0';
                count1[1]++;
            }
            count1[0]++;
        }
        count++;
        while(s>0 && !feof(input))
        {
            s=fscanf(input,"%c",&c);
            if(s>0)
            {
                fprintf(output[i],"%c",c);
            }
        }
        fclose(output[i]);
        s=8;
        rewind(input);
    }
    return 0;
}

int take_d(char g[])
{
    FILE *input,*output[1000];
    int i;
    input=fopen("ARTCELL - Oniket Prantor cover by Tahsin,Tamim,Shamim,Wali,Shohan.mp3","rb");
    char c,count='0',count1[2]={'0','0'};
    int s=8;
    for(i=0;i<100;i++)
    {
        char str[]={'D',':','/','/',g[0],g[1],g[2],g[3],g[4],g[5],g[6],g[7],g[8],g[9],g[10],g[11],g[12],g[13],g[14],g[15],g[16],
        g[17],g[18],g[19],g[20],g[21],g[22],g[23],g[24],g[25],g[26],g[27],g[28],g[29],g[30],g[31],g[32],g[33],count1[1],count1[0],count,'\0'};
        //char str1[]={'o',count};
        output[i]=fopen(str,"wb");
        if(output[i]==NULL){
            return 1;
        }
        if(count=='9'){
            count='0';
            count--;
            if(count1[0]=='9'){
                count1[0]='0';
                count1[1]++;
            }
            count1[0]++;
        }
        count++;
        while(s>0 && !feof(input))
        {
            s=fscanf(input,"%c",&c);
            if(s>0)
            {
                fprintf(output[i],"%c",c);
            }
        }
        fclose(output[i]);
        s=8;
        rewind(input);
    }
    return 0;
}

int take_e(char g[])
{
    FILE *input,*output[1000];
    int i;
    input=fopen("ARTCELL - Oniket Prantor cover by Tahsin,Tamim,Shamim,Wali,Shohan.mp3","rb");
    char c,count='0',count1[2]={'0','0'};
    int s=8;
    for(i=0;i<100;i++)
    {
        char str[]={'E',':','/','/',g[0],g[1],g[2],g[3],g[4],g[5],g[6],g[7],g[8],g[9],g[10],g[11],g[12],g[13],g[14],g[15],g[16],
        g[17],g[18],g[19],g[20],g[21],g[22],g[23],g[24],g[25],g[26],g[27],g[28],g[29],g[30],g[31],g[32],g[33],count1[1],count1[0],count,'\0'};
        //char str1[]={'o',count};
        output[i]=fopen(str,"wb");
        if(output[i]==NULL){
            return 1;
        }
       if(count=='9'){
            count='0';
            count--;
            if(count1[0]=='9'){
                count1[0]='0';
                count1[1]++;
            }
            count1[0]++;
        }
        count++;
        while(s>0 && !feof(input))
        {
            s=fscanf(input,"%c",&c);
            if(s>0)
            {
                fprintf(output[i],"%c",c);
            }
        }
        fclose(output[i]);
        s=8;
        rewind(input);
    }
    return 0;
}

