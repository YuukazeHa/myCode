int gcd(int x, int y) // 辗转相除
{
  int z;
  while (x % y != 0)
  {
    z = x % y;
    x = y;
    y = z;
  }
  return z;
}
// 求最大公因数函数
