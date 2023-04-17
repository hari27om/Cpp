1.Approach 

    // Create a temp array of length input array
    // Traverse through array and if a non negative elements encounter then put this element in the temp array at zero index and increment index
    // Fill the zeros in remaining places of temp array




2.Approach

    // Start traversing from the first occurrence index of Zero 
    // Tak 2 variables (i,j), i will be at the first occurrence of zero and j is at i+1 
    //  If element at j index is not zero then swap elements at i,j and increment i,j
    // If the element at j index is zero then only increment j.

  void zerosToEnd(int arr[], int n) {

  //finding first zero occurrence
  int k = 0;
  while (k < n) {
    if (arr[k] == 0) break;
    else 
      k = k + 1;
  }

  //finding zeros and immediate non-zero elements and swapping them
  int i = k, j = k + 1;
  while (i < n && j < n) {
    if (arr[j] != 0) {
      swap(nums[i], nums[j]);
      i++;
    }
    j++;
  }