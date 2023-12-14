#include <iostream>
using namespace std;
#include <string>

//Problem 1
//template<typename T> T findLargest (const T& a, const T& b, const T& c){
//    return (a>b) ? ((a<c) ? a :c) : ((b>c) ? b :c);
//}

//Problem 2
//template<typename T>
//void  mySwap (T& a, T& b){
//T temp =a;
//a=b;
//b=temp;
//}

//Problem 4
//double calculateAverage(int n, int arr[]){
//    double sum=0;
//
//    for (int i = 0; i <n ; ++i) {
//        sum+=arr[i];
//    }
//
//    double average =sum/n;
//    return average;
//}

//Problem 5
//int findMinimum(int arr[], int n) {
//    int minimum = arr[0]; // Assume the first element as the minimum
//
//    for (int i = 1; i < n; ++i) {
//        if (arr[i] < minimum) {
//            minimum = arr[i];
//        }
//    }
//
//    return minimum;
//}

//Problem 6
//int indexOfLargestElement(double array[], int size) {
//    if (size <= 0) {
//        cout << "Array size should be greater than 0." << endl;
//        return 0;
//    }
//
//    int largestIndex = 0;
//
//    for (int i = 1; i < size; ++i) {
//        if (array[i] > array[largestIndex]) {
//            largestIndex = i;
//        }
//    }
//
//    return largestIndex;
//}

//Problem 7
//bool strictlyEqual(const int list1[], const int list2[], int size) {
//    if (size <= 0) {
//        cout << "Array size should be greater than 0." << endl;
//        return false;
//    }
//
//    for (int i = 0; i < size; ++i) {
//        if (list1[i] != list2[i]) {
//            return false;
//        }
//    }
//
//    return true;
//}

//Problem 9
//void sortingElements(int arr[], int size){
//    for (int i = 0; i <size-1 ; ++i) {
//        for (int j = 0; j <size-i ; ++j) {
//            if(arr[j] >arr[j+1]){
//              int temp= arr[j];
//              arr[j]=arr[j+1];
//              arr[j+1]=temp;
//            }
//        }
//    }
//}

//Problem 11
//void printNumbers(int num) {
//    if (num < 0) {
//        return;
//    }
//
//    cout << num << " ";
//    printNumbers(num - 1);
//}

//Problem 12
//void printNaturalNumbers(int num){
//    if(num<=50){
//        cout << num << " ";
//        printNaturalNumbers(num+1);
//    }
//}

//Problem 13
//int calculateSum(int n) {
//    if (n == 1) {
//        return 1;
//    } else {
//        return n + calculateSum(n - 1);
//    }
//}

//Problem 14
//int factorial(int n ){
//    if(n<=1){
//        return 1;
//    }
//    else{
//        return n* factorial(n-1);
//    }
//}

//Problem 15
//int power(int base,int exponent){
//    if(exponent==0){
//        return 1;
//    }
//    else if(exponent>0){
//        return base* power(base,exponent-1);
//    } else{
//        return 1/ power(base,-exponent);
//    }
//}
//Problem 16
//void reverseArray(int arr[], int start, int end) {
//    while (start < end) {
//        int temp = arr[start];
//        arr[start] = arr[end];
//        arr[end] = temp;
//
//
//        start++;
//        end--;
//    }
//}

//Problem 17
//void reverseArray(int arr[], int start, int end) {
//    if (start < end) {
//        // Swap elements at start and end indices
//        int temp = arr[start];
//        arr[start] = arr[end];
//        arr[end] = temp;
//
//        // Recursively call reverseArray with updated indices
//        reverseArray(arr, start + 1, end - 1);
//    }
//}
//
//void printArray(int arr[], int size) {
//    for (int i = 0; i < size; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}

//Problem 18
//double computeSeries(int n) {
//    if (n == 1) {
//        return 1.0;
//    } else {
//        return 1.0 / (n * n) + computeSeries(n - 1);
//    }
//}

//Problem 19
//double computeSeries(int n) {
//    if (n == 1) {
//        return 1.0 / (n * (n + 2));
//    } else {
//        return 1.0 / (n * (n + 2)) + computeSeries(n - 1);
//    }
//}

//Problem 20
//int sumOfDigits(int num) {
//    if (num < 10) {
//        return num;
//    } else {
//        return num % 10 + sumOfDigits(num / 10);
//    }
//}

