/* FUN_10132e84 @ 0x10132e84 */

void FUN_10132e84(int param_1,uint param_2,int param_3)

{
  if (param_3 != 0) {
    FUN_10132e3c();
    return;
  }
  FUN_10132e56(param_1 + (param_2 >> 5) * 4,~(1 << (param_2 & 0x1f)));
  return;
}

