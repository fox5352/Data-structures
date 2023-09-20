#include <stdio.h>
#include <malloc.h>

struct node {
   char *data;
   struct node *next;
};

struct node *head = NULL;

void print_list(){
    struct node *temp = head;
    while(temp!= NULL){
        printf("%s\n", temp->data);
        temp = temp->next;
    }
}

void append(char data[]){
    //create a link
    struct node *newData = NULL;
    newData = (struct node *)malloc(sizeof(struct node));
    if (newData == NULL) return;
    newData->data = data;

    struct node *current = head;

    if (current == NULL)
    {
        head = newData;
        return;
    }
    // point it to old first node
    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = newData;
}

int main(){
    char list[][12] = {"test_data_0", "test_data_1", "test_data_2", "test_data_3"};
    size_t list_len = sizeof(list) / (sizeof(char)*12);
    
    for (size_t i = 0; i < list_len; i++)
    {
        append(list[i]);
    }  

    print_list();
        
    return 0;
}