//Problem 21
int product(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }
    else if (b == 1) {
        return a;
    }
    else {
        return a + product(a, b - 1);
    }
}
int main() {
//    cout << "Problem 1 \n";
//    int x, y, z;
//    cout << "Enter only three integers: ";
//    cin >> x >> y >> z;
//    int largestInt = findLargest(x,y,z);
//    cout << "Largest int:" << largestInt << endl;

//    double q,w,e;
//    cout << "Enter only double values: ";
//    cin >> q >> w >> e;
//
//    double largestDouble = findLargest(q,w,e);
//    cout << "Largest double: " << largestDouble << endl;
//
//    string t,r,u;
//    cout << "Enter only three  string values: ";
//    cin >> t >> r >> u;
//
//    string largestString = findLargest(t,r,u);
//    cout << "Largest string: "<< largestString << endl;


//cout << "Problem 2 \n";
//int int1 =5, int2=10;
//    cout << "Before swap - int1: " << int1 << ", int2: " << int2 << endl;
//    mySwap(int1, int2);
//    cout << "After swap - int1: " << int1 << ", int2: " << int2 << endl;

//cout << "Problem 3 \n";
//int n;
//cout << "Enter the number of integers: ";
//cin >> n;
//
////Input integers
//
//cout << "Enter " << n << " integers: " <<endl;
//int number[n]; // Creating an array  and store the numbers
//for(int i =0; i < n; i++){
//    cin >> number[i];
//}
//
////Calculate the sum
//int sum =0;
//for (int i =0; i < n ; i++){
//    sum+=number[i];
//}
//
//cout << "Sum: "<<sum<< endl;

//cout << "Problem 4 \n";
//int n;
//cout << "Enter the size of the array: ";
//cin >> n;
//
//int elements[n];
//cout << "Enter the " << n << " elements \n ";
//
//    for (int i = 0; i <n ; ++i) {
//        cin >> elements[i];
//    }
//
//    double average= calculateAverage(n, elements);
//    cout << "Average: " << average << endl;


//cout << "Problem 5 \n";
//    int n;
//    cout << "Enter the size of the array: ";
//    cin >> n;
//
//    int elements[n];
//    cout << "Enter " << n << " elements:" << endl;
//
//    for (int i = 0; i < n; ++i) {
//        cin >> elements[i];
//    }
//
//    int min = findMinimum(elements, n);
//    cout << "The minimum element in the array is: " << min << endl;

//cout << "Problem 6 \n";
//
//    const int SIZE = 15;
//    double numbers[SIZE];
//
//    cout << "Enter 15 numbers:" << endl;
//
//    for (int i = 0; i < SIZE; ++i) {
//        cin >> numbers[i];
//    }
//
//    int largestIndex = indexOfLargestElement(numbers, SIZE);
//
//    if (largestIndex != -1) {
//        cout << "The index of the largest element is: " << largestIndex << endl;
//    }

//cout << "Problem 7 \n";
//    const int SIZE = 5;
//
//    int list1[SIZE], list2[SIZE];
//
//    cout << "Enter " << SIZE << " integers for list1:" << endl;
//    for (int i = 0; i < SIZE; ++i) {
//        cin >> list1[i];
//    }
//
//    cout << "Enter " << SIZE << " integers for list2:" << endl;
//    for (int i = 0; i < SIZE; ++i) {
//        cin >> list2[i];
//    }
//
//    bool equal = strictlyEqual(list1, list2, SIZE);
//
//    if (equal) {
//        cout << "The lists are strictly identical." << endl;
//    } else {
//        cout << "The lists are not strictly identical." << endl;
//    }

//cout << "Problem 8 \n";
//
//        const int MAX_SIZE = 100;
//        char characters[MAX_SIZE];
//        int n;
//        int uppercaseCount = 0, lowercaseCount = 0, digitCount = 0, specialCount = 0;
//
//        cout << "Enter the number of characters (up to " << MAX_SIZE << "): ";
//        cin >> n;
//
//        if (n <= 0 || n > MAX_SIZE) {
//            cout << "Invalid size entered. Exiting program." << endl;
//            return 1;
//        }
//
//        cout << "Enter " << n << " characters: ";
//        for (int i = 0; i < n; ++i) {
//            cin >> characters[i];
//
//            if (characters[i] >= 'A' && characters[i] <= 'Z') {
//                uppercaseCount++;
//            } else if (characters[i] >= 'a' && characters[i] <= 'z') {
//                lowercaseCount++;
//            } else if (characters[i] >= '0' && characters[i] <= '9') {
//                digitCount++;
//            } else {
//                specialCount++;
//            }
//        }
//
//        cout << "Uppercase: " << uppercaseCount <<  endl;
//        cout << "Lowercase: " << lowercaseCount <<endl;
//        cout << "Digit: " << digitCount << endl;
//        cout << "Special: " << specialCount << endl;

//cout << "Problem 9 \n";
//const int max_size=100;
//int arr[max_size];
//int size;
//cout << "Enter the elements (up to " <<max_size <<"): ";
//cin >> size;
//if(size<=0 || size>max_size){
//    cout << "Invalid size entered \n";
//    return 1;
//}
//
//cout << "Enter " << size << " integers " << endl;
//    for (int i = 0; i <size ; ++i) {
//        cin >> arr[i];
//    }
//    sortingElements(arr,size);
//    cout << "Sorted array: ";
//    for (int i = 0; i <size ; ++i) {
//        cout << " " <<  arr[i];
//
//    }
//    cout << "\n";

//cout << "Problem 11 \n";
//    int startNumber = 10;
//
//   cout << "Numbers from 10 to 0: ";
//    printNumbers(startNumber);
//    cout << endl;

//cout << "Problem 12 \n";

//int num1=1;
//cout << "Numbers until 50: " ;
//    printNaturalNumbers(num1);
//    cout << ".";

// cout << "Problem 13 \n";
// int number;
// cout << "Enter only positive number:";
// cin >> number;
//
// if(number<=0){
//     cout << "Please enter only positive integers:";
//     return 1;
// }
// int sum = calculateSum(number);
// cout << "Sum: "<< sum<< endl;

//cout << "Problem 14 \n";
//int num1;
//cout << "Enter the non-negative integer: ";
//cin >> num1;
//if(num1<0){
//    cout << "Enter only non-negative integer";
//    return 1;
//}
//int result = factorial(num1);
//cout<< "Factorial of " << num1 << " = " << result<< endl;
//  cout << "Problem 15 \n";
//  int base,exponent;
//  cout << "Enter base number: ";
//  cin >> base;
//
//  cout << "Enter exponent: ";
//  cin >> exponent;
//
//  int result = power(base,exponent);
//  cout << base<<  " raise to power of " << exponent << " is "<< result << endl;

//cout << "Problem 16 \n";
//    int arr[] = {1, 2, 3, 4, 5};
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    cout << "Original array: ";
//    for (int i = 0; i < size; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << std::endl;
//
//        reverseArray(arr, 0, size - 1);
//
//    std::cout << "Reversed array: ";
//    for (int i = 0; i < size; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << std::endl;

//cout << "Problem 17 \n";
//    const int maxSize = 100; // Maximum size of the array
//    int arr[maxSize];
//    int size;
//
//    cout << "Enter the number of elements (maximum " << maxSize << "): ";
//    cin >> size;
//
//    if (size <= 0 || size > maxSize) {
//        cout << "Invalid input for size. Please enter a valid number of elements." << endl;
//        return 1;
//    }
//
//    cout << "Enter " << size << " integers:" << endl;
//    for (int i = 0; i < size; i++) {
//        cin >> arr[i];
//    }
//
//    cout << "Original array: ";
//    printArray(arr, size);
//
//    reverseArray(arr, 0, size - 1);
//
//    cout << "Reversed array: ";
//    printArray(arr, size);

//cout << "Problem 18 \n";
//    int n;
//    cout << "Enter the value of n: ";
//    cin >> n;
//
//    if (n <= 0) {
//        cout << "Please enter a positive integer." << endl;
//        return 1;
//    }
//
//    double result = computeSeries(n);
//    cout << "Result of the series for n = " << n << " is: " << result << endl;

//cout << "Problem 19 \n";
//    int n;
//   cout << "Enter the value of n: ";
//    cin >> n;
//
//    if (n <= 0) {
//        cout << "Please enter a positive integer." << endl;
//        return 1;
//    }
//
//    double result = computeSeries(n);
//    cout << "Result of the series for n = " << n << " is: " << result << endl;
// cout << "Problem 20 \n";
//    int number;
//   cout << "Enter a number: ";
//  cin >> number;
//
//    int result = sumOfDigits(number);
//    cout << "Sum of digits of " << number << " is: " << result << endl;

cout << "Problem 21 \n";
    int num1, num2;
   cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int result = product(num1, num2);
    cout << "Product of " << num1 << " and " << num2 << " is: " << result << endl;

        return 0;
}
