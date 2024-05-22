#include<stdio.h>
#include<string.h>
 
int main()
{
    FILE*ptr;
    char ch;
 
    ptr=fopen("test.txt","r");

    if(ptr==NULL){
    printf("file is not open.");
   
}
 
fclose(ptr);
}
