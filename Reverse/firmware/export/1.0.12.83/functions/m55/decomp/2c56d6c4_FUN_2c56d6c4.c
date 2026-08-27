/* FUN_2c56d6c4 @ 0x2c56d6c4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c56d6c4(undefined4 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uStack_18;
  int iStack_14;
  
  iStack_14 = *_LAB_2c56d738;
  if ((param_3 != 0) && (param_2 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c56d73c,0,param_3,0);
  }
  uVar2 = param_3 - (int)param_2;
  uStack_18 = uVar2;
  if (uVar2 < 0x10) {
    puVar1 = (undefined1 *)*param_1;
    if (uVar2 == 1) {
      *puVar1 = *param_2;
      puVar1 = (undefined1 *)*param_1;
      goto LAB_2c56d6f2;
    }
    if (uVar2 == 0) goto LAB_2c56d6f2;
  }
  else {
    puVar1 = (undefined1 *)FUN_2c56d618(&uStack_18,0);
    *param_1 = puVar1;
    param_1[2] = uStack_18;
  }
  FUN_2c674668(puVar1,param_2,uVar2);
  puVar1 = (undefined1 *)*param_1;
LAB_2c56d6f2:
  param_1[1] = uStack_18;
  puVar1[uStack_18] = 0;
  if (*_LAB_2c56d738 != iStack_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

