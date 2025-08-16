 # 📚 Book Allocation Problem

## Problem Statement
Allocate `N` books among `M` students such that:  
- Books must be allocated **in order**.  
- Each student gets at least one book.  
- Minimize the **maximum pages assigned** to a student.

---

## Input

Books = [2, 1, 3, 4]
Students = 2


## Output

Minimum pages = 6

---

## Constraints
- 1 ≤ N ≤ 10^5  
- 1 ≤ M ≤ N  
- 1 ≤ pages[i] ≤ 10^9  

---

## Approach
- Binary search on answer: `[max(pages), sum(pages)]`.  
- Check feasibility for `mid`: Can we allocate books without exceeding `mid` pages?  
- If feasible → reduce upper bound.  
- If not feasible → increase lower bound.

---

## ASCII Visualization

Books: 2 1 3 4
Students: 2

Student 1 -> [2,1,3] = 6
Student 2 -> [4] = 4

Maximum pages = 6 ✅


---

## Binary Search Trace
| Low | High | Mid | Feasible? | Comment                  |
|-----|------|-----|-----------|-------------------------|
| 4   | 10   | 7   | Yes       | 1st valid, try smaller  |
| 4   | 6    | 5   | No        | Cannot allocate 2nd student properly |
| 6   | 6    | 6   | Yes ✅     | Minimum found           |

---

## Example Output

Minimum pages : 6