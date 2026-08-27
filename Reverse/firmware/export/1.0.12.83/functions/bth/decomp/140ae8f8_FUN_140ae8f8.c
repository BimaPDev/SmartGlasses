/* FUN_140ae8f8 @ 0x140ae8f8 */

uint FUN_140ae8f8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar6 = param_2 + -8;
  uVar5 = *(uint *)(param_2 + -4) & 0xfffffffc;
  if ((*(uint *)(param_2 + -4) & 1) == 0) {
    iVar2 = param_2 + -4 + uVar5;
    if (uVar5 != 0) {
      *(int *)(param_2 + -4 + uVar5) = iVar6;
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 2;
      uVar3 = *(uint *)(param_2 + -4) | 1;
      *(uint *)(param_2 + -4) = uVar3;
      if (-1 < (int)(uVar3 << 0x1e)) {
LAB_140ae936:
        uVar1 = FUN_140ae6f4(param_1,iVar6);
        FUN_140ae420(param_1,uVar1);
        return uVar5;
      }
      iVar6 = *(int *)(param_2 + -8);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_140ae9e0,DAT_140ae9e4,0x2ca,uVar3,param_4);
      }
      uVar3 = *(uint *)(iVar6 + 4);
      if (-1 < (int)(uVar3 << 0x1f)) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_140ae9e0,DAT_140ae9e4,0x2cb,uVar3,param_4);
      }
      uVar4 = uVar3 & 0xfffffffc;
      if (uVar4 < 0x80) {
        uVar3 = (int)uVar3 >> 2;
        iVar2 = 0;
      }
      else {
        uVar3 = uVar4 >> (0x1aU - LZCOUNT(uVar4) & 0xff) ^ 0x20;
        iVar2 = 0x19 - LZCOUNT(uVar4);
      }
      FUN_140ae3b4(param_1,iVar6,iVar2,uVar3);
      if ((*(uint *)(iVar6 + 4) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_140ae9e0,DAT_140ae9e8,0x2bd);
      }
      uVar3 = (*(uint *)(param_2 + -4) & 0xfffffffc) + *(uint *)(iVar6 + 4) + 4;
      *(uint *)(iVar6 + 4) = uVar3;
      uVar3 = uVar3 & 0xfffffffc;
      if (uVar3 != 0) {
        *(int *)(iVar6 + 4 + uVar3) = iVar6;
        goto LAB_140ae936;
      }
    }
    FUN_140ae4dc();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_140ae9e0,DAT_140ae9dc,0x503);
}

