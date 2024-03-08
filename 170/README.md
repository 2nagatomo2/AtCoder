# 170
## D問題
### 方針
- segtreeを使って実装(RMQ)
    - 区間の最小値を求める．初期値は`$10^9$`
### 注意点
- multisetの扱い
    - multisetで値を削除するとき，削除したい値のみを指定すると，指定した値が全て消えてしまう．
    - 値を一つだけ消したいときは，find関数を使い，イテレータを用いて消す．
        ```c++
        score[B[C[i]]].erase(A[C[i]]); // これだと全部消えちゃう！！
        score[B[C[i]]].erase(score[B[C[i]]].find(A[C[i]])); // これだと一個だけ消える
        ```
    - multisetの最大値を求めたいときはイテレータを使う．その際rbegin()を使うと簡潔にできる．
        ```c++
            auto itr = a.end();
            itr--;
            cout << *itr << endl;

            cout << *a.rbegin() << endl;

            // この二つは同じことをしている！！
        ```
