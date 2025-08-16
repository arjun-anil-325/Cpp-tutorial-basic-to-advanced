# 🐄 Aggressive Cows Problem

## Problem Statement
Place `C` cows in `N` stalls along a line such that:  
- Cows are aggressive if close.  
- Maximize the **minimum distance** between any two cows.

---

## Input

Stalls = [1, 2, 8, 4, 9]
Cows = 3


## Output

Largest minimum distance = 3


---

## Constraints
- 2 ≤ N ≤ 10^5  
- 2 ≤ C ≤ N  
- 0 ≤ stalls[i] ≤ 10^9  

---

## Approach
- Sort the stalls.  
- Binary search on distance: `[1, max(stalls)-min(stalls)]`.  
- For each `mid`, check if C cows can be placed at least `mid` apart.  
- If feasible → try larger distance.  
- If not feasible → try smaller distance.

---

## ASCII Visualization

Stalls: 1 2 4 8 9
Cows = 3

Placement:
Cow 1 -> stall 1
Cow 2 -> stall 4
Cow 3 -> stall 8

Distances: 3,4
Minimum distance = 3 ✅


---

## Binary Search Trace
| Low | High | Mid | Feasible? | Comment                   |
|-----|------|-----|-----------|--------------------------|
| 1   | 8    | 4   | No        | Cannot place 3 cows      |
| 1   | 3    | 2   | Yes       | Try larger distance      |
| 3   | 3    | 3   | Yes ✅     | Maximum found            |
| Answer = 3 ✅ |

---

## Example Output

Largest minimum distance : 3
