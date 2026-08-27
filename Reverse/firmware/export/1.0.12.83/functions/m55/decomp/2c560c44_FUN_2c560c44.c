/* FUN_2c560c44 @ 0x2c560c44 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c560c44(int *param_1,undefined1 *param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  uint uStack_20;
  int iStack_1c;
  
  piVar2 = param_1 + 2;
  iStack_1c = *_LAB_2c560cbc;
  *param_1 = (int)piVar2;
  if (param_2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c560cc0,0,param_3,0);
  }
  uVar1 = FUN_2c66c4ec(param_2);
  uStack_20 = uVar1;
  if (uVar1 < 0x10) {
    if (uVar1 == 1) {
      *(undefined1 *)(param_1 + 2) = *param_2;
      goto LAB_2c560c74;
    }
    if (uVar1 == 0) goto LAB_2c560c74;
  }
  else {
    piVar2 = (int *)FUN_2c560bac(&uStack_20,0);
    *param_1 = (int)piVar2;
    param_1[2] = uStack_20;
  }
  FUN_2c674668(piVar2,param_2,uVar1);
LAB_2c560c74:
  param_1[1] = uStack_20;
  *(undefined1 *)(*param_1 + uStack_20) = 0;
  if (*_LAB_2c560cbc != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

