var findMedianSortedArrays = function (nums1, nums2) {
  let myarray = [];
  let i = 0;
  let j = 0;
  while (i < nums1.length && j < nums2.length) {
    if (nums1[i] < nums2[j]) {
      myarray.push(nums1[i]);
      i++;
    } else {
      myarray.push(nums2[j]);
      j++;
    }
  }
  console.log(myarray);
  console.log(j);
  console.log(i);
  // if (j < nums2.length) {
  //   while (j < nums2.length) myarray.push(nums2[j]);
  // }
  // if (i < nums1.length) {
  //   while (i < nums1.length) myarray.push(nums1[i]);
  // }
  // if (myarray.length % 2 === 0) {
  //   return (myarray[length / 2 - 1] + myarray[length / 2]) / 2;
  // } else {
  //   return myarray[Math.floor(length / 2)];
  // }
};
findMedianSortedArrays([1, 2, 3, 4], [2, 36, 7]);
