# C問題
- 深さ優先探索で実装stackを使い実装。模範解答ではqueueを使った幅優先探索で実装していた。

- 最初に与えられる文字列の周りに'.'を一周分付け加えることで不正なメモリアクセスを回避したが、解答のような実装の方が好ましい（できた方が良い）と思われる。以下に解答例を示す。
 ```c++
 int dx[] = { 1,0,-1,0,1,1,-1,-1 }; int dy[] = { 0,1,0,-1,1,-1,1,-1 };
 for (int d = 0; d < 8; d++) {
    int nx = x + dx[d];
    int ny = y + dy[d];
    if (0 <= nx && nx < h && 0 <= ny && ny < w && s[nx][ny] == '#' && !used[nx][ny]) {
        used[nx][ny] = true;
        que.push({ nx,ny });
    }
 }
 ```

 # E問題
 - ダイクストラ法でスタートから各地点まで車で行ったときにかかる最短時間と，各地点からゴールまで電車で行った時にかかる最短時間を管理する．