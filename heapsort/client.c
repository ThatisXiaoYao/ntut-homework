
#include "test.c" 

int main(){
        int tree[] = {1, 61, 8 ,3, 35, 40, 41, 49, -7, 60};
        int n = 10;
        heapsort(tree, 10);
        for(int i = 9; i >= 0; i--){
                printf(" %d", tree[i]);
        }
}
