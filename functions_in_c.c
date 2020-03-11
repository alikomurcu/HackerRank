#include <stdio.h>

int max_of_four(int a, int b, int c, int d){ /* Puts the greatest one to last index.*/
    int i, tmp;
    int arr[4];
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;
    for(i = 0; i<3; i++){ /* Just the first step of bubble sort algorithm is implemented in order to find the greatest value.*/
        if(arr[i] > arr[i+1]){
            tmp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = tmp;
            }
    }
    return arr[3];
}
int main() {
    int a, b, c, d;
    int ans ;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
