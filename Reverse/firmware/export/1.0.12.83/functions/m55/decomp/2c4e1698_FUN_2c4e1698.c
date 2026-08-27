/* FUN_2c4e1698 @ 0x2c4e1698 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e1698(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_20 [12];
  int iStack_14;
  
  iStack_14 = *_LAB_2c4e16e4;
  FUN_2c4e2788(auStack_20,param_1 + 0x10c,param_3,0);
  uVar1 = (**(code **)(**(int **)(param_1 + 0x104) + 0x2c))
                    (*(int **)(param_1 + 0x104),param_2,param_3);
  FUN_2c4e279e(auStack_20);
  if (*_LAB_2c4e16e4 != iStack_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return uVar1;
}

