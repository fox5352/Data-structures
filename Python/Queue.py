
class Node:
    def __init__(self, value):
        self.value = value
        self.next = None

class Queue:
    def __init__(self):
        self.head = None
        self.tail = None
        self.size = 0

    def enqueue(self, data) -> None:
        new_node = Node(data)

        if self.tail is None:
            self.head = new_node
            self.tail = new_node
            self.size += 1
            return

        self.size += 1
        self.tail.next = new_node
        self.tail = new_node

    def dequeue(self) -> any:
        if self.size == 0:
            return None

        if self.size == 1:
            data = self.head.value
            self.head = None
            self.tail = None
            self.size = 0
            return data

        data = self.head.value
        self.head = self.head.next
        self.size -= 1
        return data
