# C問題
- 二分探索を行うことで、計算量を$'O(N\log N )'$で行える。
    ```c++
    #include <algorithm>

    lower_bound(A, A+N-1, A[i]+M)
    upper_bound(A, A+N-1, A[i]+M)
    ```
    二分探索を行う際にはlower_bound, upper_boundが使える。引数には、探索したい配列（ベクトル）の先頭のアドレス、最後のアドレス、検索したい数字を与える。