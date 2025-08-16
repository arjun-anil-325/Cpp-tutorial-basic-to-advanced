# 🎨 Painter’s Partition Problem

## Problem Statement
Allocate `N` boards to `K` painters such that:  
- Each painter paints **continuous boards**.  
- Minimize **maximum time** taken by any painter.

---

## Input

Boards = [40, 30, 10, 20]
Painters = 2


## Output

Minimum time = 60


---

## Constraints
- 1 ≤ N ≤ 10^5  
- 1 ≤ K ≤ N  
- 1 ≤ boards[i] ≤ 10^9  

---

## Approach
- Binary search on answer: `[max(boards), sum(boards)]`.  
- Check feasibility for `mid`: Can all boards be painted using ≤ K painters?  
- If feasible → reduce upper bound.  
- If not feasible → increase lower bound.

---

## ASCII Visualization

Boards: 40 30 10 20
Painters: 2

Painter 1 -> [40, 20] = 60
Painter 2 -> [30, 10] = 40

Maximum time = 60 ✅


---

## Binary Search Trace
| Low | High | Mid | Feasible? | Comment             |
|-----|------|-----|-----------|-------------------|
| 40  | 100  | 70  | Yes       | Try smaller        |
| 40  | 69   | 54  | No        | Cannot fit boards  |
| 55  | 69   | 62  | No        | Too small          |
| 63  | 69   | 66  | Yes       | Continue smaller   |
| Answer = 60 ✅ |

---

## Example Output

Minimum time to paint : 60