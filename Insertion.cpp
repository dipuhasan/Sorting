#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1010], i, j, temp, n;
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i = 1; i<n; i++){
        temp = a[i];
        j = i-1;
        while((j>=0) && (temp < a[j]) ){
            a[j+1] = a[j];
            j--;
        }
     a[j+1] = temp;
    }
    for(i = 0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");


    return 0;
}
