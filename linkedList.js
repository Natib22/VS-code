//linked list

class Node {
  constructor(value) {
    this.value = value;
    this.next = null;
  }
}

class LinkedList {
  constructor() {
    this.head = null;
    this.length = 0;
  }

  prepend(value) {
    const node = new Node(value);

    if (this.head == null) {
      this.head = node;
    } else {
      node.next = this.head;
      this.head = node;
    }
    this.length++;
  }

  append(value) {
    const node = new Node(value);
    if (this.head == null) {
      this.head = node;
    } else {
      let current = this.head;
      while (current.next != null) {
        current = current.next;
      }
      current.next = node;
    }
    this.length++;
  }

  print() {
    let current = this.head;
    let output = "";

    while (current.next != null) {
      output += current.value + " -> ";
      current = current.next;
    }
    output += current.value;

    console.log(output);
  }

  contain(num) {
    let current = this.head;
    while (current.next != null) {
      if (current.value == num) return true;
      current = current.next;
    }
    if (current.value == num) return true;
    return false;
  }

  insertAt(num, index) {
    if (index < 0 || index >= this.length) return undefined;
    if (index == 0) this.prepend(num);
    else {
      const node = new Node(num);
      let current = this.head;
      let i = 0;
      while (i < index - 1) {
        current = current.next;
        i++;
      }
      node.next = current.next;
      current.next = node;
    }
    this.length++;
  }

  removeAt(index) {
    if (index < 0 || index >= this.length) return null;
    let removed = this.head;
    if (index == 0) {
      this.head = removed.next;
    } else {
      let current = this.head;
      for (let i = 0; i < index - 1; i++) {
        current = current.next;
      }
      removed = current.next;
      current.next = removed.next;
    }
    this.length--;
    return removed.value;
  }
  removeValue(value) {
    if (this.isEmpty()) return null;
    if (this.head.value == value) {
      this.head = this.head.next;
      this.size++;
      return value;
    } else {
      let current = this.head;
      while (current.next && current.next.value != value) {
        current = current.next;
      }
      if (current.next) {
        let removed = current.next;
        current.next = removed.next;
        this.length--;
        return value;
      }
      return null;
    }
  }
  isEmpty() {
    return this.length == 0;
  }

  search(value) {
    if (this.isEmpty()) return -1;
    else {
      let i = 0;
      let current = this.head;
      while (current) {
        if (current.value == value) return i;
        current = current.next;
        i++;
      }
    }
    return -1;
  }
}

// let mylinked = new LinkedList();
// mylinked.append(3);
// mylinked.prepend(2);
// mylinked.append(4);
// mylinked.append(8);
// mylinked.print();
// console.log(mylinked.search(2));
// console.log(mylinked.search(3));
// console.log(mylinked.search(4));
// console.log(mylinked.search(9));
