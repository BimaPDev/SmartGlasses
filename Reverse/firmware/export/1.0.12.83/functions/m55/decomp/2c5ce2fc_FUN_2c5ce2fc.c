/* FUN_2c5ce2fc @ 0x2c5ce2fc */

void FUN_2c5ce2fc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = *DAT_2c5ce3ac;
  iVar1 = FUN_2c621080(param_2,param_2,param_3,0);
  if ((iVar1 != 0) && (puVar2 = (undefined1 *)FUN_2c62107c(param_2), puVar2 != (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5ce3b8,0x28a,DAT_2c5ce3b4,DAT_2c5ce3b0,*puVar2);
  }
  if (*DAT_2c5ce3ac == iVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

