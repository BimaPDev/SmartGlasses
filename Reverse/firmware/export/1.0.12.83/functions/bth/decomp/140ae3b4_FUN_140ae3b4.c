/* FUN_140ae3b4 @ 0x140ae3b4 */

void FUN_140ae3b4(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_2 + 8);
  iVar3 = *(int *)(param_2 + 0xc);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140ae41c,DAT_140ae418,0x262,param_4,param_4);
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0xc) = iVar3;
    iVar4 = param_1 + (param_4 + param_3 * 0x20) * 4;
    *(int *)(iVar3 + 8) = iVar2;
    if (((*(int *)(iVar4 + 0x48) == param_2) && (*(int *)(iVar4 + 0x48) = iVar2, param_1 == iVar2))
       && (iVar2 = param_1 + param_3 * 4, uVar1 = *(uint *)(iVar2 + 0x14) & ~(1 << (param_4 & 0xff))
          , *(uint *)(iVar2 + 0x14) = uVar1, uVar1 == 0)) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & ~(1 << (param_3 & 0xff));
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_140ae41c,DAT_140ae418,0x263,param_4,param_4);
}

