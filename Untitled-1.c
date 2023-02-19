#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define SIZE 102
;
int bt[5];
void create(int i){
    int x, r;
    printf("Enter the element for root\n");
    scanf("%d",&x);
    bt[0] = x;
    for(r = 0; r<i; ++r){
        printf("Enter data for left child of %d\n",bt[r]);
        scanf("%d",&x);
        bt[2*r + 1] = x;
        printf("Enter data for right child of %d\n",bt[r]);
        scanf("%d",&x);
        bt[2*r + 2] = x;
    }
}
void print(int i)
{
    for (int r = 0; r < i; r++)
    {
        if (r == 0)
        {
            printf("the root element is %d\n", bt[r]);
        }
        printf("The left child of %d is -> %d \n",bt[r],bt[2 * r + 1]);
        printf("The right child of %d is -> %d \n",bt[r], bt[2 * r + 2]);
    }
}

int main(){ 
    int h, l, i;
    printf("Enter the height of the tree\n");
    scanf("%d",&h);
    l = pow(2,h);
    i = l - 1;
    printf("Number of Leaf Nodes -> %d\n",l);
    printf("Number of internal nodes -> %d\n",i);
    create(i);
    print(i);
    return 0; 
}   