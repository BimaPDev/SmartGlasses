/* FUN_10135786 @ 0x10135786 */

undefined4 FUN_10135786(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int *extraout_r3;
  
  uVar3 = (uint)*(byte *)(*param_1 + 10);
  if (uVar3 != 3) {
    if (uVar3 < 4) {
      if (uVar3 - 1 < 2) {
        return 0;
      }
      return 8;
    }
    if (uVar3 != 4) {
      return 8;
    }
    bVar2 = *(byte *)(param_1 + 0x39);
    if (*(byte *)((int)param_1 + 0xdd) <= *(byte *)(param_1 + 0x39)) {
      bVar2 = *(byte *)((int)param_1 + 0xdd);
    }
    if (bVar2 != 0x10) {
      return 6;
    }
    iVar1 = FUN_1013577a(param_1 + 0x35,5,0x10,param_1,param_4);
    param_1 = extraout_r3;
    if (iVar1 == 0) {
      return 3;
    }
  }
  if ((char)param_1[0x36] == '\0') {
    return 3;
  }
  return 0;
}

