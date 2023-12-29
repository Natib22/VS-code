function quickSort(arr) {
  if (arr.length <= 1) {
    return arr;
  }

  const pivot = arr[0];
  const left = [];
  const right = [];

  for (let i = 1; i < arr.length; i++) {
    if (arr[i] < pivot) {
      left.push(arr[i]);
    } else {
      right.push(arr[i]);
    }
  }

  return quickSort(left).concat(pivot, quickSort(right));
}
points = [
  [8, 7],
  [9, 9],
  [7, 4],
  [9, 7],
];
let myarray = [];
for (let i = 0; i < points.length; i++) {
  myarray[i] = points[i][0];
}
myarray = quickSort(myarray);
console.log(myarray);
