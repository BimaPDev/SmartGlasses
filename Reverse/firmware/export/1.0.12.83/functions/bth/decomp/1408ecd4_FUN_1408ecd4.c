/* FUN_1408ecd4 @ 0x1408ecd4 */

void FUN_1408ecd4(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_1408ac24(param_1,0,0x40,DAT_1408ed64);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x40,DAT_1408ed6c);
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
    iVar3 = FUN_140759b8(0xa8);
    *(int *)(iVar1 + 0xc) = iVar3;
    if (iVar3 == 0) {
      uVar2 = FUN_1408ad70(iVar1);
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x41,DAT_1408ed70,uVar2);
    }
    FUN_140e5658(iVar3,0,0xa8);
    *(int *)(iVar3 + 0x80) = iVar3 + 0x80;
    *(int *)(iVar3 + 0x84) = iVar3 + 0x80;
    **(int **)(iVar1 + 0xc) = iVar1;
    *(undefined1 *)(*(int *)(iVar1 + 0xc) + 0xb) = 0;
    iVar3 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar3 + 4) = *param_1;
    *(undefined2 *)(iVar3 + 8) = *(undefined2 *)(param_1 + 1);
  }
  uVar2 = FUN_1408ad70(iVar1);
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x43,DAT_1408ed68,uVar2,*(int *)(iVar1 + 0xc),
               *(undefined1 *)(*(int *)(iVar1 + 0xc) + 10));
}

