int printPrimesInRange(int a,int b) {
    int count = 0; 

    for(int i=a;i<=b;i++){
        for (int j=2; j<= i; j++) {
            if (i % j == 0) {
                count++;
        }
        }
        if (count ==1){
            printf("%d ",i);
            count=0;
        } 
    }

    }