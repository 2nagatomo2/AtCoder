# 279
## D問題
### 方針
- 微分をして求める。計算必要。
- double型に変換して計算。小数点を忘れないように。
```c++
    ll x = pow((double)a / (2 * b), 2. / 3.) - 1;
    ans = min(y(a, b, x), y(a, b, x+1));
```
- 小数点以下を表示するように設定を変更。
  - fixed: 小数点以下の桁数を指定したいときにつける。これをつけないと、整数部分が桁数に含まれてしまう。
  - setprecision(int x): 入出力で、浮動小数点型の桁数を指定する。fixと合わせることで、少数点以下の表示桁数を指定できる。
```c++
    cout << fixed << setprecision(10) << ans << endl;
```
- 参考: https://qiita.com/ryupim/items/1cbeb860d4a2f056358a