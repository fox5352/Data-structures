/** @format */

const LinkedList = require("./Linked_list");

function main() {
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

  console.log("end");
}

main();
