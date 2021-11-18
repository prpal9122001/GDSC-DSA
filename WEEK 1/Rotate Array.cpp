#include <stdio.h>
 
void reverse(int arr[], int low, int high)
{
    for (int i = low, j = high; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
 
void leftRotate(int arr[], int r, int n)
{
    if (r < 0 || r >= n) {
        return;
    }
 
    reverse(arr, 0, r - 1);
 
    reverse(arr, r, n - 1);
 
    reverse(arr, 0, n - 1);
}
 
int main(void)
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int r = 2;
 
    int n = sizeof(arr)/sizeof(arr[0]);
 
    leftRotate(arr, r, n);
 
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
 
    return 0;
}
