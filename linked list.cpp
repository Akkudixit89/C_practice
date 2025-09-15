#include<stdio.h>
#include<stdlib.h>
struct node{
    int x;
    struct node *ptr;
}node1,node2,node3;
int main(){
    node1.x=10;
    node2.x=20;
    node3.x=30;
    node1.ptr=&node2;
    node2.ptr=&node3;
    node3.ptr='\0';
    printf("value of node1 =%d\n",node1.x);
    printf("value of node2 =%d\n",node2.x);
    printf("address of node1 =%d\n",node1.ptr);
    printf("address of node2 =%d\n",node2.ptr);
    printf("value of node3 = %d\n",node3.x);
    printf("address of node3 = %d\n",node3.ptr);
    

}
