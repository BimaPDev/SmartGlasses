/* FUN_101190b8 @ 0x101190b8 */

undefined4 FUN_101190b8(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x10) != 0) {
    if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
      FUN_101191b4();
    }
    if (param_2 == DAT_10119124) {
      param_2 = *(int *)(param_1 + 4);
    }
    else if (param_2 == DAT_10119128) {
      param_2 = *(int *)(param_1 + 8);
    }
    else if (param_2 == DAT_1011912c) {
      param_2 = *(int *)(param_1 + 0xc);
    }
    if (*(short *)(param_2 + 0xc) != 0) {
      if ((-1 < *(int *)(param_2 + 100) << 0x1f) && (-1 < (int)*(short *)(param_2 + 0xc) << 0x16)) {
        FUN_10068c60(*(undefined4 *)(param_2 + 0x58));
      }
      uVar1 = FUN_10118fb0(param_1,param_2);
      if (*(int *)(param_2 + 100) << 0x1f < 0) {
        return uVar1;
      }
      if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x16) < 0) {
        return uVar1;
      }
      FUN_10068ca0(*(undefined4 *)(param_2 + 0x58));
      return uVar1;
    }
  }
  return 0;
}

