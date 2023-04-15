1.Approach 

sort the array and check if it is  same as the last element, if not then return the element.
  (ex=[1,2,3,4,5,77,77,77] second largest is 5.)
  tc=O(nlogn + n)


2.Approach

  largest=arr[0], slargest=INT_MIN.
  if(a[i]>largest)
  slargest=largest;
  largest=a[i];
  else if  
  a[i]<largest&&a[i]>slargest
  slargest=a[i];
tc=O(n);

 // if(a[i]<smallest)
 //  ssmallest=smallest;
 //  smallest=a[i];
 //  else if  
 //  a[i]!<smallest&&a[i]<ssmallest
 //  ssmalest=a[i];