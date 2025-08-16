#include <iostream>
#include <vector>
using namespace std;

/*
   Function: isValidMid
   --------------------
   Checks if it is possible to allocate books among 'm' students
   such that no student gets more than 'maxAllowedPages' pages.

   Parameters:
       arr - vector of pages in each book
       n   - number of books
       m   - number of students
       maxAllowedPages - maximum pages a student can get (our guess)

   Returns:
       true  -> allocation is possible
       false -> allocation not possible
*/
bool isValidMid(vector<int> &arr, int n, int m, int maxAllowedPages) {
    int stud = 1;   // number of students allocated so far
    int pages = 0;  // pages allocated to current student

    for (int i = 0; i < n; i++) {
        // If a single book has more pages than maxAllowedPages,
        // then it's impossible to allocate → return false
        if (arr[i] > maxAllowedPages)
            return false;

        // If current student can take this book without exceeding limit
        if (pages + arr[i] <= maxAllowedPages) {
            pages += arr[i];  // assign book to same student
        } 
        else {
            // Otherwise, allocate to next student
            stud++;
            pages = arr[i];   // start counting pages for new student
        }
    }

    // If we required 'stud' students <= m allowed students, then it's valid
    return (stud <= m);
}

/*
   Function: allocateBooks
   -----------------------
   Finds the minimum possible maximum number of pages that can be
   allocated to 'm' students such that:
      1. Books are given in the same order (no rearranging).
      2. No book is split between students.
      3. The maximum pages assigned to any student is minimized.

   Idea:
     - Use Binary Search on Answer.
     - Search range = [0, total pages in all books].
     - For each mid, check feasibility with isValidMid().
     - If feasible, save it and try smaller (minimize further).
     - If not feasible, try larger values.
*/
int allocateBooks(vector<int> &arr, int n, int m) {
    int sum = 0;  // total pages of all books
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int st = 0;       // lower bound of search
    int end = sum;    // upper bound of search
    int ans = -1;     // will store final answer

    // If there are more students than books → allocation impossible
    if (m > n) return -1;

    // Binary Search
    while (st <= end) {
        int mid = st + (end - st) / 2; // candidate max pages

        if (isValidMid(arr, n, m, mid)) {
            ans = mid;       // valid allocation
            end = mid - 1;   // try smaller max pages
        } else {
            st = mid + 1;    // not valid → increase pages
        }
    }
    return ans; // minimum possible maximum pages
}

/*
   Main function:
   --------------
   Example:
     Books = {2, 1, 3, 4}
     Students = 2
   Expected output: 6
   Explanation:
     - Allocate {2,1,3} → 6 pages
     - Allocate {4}     → 4 pages
     Max = 6 (minimized)
*/
int main() {
    vector<int> arr = {2, 1, 3, 4}; // pages in each book
    int n = arr.size();             // number of books
    int m = 2;                      // number of students

    cout << "Minimum pages : " << allocateBooks(arr, n, m) << endl;
    return 0;
}

// output

// Minimum pages : 6