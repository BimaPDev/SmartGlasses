/* FUN_14028a70 @ 0x14028a70 */

uint FUN_14028a70(uint param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 >> 4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14028ab4);
  }
  if (-1 < (int)(param_1 << 0x1c)) {
    iVar4 = (param_1 & 0xf) * 0x20;
    iVar3 = *(int *)(iVar4 + 0x40130108);
    uVar2 = *(uint *)(iVar4 + 0x4013010c) & 0xfff;
    iVar4 = iVar3;
    do {
      if (iVar4 == 0) {
        return uVar2;
      }
      piVar1 = (int *)(iVar4 + 8);
      uVar2 = uVar2 + (*(uint *)(iVar4 + 0xc) & 0xfff);
      iVar4 = *piVar1;
    } while (iVar3 != *piVar1);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_14028ab8);
}

