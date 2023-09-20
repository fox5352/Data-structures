/** @format */

const LinkedList = require("./Linked_list");

function main() {
  let testList = ["test_data_0", "test_data_1", "test_data_2", "test_data_3"];

  let list = new LinkedList();

  for (const item of testList) {
    list.append(item);
  }

  // list.log_list();

  console.log(list.pop());

  // list.log_list();

  console.log("end");
}

main();
