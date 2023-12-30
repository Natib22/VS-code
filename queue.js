class Queue{
    constructor(){
        this.items={}
        this.rear=0
        this.front=0
    }
enqueue(element){
    this.items[this.rear]=element
    this.rear++
    }
dequeue(){
    const removed=this.items[this.front]
    delete this.items[this.front]
    this.front++
    return removed
}
peek(){
    console.log(this.items[this.front])
}
isEmpty(){
    return this.rear-this.front==0
}
size(){
    return this.rear-this.front
}
print(){
    console.log(this.items)
}
}
