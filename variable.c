#include<stdio.h>

int main(void)
{
  int x;
  x = 5;

  printf("x:%d\n", x);
  // x:5
  printf("x:%p\n", &x); // %p ポインタを代入 | &変数 ポインタのアドレスを表示する
  // x:0x7ffee09b7618

  // int *変数名 int型のオブジェクトのアドレスを指し示すデータ
  int *p_x; // ポインタ変数
  p_x = &x; // ポインタ変数p_xにxのアドレスを代入する

  printf("p_x:%p\n", p_x); // p_xの値を表示
  // p_x:0x7ffee09b7618
  printf("*p_x:%d\n", *p_x); // *p_xの値を表示
  // *p_x:5


  return 0;
}

