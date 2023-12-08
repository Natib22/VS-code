class Node{
  constructor(value){
    this.value=value
    this.next=null
  }
}
class Linkedlist{
    constructor(){
        this.head=null
        this.size=0
    }
isEmpty(){
    return this.size===0
}
size(){
    return this.size
}
perpend(value){
    const node= new Node(value)
    if(this.isEmpty())
        this.head=node
    else{
        node.next= this.head
        this.head=node
    }
   this.size++
}
}