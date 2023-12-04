#include<stdio.h>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             ;;
int main(){
    int n;
    printf("Enter the size of the aaray:");
    scanf("%d",&n);
    int arr1[n],arr2[n],i;
    printf("enter the element of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    int j;
    for(j=0;j<n;j++){
        arr2[j]=arr1[j];

    }
    for(i=0;i<n;i++){
        printf("Element%d in second array: %d\n",i,arr2[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("Reverse of the first array:%d\n",arr1[i]);
    }
    


}
   


