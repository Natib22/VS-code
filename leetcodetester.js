var canSeePersonsCount = function (heights) {
  let myarray = [];
  let stack = [];

  let n = heights.length;

  for (let i = n - 1; i >= 0; i--) {
    let count = 0;

    while (stack.length > 0 && heights[i] > stack[stack.length - 1]) {
      stack.pop();
      count++;
    }
    console.log(stack);
    myarray[i] = count + stack.length;
    stack.push(heights[i]); // Push the current building height onto the stack
  }

  return myarray;
};
canSeePersonsCount([10, 6, 8, 5, 11, 9]);
