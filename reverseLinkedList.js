function linkedList(val, next) {
  this.val = val == undefined ? 0 : val;
  this.next = next == undefined ? null : next;
}
function reverseLinkedList(head) {
  let prev = null;
  let myCurrent = head;
  while (myCurrent) {
    let next = myCurrent.next;
    myCurrent.next = prev;
    prev = myCurrent;
    myCurrent = next;
  }
  return prev;
}

// let head = new linkedList(0);
// let myCurrent = head;
// for (let i = 1; i < 5; i++) {
//   myCurrent.next = new linkedList(i);
//   myCurrent = myCurrent.next;
// }

// let sample = reverseLinkedList(head);

// let current = sample;
// while (current) {
//   console.log(current.val);
//   current = current.next;
// }
