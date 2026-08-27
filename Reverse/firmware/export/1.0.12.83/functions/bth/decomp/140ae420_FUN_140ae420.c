/* FUN_140ae420 @ 0x140ae420 */

void FUN_140ae420(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_2 + 4) & 0xfffffffc;
  if (uVar1 < 0x80) {
    uVar1 = 0;
    uVar2 = (int)*(uint *)(param_2 + 4) >> 2;
  }
  else {
    uVar2 = uVar1 >> (0x1aU - LZCOUNT(uVar1) & 0xff) ^ 0x20;
    uVar1 = 0x19 - LZCOUNT(uVar1);
  }
  iVar4 = param_1 + (uVar2 + uVar1 * 0x20) * 4;
  iVar3 = *(int *)(iVar4 + 0x48);
  if (iVar3 != 0) {
    *(int *)(param_2 + 8) = iVar3;
    *(int *)(param_2 + 0xc) = param_1;
    *(int *)(iVar3 + 0xc) = param_2;
    if (param_2 + 8U == (param_2 + 0xbU & 0xfffffffc)) {
      *(int *)(iVar4 + 0x48) = param_2;
      iVar3 = param_1 + uVar1 * 4;
      *(uint *)(param_1 + 0x10) = 1 << (uVar1 & 0xff) | *(uint *)(param_1 + 0x10);
      *(uint *)(iVar3 + 0x14) = 1 << (uVar2 & 0xff) | *(uint *)(iVar3 + 0x14);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140ae4a8,DAT_140ae4a4,0x284);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_140ae4a8,DAT_140ae4a4,0x27e);
}

