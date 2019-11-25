#include <stdio.h>
#include <stdlib.h>



void heapify(int arr[], int n, int i) 
{ 
    int largest = i; // 将最大元素设置为堆顶元素
    int l = 2*i + 1; // left = 2*i + 1 
    int r = 2*i + 2; // right = 2*i + 2 
  
    // 如果 left 比 root 大的话
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 
  
    // I如果 right 比 root 大的话
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
  
    if (largest != i) 
    { 
        int s = arr[i] + arr[largest];
        //swap(arr[i], arr[largest]); 
        arr[i] = arr[largest];  
        arr[largest] = s - arr[largest];

        // 递归地定义子堆
        heapify(arr, n, largest); 
    } 
} 


void heapSort(int arr[], int n) 
{ 
    // 建立堆
    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i); 
  
    // 一个个从堆顶取出元素
    for (int i=n-1; i>=0; i--) 
    { 
        //swap(arr[0], arr[i]);  
        int s = arr[0] + arr[i];
        arr[0] = arr[i];
        arr[i] = s - arr[i];

        heapify(arr, i, 0); 
    } 
} 



int main(){
	int arr[10] = {3,1,6,7,9,5,4,2,8,0};

	heapSort(arr, 10);
	for(int i=0; i<10; i++)
		printf("%d ", arr[i]);
	printf("\n");

return 0;
}
