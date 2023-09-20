#include <stdio.h>
#include <string.h>
#include <malloc.h>

struct node {
   char *data;
   long int index;
   struct node *next;
};

struct node *head = NULL;
long int linkList_len = 0;

void print_list(){
    struct node *current = head;
    while(current!= NULL){
        printf("%d : ", current->index);
        printf("%s\n", current->data);
        current = current->next;
    }
}

void prepend(char data[]){
    struct node *newData = NULL;
    newData = (struct node *)malloc(sizeof(struct node));

    if (newData == NULL)
    {
        return;
    }
    // newNode ->
    newData->data = data;
    newData->index = 0;

    // head -> node -> node ->
    // buffer ^
    struct node *buffer = head;

    // head -> newNode ->
    head = newData;
    
    //        buffer -> node ->
    //head -> newNode ^
    head->next = buffer;

    int counter = newData->index;

    // increment rest
    while (buffer->next != NULL)
    {
        counter++;
        buffer->index = counter;
        buffer = buffer->next;
    }

}

void append(char data[]){
    //create a link
    struct node *newData = NULL;
    newData = (struct node *)malloc(sizeof(struct node));
    if (newData == NULL) return;
    newData->data = data;
    newData->index = linkList_len;

    struct node *current = head;

    if (current == NULL)
    {
        head = newData;
        linkList_len ++;
        return;
    }
    // point it to old first node
    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = newData;
    linkList_len ++;
}

struct node* pop(){
    if (head == NULL) return NULL;
    struct node *current = head;
    struct node *previous;

    while (current->next != NULL) {
      previous = current; // buffer previous value
      current = current->next; // next value
    }
    
    previous->next = NULL;
    return current;
}

int main(){
    char list[][12] = {"test_data_0", "test_data_1", "test_data_2", "test_data_3"};
    size_t list_len = sizeof(list) / (sizeof(char)*12);
    
    for (size_t i = 0; i < list_len; i++)
    {
        append(list[i]);
    }  

    print_list();
    printf("remove last node\n");
    struct node *last_node = pop();
    print_list();

    printf("add more nodes to list\n");
    for (size_t i = 0; i < list_len; i++)
    {
        append(list[i]);
    } 
    

    printf("prepend last node\n");
    prepend(last_node->data);
    print_list();
        
    return 0;
}