/* FUN_14082488 @ 0x14082488 */

void FUN_14082488(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  
  uVar2 = FUN_140862b4(*(int *)(param_1 + 8) + 6);
  uVar1 = DAT_1408252c;
  if (*(char *)(param_1 + 0x3b) != '\0') {
    iVar4 = FUN_14074d5c(param_1 + 0xc);
    if (iVar4 != 0) {
      if (*(char *)((int)*(undefined4 **)(param_1 + 8) + 5) == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x40,DAT_14082524);
      }
      iVar3 = FUN_1408e540(**(undefined4 **)(param_1 + 8),iVar4);
      if (iVar3 != 1) {
        cVar5 = *(char *)(param_1 + 0x3b) + -1;
        *(char *)(param_1 + 0x3b) = cVar5;
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x45,uVar1,uVar2,*(undefined1 *)(param_1 + 0x30),
                     *(undefined2 *)(param_1 + 0x1e),cVar5,*(undefined2 *)(iVar4 + 8));
      }
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x41,DAT_14082528,uVar2);
    }
  }
  return;
}

