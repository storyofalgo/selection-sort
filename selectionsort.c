#include<stdio.h>

// Selection Sort: repeatedly selects the smallest remaining element and places it in position.
// This example prints the array before and after sorting.
int main() {
    // Array to sort and its total number of elements.
    int Arr[] = {43,45,98,23,21,5,1,8,2,6,77,18,4};
    int n = sizeof(Arr)/sizeof(Arr[0]);
    int i,j,s;

    // Print the contents before sorting starts.
    printf("Before Sort:\n");
    for(i = 0;i < n;i++) {
        printf("%d ",Arr[i]);
    }
    printf("\n");

    // Find the minimum unsorted element and swap it into the current position.
    for(i = 0;i < n;i++) {
        s = i;
        for(j = i+1;j < n;j++) {
            if(Arr[s] > Arr[j]) {
                s = j;
            }
        }
        if(i != s) {
            j = Arr[i];
            Arr[i] = Arr[s];
            Arr[s] = j;
        }
    }

    // Print the sorted result.
    printf("After Sort:\n");
    for(i = 0;i < n;i++) {
        printf("%d ",Arr[i]);
    }
    printf("\n");

    return 0;
}