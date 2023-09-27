//
// Created by fox5352 on 2023/09/27.
//

#ifndef LINKED_LISTS_QUEUE_HPP
#define LINKED_LISTS_QUEUE_HPP

#include <optional>

typedef struct QNode{
    int data;
    struct QNode *next = nullptr;
} QNode;

class Queue{
public:
    void enqueue(int data){
        QNode *new_node = new QNode();
        new_node->data = data;

        if(this->tail == NULL){
            this->head = new_node;
            this->tail = new_node;
            this->size++;
            return;
        }

        this->size++;
        this->tail->next = new_node;
        this->tail = new_node;
    }

    std::optional<int> dequeue(){
        if (this->size == 0){
            return std::nullopt;
        }
        QNode *temp = this->head;
        this->head = this->head->next;
        this->size--;

        int value = temp->data;
        delete temp;
        return value;
    }

    std::optional<int> peak(){
        if (this->head == NULL){
            return NULL;
        }
        return this->head->data;
    }

    int get_size(){
        return this->size;
    }

private:
    QNode *head = NULL;
    QNode *tail = NULL;
    int size = 0;
};

#endif //LINKED_LISTS_QUEUE_HPP
