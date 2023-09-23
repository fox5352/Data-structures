from Linked_list import LinkedList


def main():
    data = ['test_data_0', 'test_data_1', 'test_data_2', 'test_data_3']

    linked_list = LinkedList()

    for item in data:
        linked_list.append(item)

    print('print hole list')

    linked_list.print_list()

    print('remove last from list')

    last_item = linked_list.pop()

    print('print hole list')

    linked_list.print_list()

    print("add more to list")
    for i in range(4, 8):
        linked_list.append(f'test_data_{i}')

    print('print hole list')

    linked_list.print_list()

    print('insert from beginning')

    linked_list.prepend(last_item)

    print('print hole list')

    linked_list.print_list()

    print("remove first from list")

    first_value = linked_list.prepop()

    linked_list.print_list()

    print("end")


if __name__ == "__main__":
    main()
