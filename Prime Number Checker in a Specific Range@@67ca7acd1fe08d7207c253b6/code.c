// Your code here...
#include <stdio.h>

int printPrimesInRange(int a,int b) {
    int count = 0; 

    for(int i=a;i<=20;i++){
        for (int j = 1; j <= b; i++) {
            if (a % i == 0) {
                count++;
        }
        }
        if (count <2){
            printf("%d ",i);
        } 
    }

    }