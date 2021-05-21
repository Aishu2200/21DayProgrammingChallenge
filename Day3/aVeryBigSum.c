#include<stdio.h>

long aVeryBigSum(int t, long* arr) {

    long int s = 0;
    int i;
    for(i = 0;i < t;i++) {
    
        s = s+arr[i];
    }

//    printf("%ld",s);

    return s;
}
int main() {
    int t,i;
    scanf("%d",&t);
    long int arr[1000];


    for(i = 0;i < t;i++) {
    
        scanf("%ld",&arr[i]);
    }

    printf("%ld",aVeryBigSum(t,arr));

}
