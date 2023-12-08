class queue{
    constructor(){
        this.items={}
        this.front=0
        this.back=0
         }
       enqueue(element){
      this.items[this.back]=element
         this.back++

       }
       dequeue(){
           const removed=this.items[this.front]
           delete this.items[this.front]
           this.front++
           return removed
       }
       peek(){
           return this.items[this.front]
       }
       size(){
           return this.back-this.front
       }
       print(){
        console.log(this.items)
       }
}
var countStudents = function(students, sandwiches) {
   let students_q = new queue();
   let sandwiches_q = new queue();

   for (let i = 0; i < students.length; i++) {
       students_q.enqueue(students[i]);
       sandwiches_q.enqueue(sandwiches[i]);
   }
   let i=0

   while (students_q.size() > 0&& i<students.length**2) {
       if (students_q.peek() === sandwiches_q.peek()) {
           students_q.dequeue();
           sandwiches_q.dequeue();
       } else {
           let temp = students_q.dequeue();
           students_q.enqueue(temp);
       }
       i++
   }
   students_q.print()
   sandwiches_q.print()

   return students_q.size();
};
console.log(countStudents( [1,1,0,0], [0,1,0,1]))