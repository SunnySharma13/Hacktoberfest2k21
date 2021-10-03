#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, a[100];
        int i;
        scanf("%d", &n);
        for(i=0; i<n; i++){
            scanf("%d", &a[i]);
        }
        int temp;
        
        for(i=0; i<n; i++){
            if(a[0]!=a[i]){
                temp=i+1;
                break;
            }
        }
        if((a[0]!=a[1])&&(a[0]!=a[2])){
                temp=1;
        }
        else if((a[0]!=a[1])&&(a[0]==a[2])){
                temp=2;
        }
        printf("%d\n", temp);
    }
    return;
}
