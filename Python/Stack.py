
class Node:
    def __init__(self, value):
        self.value = value
        self.next = None

class Stack:
    def __init__(self):
        self.head = None
        self.size = 0

    def push(self, data: any) -> None:
        new_node = Node(data)

        if (self.head == None):
            self.head = new_node
            self.size += 1
            return

        self.size += 1;
        new_node.next = self.head
        self.head = new_node

    def pop(self) -> any:
        if self.head is None:
            return None

        self.size -= 1
        value = self.head.value
        self.head = self.head.next
        return value

    def peek(self):
        if self.head is None:
            return None

        return self.head.data
