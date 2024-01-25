let nums = [1,3,-1,-3,5,3,6,7]
let k = 3

class Queue{
  constructor(){
    this.items={}
    this.maxvalue=[]
    this.front=0
    this.back=0
  }
  enqueue(element){
    this.items[this.back]=element
    while(this.maxvalue.length>0&&this.maxvalue[this.maxvalue.length-1]<element)
              this.maxvalue.pop()
          this.maxvalue.push(element)
         this.back++
  }
  dequeue(){
    const removed=this.items[this.front]
    delete this.items[this.front]
        if(removed==this.maxvalue[0])
             this.maxvalue.shift()
    this.front++
    return removed
  }
  getmax(){
    return this.maxvalue[0]
  }
  print(){
    console.log(this.items)
    console.log(this.maxvalue)
}

}

let myarray=[]

let myqueue=new Queue()
for(let i=0;i<k;i++)
       myqueue.enqueue(nums[i])
myarray[0]=myqueue.getmax()

for(let i=k;i<nums.length;i++)
      { myqueue.enqueue(nums[i])
        myqueue.dequeue()
        myarray.push(myqueue.getmax())
      }
  
       
     
 // myqueue.print()
  console.log(myarray)
