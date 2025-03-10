#include <stdio.h>

int main() {
    int i,j,n,value;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&value);
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==value){
                printf("%d %d",i,j);
                return 0;    
            }
        }
    }
    
}
