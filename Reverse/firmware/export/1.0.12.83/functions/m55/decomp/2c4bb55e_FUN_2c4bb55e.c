/* FUN_2c4bb55e @ 0x2c4bb55e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4bb55e(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool in_ZR;
  bool in_CY;
  
  iVar3 = _LAB_2c4bb5bc;
  if (in_CY && !in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4bb5c0,param_1,param_3,param_4,param_4);
  }
  if (((0x92 < *(byte *)(_LAB_2c4bb5bc + param_1 * 0xc + 6)) ||
      (iVar1 = func_0x2c6744f8(), iVar1 == 1)) &&
     (iVar3 = *(int *)(iVar3 + param_1 * 0xc), *(int *)(iVar3 + 0x30) << 0x1f < 0)) {
    if ((param_2 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x100;
    }
    if ((int)(param_2 << 0x1e) < 0) {
      uVar2 = uVar2 | 0x200;
    }
    *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) | uVar2;
    return 0;
  }
  return 1;
}

