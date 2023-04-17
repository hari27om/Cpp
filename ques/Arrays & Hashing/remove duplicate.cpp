// remove duplicate in place from sorted array.(we have to modify the array)

1. Approach
    // Declare a HashSet.
    // Run a for loop from starting to the end.
    // Put every element of the array in the set.
    // Store size of the set in a variable K.
    // Now put all elements of the set in the array from the starting of the array.
    // Return K.
  tc=(nlogn)

2.Approach
  // two pointer approach
    //   Take a variable i as 0;
    // Use a for loop by using a variable ‘j’ from 1 to length of the array.
    // If arr[j] != arr[i], increase ‘i’ and update arr[i] == arr[j].
    //  After completion of the loop return i+1, i.e size of the array of unique elements.
  // tc=O(n)
  
  i,j=a[0];
  if a[j]!=a[i]
  {
    a[i+1]=a[j];
    i++;
}
