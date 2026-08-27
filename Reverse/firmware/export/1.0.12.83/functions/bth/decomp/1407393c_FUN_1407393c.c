/* FUN_1407393c @ 0x1407393c */

undefined4 FUN_1407393c(int param_1,int param_2,uint param_3)

{
  if (param_1 == 0) {
    return 1;
  }
  if ((param_2 != 0) && (param_3 <= *(ushort *)(param_1 + 4))) {
    *(undefined1 *)(param_1 + 0x2c) = 0xa5;
    FUN_140732f8(*(ushort *)(param_1 + 6) + 0x30 + param_1);
    return 0;
  }
  return 1;
}

