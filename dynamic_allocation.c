#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h> // For malloc and free

int main(){
    int n,*p;
    scanf("%d", &n);
    p = (int*)malloc(sizeof(int)*n);
    
    printf("%d\n",sizeof(*p)/sizeof(int));
}