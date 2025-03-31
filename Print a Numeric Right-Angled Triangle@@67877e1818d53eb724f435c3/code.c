#include <stdio.h>

// int main() {
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d ",j);
            
//         }
//         printf("\n");
//     }
//     return 0;
// }
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x=1;
        for(int j=0;j<=i;j++){
            
            printf("%d ",x);
            x++;
        }
        printf("\n");
    }
}