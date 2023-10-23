// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n[5]={1,2,3,4,5};



    int pos=0;
    for(int i=pos; i<5-1; i++)
    {
    n[i]=n[i+1];
    }
    
    for(int i=0; i<5-1; i++)
    {
        printf("%d ", n[i]);
    }
    
    
    
    return 0;
}
