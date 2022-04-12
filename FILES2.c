#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    fp=fopen("ABC.txt","w");
    fprintf(fp,"%s %d","RAM",120);
    fprintf("%s %d","RAM",120);
    fclose(fp);
}
