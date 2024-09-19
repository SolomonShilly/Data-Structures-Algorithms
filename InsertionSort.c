#include <stdio.h>

// Defining the insertion sort function with array and array size as parameters
// The for loop will iterate through every index after 0
// The value at the original index will be stored in the variable value
// The variable index will start off as 0, which is our current index subtracted by 1
// The while loop will move any indxes with numbers greater than the variable, value, to the right until index - 1 is not greater than the original value
// The value will than be inserted into the correct position in the array
void insertion_sort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int index = i - 1;
        int value = arr[i];
        while(index >= 0 && arr[index] > value){
            arr[index + 1] = arr[index];
            index = index - 1;
        }
        arr[index+1] = value;
    }
}

// Function to print array using a for loop to iterate through each element
void print_array(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

// Main function used to create inputs for and call the insertion_sort function
int main(){
    int arr[] = {12, 11, 3, 5, 6};
    int n = sizeof(arr)/ sizeof(arr[0]);
    printf("Original Array: ");
    print_array(arr, n);
    
    insertion_sort(arr, n);
    
    printf("Sorted Array: ");
    print_array(arr, n);
    
}