// Your code here...
#include <stdio.h>

void printPrimesInRange(int a,int b) {
    int count = 0; 

    for(int i=a;i<=20;i++){
        for (int j = 1; j <= b; i++) {
            if (i % j == 0) {
                count++;
        }
        }
        if (count <2){
            printf("%d ",i);
        } 
    }

    }