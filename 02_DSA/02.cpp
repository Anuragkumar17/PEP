/*  
Time Complxity - How much time an algo takes as input size increases

Big O - represents the upper bound of running time - worst case time complexity of an algorithm
1. O(1) - Constant time complexity -> the time taken by the algorithm is constant and does not depend on the input size
cout<<"Hello World"<<endl; // O(1)
for(int i=0; i<5; i++){ // O(5) -> O(1)
    cout<<i<<endl;
}

2. O(log n) - Logarithmic time complexity -> the time taken by the algorithm increases logarithmically with the input size

3. O(n) - Linear time complexity -> the time taken by the algorithm is directly proportional to the input size
for(int i=0; i<n; i++){} // O(n)

4. O(n^2)  - Quadratic time complexity -> the time taken by the algorithm is proportional to the square of the input size
*/
/*
Space Complexity - How much extra memory an algorithm uses as input size increases.

1. O(1) - Constant Space
   Uses a fixed amount of memory, regardless of input size.
   Example:
   int a = 10, b = 20;

2. O(n) - Linear Space
   Extra memory grows with the input size.
   Example:
   int arr[n];

3. O(n^2) - Quadratic Space
   Memory required grows as the square of the input size.
   Example:
   int matrix[n][n];
*/