/* FUN_2c472e28 @ 0x2c472e28 */

void FUN_2c472e28(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = *(uint *)(param_2 + 4) & 0xfffffffc;
  if (uVar2 < 0x80) {
    uVar2 = (int)*(uint *)(param_2 + 4) >> 2;
    uVar4 = 0;
  }
  else {
    uVar4 = 0x19 - LZCOUNT(uVar2);
    uVar2 = uVar2 >> (0x1aU - LZCOUNT(uVar2) & 0xff) ^ 0x20;
  }
  iVar1 = param_1 + (uVar2 + uVar4 * 0x20) * 4;
  iVar3 = *(int *)(iVar1 + 0x60);
  if (iVar3 != 0) {
    *(int *)(param_2 + 8) = iVar3;
    *(int *)(param_2 + 0xc) = param_1;
    *(int *)(iVar3 + 0xc) = param_2;
    if (param_2 + 8U == (param_2 + 0xbU & 0xfffffffc)) {
      *(int *)(iVar1 + 0x60) = param_2;
      iVar1 = param_1 + uVar4 * 4;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1 << (uVar4 & 0xff);
      *(uint *)(iVar1 + 0x14) = 1 << (uVar2 & 0xff) | *(uint *)(iVar1 + 0x14);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c472eac,DAT_2c472ea8,0x284);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(DAT_2c472eac,DAT_2c472ea8,0x27e);
}

