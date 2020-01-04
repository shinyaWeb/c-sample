# c-sample
Cのコードをいくつか配置しています。
### コード説明
1. least_square_method.c  
   2次元データに対して最小二乗法の結果を返します。  
   つまり、2次元データを1次関数  
   <img src="https://latex.codecogs.com/gif.latex?y&space;=&space;ax" title="y = ax" />  
   で近似したときの  
   <img src="https://latex.codecogs.com/gif.latex?a,b" title="a,b" />  
   を返します。初期設定では50個の座標まで入力できます。  
   Linux環境でのコンパイルは
   ```
   cc least_square_method.c
   ```
   実行は
   ```
   ./a.out < hoge.dat
   ```
   hoge.dat には入力する2次元データを例えば
   ```hoge.dat
   1 1 
   2 2 
   3 3 
   ```
   のように配置しておきます。
