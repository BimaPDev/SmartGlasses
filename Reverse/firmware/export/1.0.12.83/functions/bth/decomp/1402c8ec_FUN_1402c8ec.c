/* FUN_1402c8ec @ 0x1402c8ec */

undefined4 FUN_1402c8ec(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = DAT_1402c94c;
  if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_1402c950,param_1,param_3,param_4,param_4);
  }
  if (((0x46 < *(byte *)(DAT_1402c94c + param_1 * 0xc + 6)) || (iVar1 = FUN_1402db00(), iVar1 == 1))
     && (iVar3 = *(int *)(iVar3 + param_1 * 0xc), *(int *)(iVar3 + 0x30) << 0x1f < 0)) {
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

