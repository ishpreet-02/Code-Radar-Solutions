#include <stdio.h>

int main()
{
    int arr1[100], fr1[100];
    int n, i, j, ctr;
    scanf("%d", &n);
    printf("%d", n);
    for (i = 0; i < n; i++)
    {
        printf("%d", i);
        scanf("%d", &arr1[i]);
        fr1[i] = -1; 
    }

    for (i = 0; i < n; i++)
    {
        ctr = 1; 
        for (j = i + 1; j < n; j++)
        {
            if (arr1[i] == arr1[j])
            {
                ctr++;    
                fr1[j] = 0; 
            }
        }

        
        if (fr1[i] != 0)
        {
            fr1[i] = ctr;
        }
    }

    for (i = 0; i < n; i++)
    {
        if (fr1[i] != 0)
        {
            printf("%d %d\n", arr1[i], fr1[i]);
        }
	}
	return 0;
}
