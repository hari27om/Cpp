// remove duplicate in place from sorted array.(we have to modify the array)

1. Approach
  use a set to solve it.
  // s.insert arr(i);
  tc=(nlogn)

2.Approach
  // two pointer approach
  // tc=O(n)
  
  i,j=a[0];
  if a[j]!=a[i]
  {
    a[i+1]=a[j];
    i++;
}
