#include<stdio.h>
int main(){
    int n,a,b;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int key;
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(ar[i]==key){
            a=1;
            b=i;
            break;
        }
    }
    if(a==1){
        printf("element found at %d index",b);
    }
    else{
        printf("element not found");
    }
}
