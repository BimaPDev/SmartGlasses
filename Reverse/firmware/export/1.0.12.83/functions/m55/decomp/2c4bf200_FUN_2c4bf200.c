/* FUN_2c4bf200 @ 0x2c4bf200 */

uint FUN_2c4bf200(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (0x1f < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4bf250);
  }
  uVar4 = param_1 & 0xf;
  if (-1 < (int)(param_1 << 0x1c)) {
    iVar3 = *(int *)(DAT_2c4bf24c + (param_1 >> 4) * 4) + uVar4 * 0x20;
    iVar2 = *(int *)(iVar3 + 0x108);
    uVar4 = *(uint *)(iVar3 + 0x10c) & 0xfff;
    iVar3 = iVar2;
    do {
      if (iVar3 == 0) {
        return uVar4;
      }
      piVar1 = (int *)(iVar3 + 8);
      uVar4 = uVar4 + (*(uint *)(iVar3 + 0xc) & 0xfff);
      iVar3 = *piVar1;
    } while (iVar2 != *piVar1);
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(DAT_2c4bf254,param_1 >> 4,uVar4,uVar4,param_4);
}

