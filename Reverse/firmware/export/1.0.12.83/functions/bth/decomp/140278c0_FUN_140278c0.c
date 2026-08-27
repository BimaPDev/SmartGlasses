/* FUN_140278c0 @ 0x140278c0 */

uint FUN_140278c0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  
  iVar1 = DAT_14027954;
  iVar2 = (uint)*(byte *)(DAT_14027950 + 0xb) << 0x1e;
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14027958,0,iVar2,DAT_14027950,param_4);
  }
  uVar4 = (*(ushort *)(DAT_14027950 + 2) & 0x1f) + 1;
  if (uVar4 < 9) {
    iVar2 = 1;
  }
  else if (uVar4 < 0x11) {
    iVar2 = 2;
  }
  else {
    iVar2 = 4;
  }
  if ((param_2 != 0) && ((iVar2 - 1U & param_2) == 0)) {
    uVar5 = 0;
    while ((uVar5 < param_2 && (*(int *)(iVar1 + 4) << 0x1e < 0))) {
      if (*(int *)(iVar1 + 0xc) << 0x1e < 0) {
        if (iVar2 == 1) {
          uVar3 = (uint)*(byte *)(param_1 + uVar5);
        }
        else if (iVar2 == 2) {
          uVar3 = (uint)(ushort)*(uint *)(param_1 + uVar5);
        }
        else {
          uVar3 = *(uint *)(param_1 + uVar5);
        }
        *(uint *)(iVar1 + 8) = uVar3;
        uVar5 = uVar5 + iVar2;
      }
    }
    do {
      if (-1 < *(int *)(DAT_14027954 + 4) << 0x1e) {
        return (uint)(uVar5 < param_2);
      }
    } while (*(int *)(DAT_14027954 + 0xc) << 0x1b < 0);
    return (uint)(uVar5 < param_2);
  }
  return 0xffffffff;
}

