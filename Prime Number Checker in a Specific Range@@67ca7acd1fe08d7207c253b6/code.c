// Your code here...
#include <stdio.h>

void printPrimesInRange(int a,int b) {
    int count = 0; 

    for(int i=a;i<=b;i++){
        for (int j = a+1; j <= b; j++) {
            if (i % j == 0) {
                count++;
        }
        }
        if (count <2){
            printf("%d ",i);
        } 
    }

    }