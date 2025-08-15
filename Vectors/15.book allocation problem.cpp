#include <iostream>
#include <vector>
using namespace std;

// Function to check if we can allocate books such that no student gets more than 'maxAllowedPages' pages.

bool isValidMid(vector<int> &arr, int n, int m, int maxAllowedPages) {
    
    int stud = 1;       // Number of students allocated so far (start with 1st student)
    int pages = 0;      // Pages allocated to the current student

    for (int i = 0; i < n; i++) {

        // If a single book has more pages than maxAllowedPages, then it's impossible to allocate — return false immediately
        if (arr[i] > maxAllowedPages) 
            return false;

        // If adding this book does not exceed the max allowed pages for a student
        if (pages + arr[i] <= maxAllowedPages) {
            pages += arr[i];  // Give this book to the current student
        } 
        else {
            // If adding this book exceeds the limit, assign it to a new student
            stud++;           
            pages = arr[i];   // Start counting pages for the new student
        }
    }

    // If the total number of students required is within the allowed limit (m),
    // then this allocation is possible
    if(stud <= m){
        return true;
    }
    else{
        return false;
    }
}


// Function to find the minimum possible maximum number of pages that can be allocated to 'm' students such that:
// 1. Books are allocated in order (no rearranging)
// 2. No book is divided between students
// 3. We want to minimize the maximum pages any student gets

int allocateBooks(vector<int> &arr, int n, int m) {
    
    int sum = 0; // Total pages of all books
    
    // Calculate total sum of pages. This sum will be the upper bound for binary search
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int st = 0;       // Lower bound of search (min possible max pages)
    int end = sum;    // Upper bound of search (max possible max pages)
    int ans = -1;     // Stores the final answer

    // If there are more students than books, allocation is impossible
    if (m > n) return -1;

    // Binary Search for the minimum possible 'max pages'
    while (st <= end) {
        
        int mid = st + (end - st) / 2; // Midpoint of current range

        // Check if we can allocate books such that 
        // no student gets more than 'mid' pages

        if (isValidMid(arr, n, m, mid)) {
            ans = mid;       // This is a valid allocation
            end = mid - 1;   // Try to find an even smaller max pages value
        }
        else {
            st = mid + 1;    // Increase lower bound since 'mid' was too small
        }
    }

    return ans; // Minimum possible max pages
}


int main() {

    // Example test case
    vector<int> arr = {2,1,3,4};       // Pages in each book
    int n = arr.size();                 // Number of books
    int m = 2;                          // Number of students

    cout << "Minimum pages : " << allocateBooks(arr, n, m) << endl;

    return 0;
}

// output

// Minimum pages : 6