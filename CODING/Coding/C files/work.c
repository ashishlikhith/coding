#include<stdio.h>
int main(){
    int n = 4;
    int nums[n];
    int target;

    for(int i = 0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    scanf("%d",&target);

    int sum,k,j;
    for(k = 0;k<n;k++){
        for(j = 0;j<=k;j++){
            sum = nums[k] + nums[j];
            if(sum == target){
                break;
            }
        }
    }
    printf("[%d,%d]",k,j);
}