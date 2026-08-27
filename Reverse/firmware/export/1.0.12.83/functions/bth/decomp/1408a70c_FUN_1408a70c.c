/* FUN_1408a70c @ 0x1408a70c */

void FUN_1408a70c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + param_2 * 4;
  iVar2 = *(int *)(iVar1 + 0x48);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar1 + 0x48) = 0;
    iVar1 = *(int *)(iVar2 + 4);
    if (((param_3 != 0) && (iVar1 != 0)) && (*(code **)(iVar2 + 8) != (code *)0x0)) {
      (**(code **)(iVar2 + 8))();
      iVar1 = *(int *)(iVar2 + 4);
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x44,DAT_1408a75c,*(undefined1 *)(param_1 + 0x11),param_1,param_2,iVar1);
  }
  return;
}

