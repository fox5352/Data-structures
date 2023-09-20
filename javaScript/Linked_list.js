/** @format */

class Node {
  constructor(value = null) {
    this.value = value;
    this.index = 0;
    this.next = null;
  }
}

class LinkedList {
  constructor() {
    this.head = null;
    this.length = 0;
  }

  append(data) {
    let newData = new Node(data);
    let current = this.head;

    if (this.head == null) {
      this.head = newData;
      return;
    }

    while (current.next != null) {
      current = current.next;
    }
    this.length++;
    current.next = newData;
    current.index = this.length;
  }

  pop() {
    if (this.head == null) {
      return null;
    }

    let current = this.head;
    let previous = this.head;

    while (current.next != null) {
      previous = current; // buffer previous value
      current = current.next; // next value
    }

    this.length--;
    previous.next = null;
    return current.value;
  }

  log_list() {
    let current = this.head;

    while (current.next != null) {
      console.log(`${current.index}:${current.value}`);
      current = current.next;
    }
  }
}

module.exports = LinkedList;
