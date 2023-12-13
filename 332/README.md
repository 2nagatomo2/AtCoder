# D問題
- 列と行を入れ替える操作をする。$2\leq H\leq 5$ , $2\leq W\leq 5$ より、全探索 をしても走査回数は $5! \times 5! = 14400$ 回で収まる。
    
    順列をで操作する際に用いるのが
    ```c++
    #include <algorithm>
    next_permutation(array, array+n)
    ```
    sort関数と同じような形で、第一引数、第二引数で配列の範囲を与えると辞書中でその要素の次の順列を与えてくれる。(array, array+n という形で与えているのは、それぞれポインタ参照しているためである。*arrayのような形にするとarrayの0番目の要素が得られる。)
    https://qiita.com/siser/items/a91022071b24952d27d9