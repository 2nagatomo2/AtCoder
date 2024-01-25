# 280
## D問題
### 方針
#### 解放1
- 素因数分解をする。($`O(\sqrt{N})`$)
- 各素因数の累乗を超える、$`N!`$の中で最小の$`N`$を求める。($`O(log_2N)`$)
- その中で最大のものが答え
#### 解放2
- ルジャンドルの定理を利用したものもある。https://atcoder.jp/contests/abc280/editorial/5348