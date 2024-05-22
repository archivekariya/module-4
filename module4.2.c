#include<stdio.h>
#include<string.h>
int main()
{
 
    FILE*ptr;  
    char fName[20];
 
    printf("\nEnter file name to create :");
    scanf("%s",fName);
 
    ptr=fopen(fName,"w");
    
    if(ptr==NULL)
    {
        printf("File does not created");
        exit(0); 
    }
    printf("\nfile created.");
    fclose(ptr);

    
    ptr=fopen(fName,"r");
    if(ptr==NULL)
    {
        printf("\nCan't open file");
        exit(0);
    }
 
    fclose(ptr);
    return 0;
}