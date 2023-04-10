#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++){ 
        for(int j=i+1;j<a;j++){ // Nested for loop is taken to compare the elements with other elements
            if(arr[i]>arr[j]){ // Ascending Order Format
                int a=arr[i]; // the value of a is changed and given forward
                arr[i]=arr[j];
                arr[j]=a;
            }
        }
    }
    for(int i=0;i<a;i++){
        printf("%d\n",arr[i]);
    }
}
