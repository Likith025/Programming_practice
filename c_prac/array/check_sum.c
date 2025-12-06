// You are given a block of memory (array of n bytes) which includes n-1 data bytes and the last byte as checksum.

// Your task is to verify whether the last byte equals the XOR of all previous bytes (excluding itself).

// Return:

// 1 if the checksum is valid
// 0 if the checksum is incorrect

#include <stdio.h>

int validate_checksum(int *mem, int n) {
    // Write your XOR scan logic here
    int checksum=0;
    for(int i=0;i<=n-2;i++){
        checksum=checksum^mem[i];
    }
    if(checksum==mem[n-1]){
        return 1;
    }
    return 0;
}

int main() {
    int n, arr[100];
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = validate_checksum(arr, n);
    printf("%d", result);

    return 0;
}