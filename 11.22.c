// typedef struct _node
// {
//     int value;
//     struct _node *next;
// }NODE;
#include<stdio.h>
#include"1.22.h"
#include<stdlib.h>
void add(NODE*head,int number);
int main()
{
    NODE*head=NULL;
    printf("%p\n",&head);
    int number;
    do
    {
        scanf("%d",&number);
        if(number=-1)
        {
           add(head,number);
        }
    }while(number!=-1);
    return 0;
}

 //add to linhed-list
                    void add(NODE*head,int number)
                    {
                        NODE*p=(NODE*)malloc(sizeof (NODE));
                        printf("%p",&head);
                        p->value=number;
                        p->next=NULL;
                        //找到当前链表最后一个，以便于将新的结构体接上去
                        NODE*last=head;
                        if (last)
                        {
                            while(last->next)
                            {
                                last=last->next;
                            }last->next=p;
                        }else
                        {
                            head=p;
                        }}
