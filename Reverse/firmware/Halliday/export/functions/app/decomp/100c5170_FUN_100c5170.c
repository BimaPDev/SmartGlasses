/* FUN_100c5170 @ 0x100c5170 */

bool FUN_100c5170(byte *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_18;
  uint uStack_14;
  undefined4 uStack_10;
  
  iVar1 = DAT_100c51f4;
  if ((-1 < *(int *)(param_1 + 4) << 0x15) &&
     (((*(int *)(param_1 + 0x10) == 0 || (*(int *)(param_1 + 4) << 0x1f < 0)) &&
      ((uint)*param_1 < (uint)*(byte *)(DAT_100c51f4 + 0xe))))) {
    local_18 = 0;
    uStack_14 = param_2 & 0xff000000;
    uStack_10 = param_3;
    iVar2 = FUN_10132eb0((uint)*param_1 * 7 + DAT_100c51f4,&local_18);
    if ((iVar2 != 0) &&
       ((((uVar3 = *(uint *)(param_1 + 4), (int)(uVar3 << 0x1f) < 0 || (8 < *(byte *)(iVar1 + 0x3c))
          ) || (0x9f < *(uint *)(param_1 + 8))) &&
        (((uVar3 & 0x30) == 0 || (*(int *)(param_1 + 0x10) != 0)))))) {
      if (((int)(uVar3 << 0x1b) < 0) || (*(int *)(param_1 + 0x10) == 0)) {
        if (*(uint *)(param_1 + 0xc) < *(uint *)(param_1 + 8)) {
          return false;
        }
        if (*(uint *)(param_1 + 8) < 0x20) {
          return false;
        }
        if (0x4000 < *(uint *)(param_1 + 0xc)) {
          return false;
        }
      }
      return (uVar3 & 0x38000) != 0x38000;
    }
  }
  return false;
}

