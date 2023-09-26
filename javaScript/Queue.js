

class Node{
	constructor(data){
        this.data = data;
        this.next = null;
    }
}

class Queue{
	constructor(){
        this.head = null;
		this.size = 0;
        this.tail = null;
    }
	push(data){
		let newNode = new Node(data);
		this.size++;
		if(this.head == null){
			this.head = newNode;
            this.tail = newNode;
		}else{
			this.tail.next = newNode;
			this.tail = newNode;
		}
	}
	pop(){
		if (this.head == null){
			return null;
		}
		this.size--;
		let temp = this.head;
		this.head = this.head.next;
		
		return temp.data;
	}
}

module.exports = Queue;