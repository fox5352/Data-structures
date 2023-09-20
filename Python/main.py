from Linked_list import LinkedList


def main():
    data = ['test_data_0', 'test_data_1', 'test_data_2', 'test_data_3']

    linked_list = LinkedList()

    for item in data:
        linked_list.append(item)

    print(linked_list.pop())

    linked_list.print_list()


    print("end")

if __name__ == "__main__":
    main()