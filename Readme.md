### Leetcode 30 Day Challenge.

|Date|Name|Discription|Solution Brief|
|----|----|-----------|--------------|
|1 Oct|Recent Counter|Implement a class|Use Queue only store the pings for which t-ping<=3000 in the queue|
|2 Oct|Combination Sum|Combination of numbers equal to a sum (repetition allowed)|Backtracking|
|3 Oct|K-diff pairs in an array|Return the number of unique k-diff pairs in the array (repetition allowed)|Sorting + two pointers from begining|
|4 Oct|Remove Covered Intervals|Return the total number of intervals left|Custom Sort + count intervals|
|5 Oct|Complement of Base 10 Integer|1's Complement of a integer|Create xor mask with 1 + xor with the number|
|6 Oct|Insert in BST|Insert given element in binary search tree|Recursion, `root = new TreeNode(val);`|
|7 Oct|Rotate List|Rotate a list `k` times|Linear time, find tail and join to head and then make the c-k node the head and remove cycle here|
|8 Oct|Binary Search|Binary Search|Binary Search|
|9 Oct|Serialize and Deserialize BST|String to tree & tree to string|Use `istringstream ss(data);` `string cur; ss>>cur;`|
|10 Oct|Minimum Number of Arrows to Burst Balloons|Find minimum arrows to burst ballon along x axis|Sort on increasing `xend` and then `xstart`+ greedy|
