# Educational DP Contest
## A 1次元DP
- 普通の1次元DP

## B 1次元DP
- 普通の1次元DP．Aにループがついた
- DPはインデックス管理が面倒なので1-indexedで実装しようと思う．

## C 2次元DP
- 2次元DP．サイズは$`N \times 3`$
- N日目にA, B, Cいずれかの行動をする時の最大の幸福度

## D ナップザック問題
- ```dp[i+1][j+w[i]]```とするより，```dp[i+1][j-w[i]]```で管理した方が良さそう

## E ナップザック問題
- D問題と問題文は同じで，制約だけが変わった．
- DPテーブルを品物の数と重さで作ると，計算量が$`O(NW)`$となり，今回は$`W <= 10^9`$なので，TLEとなる
- 制約に着目し，DPテーブルを品物と，価値の合計値でとると可能になる．

## F LCS(最長共通部分列問題)
- DPテーブルで文字列を扱ってしまうと，毎回文字列のコピーが必要になるため，計算量が$`O(|s|^2|t|)`$になってしまい，TLEになってしまう．
- 回避するためには，共通部分列の長さを持つDPテーブルを作成し，最後にDPテーブルをもとに文字列を復元すれば良い．