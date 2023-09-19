
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
        new_node.index = self.length - 1

        if self.head is None:
            self.head = new_node
        else:
            current = self.head
            while current.next:
                current = current.next
            current.next = new_node

    def pop(self):
        # sets buffer
        current_node = self.head

        # while current_node.next != None
        while current_node.next:

            # if current_node.next --> Node.next == None
            if current_node.next.next is None:

                # gets last nodes value
                buffer = current_node.next.data

                # removes last node
                current_node.next = None

                self.length -= 1

                return buffer
            else:
                current_node = current_node.next

    def print_list(self):
        current = self.head

        while current:
            print(f'{current.index}:{current.data}', end=" --> ")
            current = current.next
