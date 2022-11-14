#include <stdio.h>
#include <stdlib.h>

void swap(int arr[], int i, int j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
}

void heapify(int tree[], int n, int i){
        int c1 = 2 * i + 1;
        int c2 = 2 * i + 2;
        int max = i;
        if(c1 < n && tree[c1] > tree[max]){
                max = c1;
        }
        if(c2 < n && tree[c2] > tree[max]){
                max = c2;
        }
        if( i != max){
                swap(tree, i, max);
                heapify(tree, n, max);
        }
}

void build_heap(int tree[], int n){
        int last = n - 1;
        int parent = (last - 1) / 2;
        for(int i = parent; i >= 0; i--){
                heapify(tree, n, i);
        }
        
}

void heapsort(int tree[], int n){
        build_heap(tree, n);
        for(int i = n - 1; i >= 0; i--){
                swap(tree, i, 0);
                heapify(tree, i, 0);
        }
}

/*int main(){
        int tree[] = {1, 61, 8 ,3, 35, 40, 41, 49, -7, 60};
        int n = 10;
        heapsort(tree, n);

        for(int i = 0; i < n; i++){
                printf(" %d", tree[i]);
        }
}*/

