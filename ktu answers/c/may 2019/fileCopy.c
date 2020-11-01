#include<stdio.h>

int main(int argc,char *argv[]) 
{ 
    
    char filename[100], c; 
    if(argc!=3)
    {
        printf("Invalide numbers of arguments.");
        return 1;
    }
    
    FILE *fptr1 = fopen(argv[1], "r"); 
    FILE *fptr2 = fopen(argv[2], "w"); 
    if (fptr1 == NULL||fptr2 == NULL) 
    { 
        printf("Cannot open file %s \n", filename); 
        exit(0); 
    } 
  
   

  
    // Read contents from file 
    c = fgetc(fptr1); 
    while (c != EOF) 
    { 
        fputc(c, fptr2); 
        c = fgetc(fptr1); 
    } 
  
    printf("\nContents copied to %s", filename); 
  
    fclose(fptr1); 
    fclose(fptr2); 
   
}
