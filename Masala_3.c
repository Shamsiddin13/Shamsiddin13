#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>




int main (){

    int n,*ptr;
    printf("Enter end number:");
    scanf("%d",&n);

    ptr = calloc(n,sizeof(int));
    
    for(int i = 0; i < n; i++){
        scanf("%d",&ptr[i]);
    }

    for(int i = 0; i < n; i++){
        for(int j = 1; j < n/2; j++){
            if(ptr[j-1] < ptr[j]){
                int son = ptr[j-1];
                ptr[j-1] = ptr[j];
                ptr[j] = son;
            }
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d ",ptr[i]);
    }
    

}


