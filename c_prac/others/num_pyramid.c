/*if input is 5
1
2   1
3   2   1
4   3   2   1
5   4   3   2   1
*/

#include<stdio.h>
#include<stdint.h>
int main(){
    uint16_t num;
    printf("enter the number of row\n");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        for(int j=i;j>=1;j--){
            printf("%d\t",j);
        }
        printf("\n");
    }
}