// Ayush Tiwari

//generate random nos.
#include<stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {
    
    FILE *file;
    file = fopen("./input.txt","w");
    srand(time(0));
    int n=1;
    int arr[n+1];
    fprintf(file, "%d\n", n);
    for (int i=n; i>=1; i--) 
        fprintf(file, "%d ", rand()%(1000)+1);
    
    return 0;
}