# A問題

# B問題

# C問題
### Pythonでの実装
- itertoolsを使って順列で実装
  - 計算量 $O(MN!)$ になりpythonでは間に合わない。

- dfs(深さ優先探索)を使った実装
  - 計算量 $O(NN!)$
  - Cpythonでは間に合わないが、PyPyでは間に合う。

### c++での実装
- 構造体を使って、辺の情報を整理しよう。つながっているノードと、距離を保持する構造体を作ると情報が整理できる。

- dfs関数
  ```c++
  void dfs(vector<vector<Edge> > &g, int &pos, int dist) {
    visited[pos] = true;
    ans = max(ans, dist);
    for(auto v : g[pos]) {
        if(!visited[v.to]) {
            dfs(g, v.to, dist+v.cost);
        }
    }
    visited[pos] = false;
  }
  ```
  再帰を使って呼び出し。帰ってきたらfalseにする。これで大抵はうまく行く気がした。

- global変数をうまく使おう。今回はansとvisitedをグローバル変数にした。これにより実装が簡略化できる。持つべき状態をいちいちdfsに渡すのは煩わしいのでこのようにすることがよくある。