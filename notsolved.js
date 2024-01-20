function ListNode(val, next) {
  this.val = val === undefined ? 0 : val;
  this.next = next === undefined ? null : next;
}
var mergeTwoLists = function (list1, list2) {
  if (!list1) {
    return list2;
  } else if (!list2) {
    return list1;
  }
  let head = new ListNode();
  let current = head;
  while (list1 && list2) {
    if (list1.val < list2.val) {
      current.next = new ListNode(list1.val);
      list1 = list1.next;
    } else if (list1 > list2.val) {
      current.next = new ListNode(list2.val);
      list2 = list2.next;
    } else {
      current.next = new ListNode(list2.val);
      list2 = list2.next;
      current = current.next;
      current.next = new ListNode(list1.val);
      list1 = list1.next;
    }
    current = current.next;
  }
  if (list1) {
    current.next = list1;
  } else {
    current.next = list2;
  }
  return head.next;
};
console.log(mergeTwoLists([5], [1, 2, 3, 4]));
