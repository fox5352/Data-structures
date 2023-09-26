class Node{
	constructor(value){
        this.value = value;
        this.next = null;
    }
}

class Stack{
	constructor() {
		this.head = null;
		this.size = 0;
	}
	
	push(value){
		const newNode = new Node(value)
		this.size++;
		if (this.head === null){
			this.head = newNode;
			return;
		}
		
		newNode.next = this.head;
		this.head = newNode;
	}
	pop(){
		if (this.head === null){
			return null;
		}
		this.size--;
		const value = this.head.value;
		this.head = this.head.next;
		return value
	}
	peek(){
		return this.head?.value;
	}
}

module.exports = Stack;