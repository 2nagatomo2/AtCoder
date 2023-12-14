# D問題
- stackを使って()の位置を管理。
    ```c++
    // include
    #include <stack>

    stack<int> st;  // 宣言
    st.push(0);　// 値を一番上に追加
    top = st.top();  // 一番上の値を取得
    st.pop();  // 一番上の値を削除
    st.empty();  // stackがからであるかどうかを返す
    ```