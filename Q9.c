#include <stdio.h>
void mergeLogs(int log1[], int n, int log2[], int m, int merged[]) 
{
int i=0,j=0,k=0;
while (i<n &&j<m) 
{
        if(log1[i]<=log2[j]) 
        {
            merged[k]=log1[i];
            k++;
            i++;
        }
        else 
        {
            merged[k]=log2[j];
            k++;
            j++;
        }
    }
    while (i<n) 
    {
        merged[k]=log1[i];
        k++;
        i++;
    }
    while (j<m) 
    {
        merged[k]=log2[j];
        k++;
        j++;
    }
}

int main() {
    int n, m;
    printf("Enter number of entries in log1: ");
    scanf("%d", &n);
    int log1[n];
    printf("Enter %d sorted timestamps for log1:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &log1[i]);
    }
    printf("Enter number of entries in log2: ");
    scanf("%d", &m);
    int log2[m];

    printf("Enter %d sorted timestamps for log2:\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &log2[i]);
    }
    int merged[n + m];

    mergeLogs(log1, n, log2, m, merged);
    
    printf("\nMerged chronological log:\n");
    for (int i = 0; i < n + m; i++) {
        printf("%d ", merged[i]);
    }
   return 0;
}