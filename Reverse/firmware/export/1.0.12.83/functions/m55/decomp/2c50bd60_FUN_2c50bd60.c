/* FUN_2c50bd60 @ 0x2c50bd60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c50bd60(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined1 uStack_1d;
  int iStack_1c;
  
  piVar2 = *(int **)(param_1 + 8);
  iStack_1c = *_LAB_2c50bdcc;
  pcVar4 = *(code **)(*piVar2 + 0x4c);
  uStack_1d = *(undefined1 *)(param_1 + 0x1c);
  piVar1 = (int *)FUN_2c50b6e8(param_1 + 0x14c,&uStack_1d);
  (*pcVar4)(piVar2,_DAT_2c50bdd0,*(undefined1 *)(*piVar1 + 4));
  puVar3 = *(undefined4 **)(param_1 + 4);
  uStack_1d = *(undefined1 *)(param_1 + 0x1c);
  pcVar4 = *(code **)*puVar3;
  piVar1 = (int *)FUN_2c50b6e8(param_1 + 0x14c,&uStack_1d);
  (*pcVar4)(puVar3,*(undefined4 *)(*piVar1 + 8));
  if (*_LAB_2c50bdcc == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

