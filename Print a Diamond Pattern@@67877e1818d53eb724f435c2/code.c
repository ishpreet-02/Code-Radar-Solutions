
#include <stdio.h>

// int main() {
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int k=0;k<n-i;k++){
//             printf(" ");}
//         for(int j=1;j<=2*i-1;j++){
//             printf("*");
//         }
//         printf("\n");}
//     for(int i=n-1;i>=1;i--){
//         for(int k=1;k<=n-i;k++){
//             printf(" ");
//         }
//         for(int j=2*i-1;j>=1;j--){
//             printf("*");
//         }
//         printf("\n");


//     }
    

//     return 0;
// }
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k=0;k<=(2*i);k++){
            printf("*");
        }
        printf("\n");
    }
}
    
