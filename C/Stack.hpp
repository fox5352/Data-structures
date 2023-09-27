//
// Created by fox5352 on 2023/09/26.
//

#ifndef LINKED_LISTS_STACK_HPP
#define LINKED_LISTS_STACK_HPP

#include <string>
#include <optional>

struct SNode {
    int data;
    struct SNode *next = nullptr;
};

class Stack{
public:
    int get_size(){
        return this->size;
    }
    int peak(){
        if(this->size == 0){
            return -1;
        }
        return this->head->data;
    }
    void push(int data){
        struct SNode *new_Snode = NULL;
        new_Snode = (struct SNode *) malloc(sizeof(struct SNode));
        if(new_Snode == NULL)return;
        new_Snode->data = data;

        if (this->head == nullptr){
            this->head = new_Snode;
            this->size++;
            return;
        }
        this->size++;
        new_Snode->next = this->head;
        this->head = new_Snode;
    }
    std::optional<int> pop(){
        if (this->head == nullptr){
            return std::nullopt;
        }

        struct SNode *temp = this->head;
        this->head = this->head->next;
        int data = temp->data;
        free(temp);
        this->size--;
        return data;
    }

private:
    struct SNode *head = nullptr;
    int size = 0;
};

#endif //LINKED_LISTS_STACK_HPP
