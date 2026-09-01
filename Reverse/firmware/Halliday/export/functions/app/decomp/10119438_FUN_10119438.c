/* FUN_10119438 @ 0x10119438 */

int FUN_10119438(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_2 + 0x10);
  iVar3 = 0;
  puVar1 = (uint *)(param_2 + 0x14);
  do {
    iVar3 = iVar3 + 1;
    uVar2 = param_3 * (*puVar1 & 0xffff) + param_4;
    uVar4 = param_3 * (*puVar1 >> 0x10) + (uVar2 >> 0x10);
    param_4 = uVar4 >> 0x10;
    *puVar1 = (uVar2 & 0xffff) + uVar4 * 0x10000;
    puVar1 = puVar1 + 1;
  } while (iVar3 < iVar5);
  iVar3 = param_2;
  if (param_4 != 0) {
    if (*(int *)(param_2 + 8) <= iVar5) {
      iVar3 = FUN_10119374(param_1,*(int *)(param_2 + 4) + 1);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_10117c88(DAT_101194c8,0xb5,0,DAT_101194c4);
      }
      FUN_1011ea40(iVar3 + 0xc,param_2 + 0xc,(*(int *)(param_2 + 0x10) + 2) * 4);
      FUN_101193f4(param_1,param_2);
    }
    *(uint *)(iVar3 + iVar5 * 4 + 0x14) = param_4;
    *(int *)(iVar3 + 0x10) = iVar5 + 1;
  }
  return iVar3;
}

