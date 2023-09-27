/** @format */

const LinkedList = require("./Linked_list");
const Queue = require("./Queue");
const Stack = require('./Stack')

function test_linked_list(){
  let testList = ["test_data_0", "test_data_1", "test_data_2", "test_data_3"];
  
  let list = new LinkedList();
  
  for (const item of testList) {
    list.append(item);
  }
  
  list.log_list();
  console.log("removed list item from list");
  let last_value = list.pop();
  list.log_list();
  
  console.log("add more to list");
  for (let index = 4; index < 8; index++) {
    list.append(`test_data_${index}`);
  }
  list.log_list();
  
  console.log("prepend old last value to start of list");
  list.prepend(last_value);
  list.log_list();
  
  console.log("remove first value of the list");
  let first_value = list.prepop();
  list.log_list();
}

function test_queue(){
  let testList = ["test_data_0", "test_data_1", "test_data_2", "test_data_3"];
  let queue = new Queue()
  
  for (const item of testList) {
    console.log(item)
    queue.push(item)
  }
  console.log(queue.size)
  
  let item = ''
  
  do {
  item = queue.pop();
  console.log(item)
  }while (item)
  
  console.log(queue.size)
  
}

function test_stack() {
  let testList = ["test_data_0", "test_data_1", "test_data_2", "test_data_3"];
  const stack = new Stack()
  
  for (const item of testList) {
    console.log(item)
    stack.push(item)
  }
  console.log(stack.size)
  
  let item = '';
  do{
    item = stack.pop()
    console.log(item)
  }while (item)
  console.log(stack.size)
  
}

function main() {
  // test_linked_list()
  test_queue();
  test_stack();

  console.log("end");
}

main();
