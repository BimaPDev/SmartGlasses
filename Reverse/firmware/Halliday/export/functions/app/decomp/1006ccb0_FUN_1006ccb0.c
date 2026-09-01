/* FUN_1006ccb0 @ 0x1006ccb0 */

int FUN_1006ccb0(undefined4 *param_1,byte *param_2)

{
  uint uVar1;
  undefined4 local_130 [3];
  byte local_124;
  undefined1 auStack_116 [266];
  
  uVar1 = FUN_10123ad0(*param_1,local_130);
  if (uVar1 == 0) {
    FUN_1011e9f0(param_2 + 1,auStack_116);
    if (param_2[1] != 0) {
      *param_2 = (byte)(((uint)local_124 << 0x1b) >> 0x1f);
      *(undefined4 *)(param_2 + 0x104) = local_130[0];
    }
  }
  else if (0x13 < uVar1) {
    return -5;
  }
  return (int)*(char *)(DAT_1006ccf4 + uVar1);
}

