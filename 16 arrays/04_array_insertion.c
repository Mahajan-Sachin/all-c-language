
#include <stdio.h>

void addElementAtIndex(int array[], int size, int index, int element) {
  
    
    if (index < 0 || index > size) {
        printf("Invalid index.\n");
        return;
    }
    
    // Shift elements to the right starting from the end
    for (int i = size; i > index; i--) {
        array[i] = array[i - 1];
    }
    
    // Insert the new element at the specified index
    array[index] = element;
    size++;
    
    // Print the updated array
    printf("Array after adding element:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int size; // Current size of the array
    printf("enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("enter your array inputs: arr[%d] ",i);
        scanf("%d",&arr[i]);
    }
    int index; // Index where you want to add the element
    printf("enter the index: ");
    scanf("%d",&index);
    
    int element; // Element you want to add
    printf("enter element which you want to add:");
    scanf("%d",&element);
    addElementAtIndex(arr, size, index, element);
    
    return 0;
}
