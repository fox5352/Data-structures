
class Node:
    def __init__(self, data=None, next=None) -> None:
        self.data = data
        self.next = next
        self.index = 0


class LinkedList:
    def __init__(self) -> None:
        self.head = None
        self.length = 0
    
    def append(self, data):
        self.length += 1

        new_node = Node(data)
        new_node.index = self.length -1

        if self.head is None:
            self.head = new_node
        else:
            current = self.head
            while current.next:
                current = current.next
            current.next = new_node

    def print_list(self):
        current = self.head

        while current:
            print(f'{current.index}:{current.data}', end=" --> ")
            current = current.next