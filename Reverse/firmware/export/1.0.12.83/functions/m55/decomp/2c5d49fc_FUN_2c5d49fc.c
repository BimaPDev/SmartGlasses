/* FUN_2c5d49fc @ 0x2c5d49fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5d49fc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = *_LAB_2c5d4c70;
  iVar3 = FUN_2c621080(param_2,param_2,param_3,0);
  if (iVar3 != 0) {
    FUN_2c5c685c();
    iVar3 = FUN_2c5c6e8c();
    if ((iVar3 == 0) && (puVar4 = (undefined1 *)FUN_2c62107c(param_2), puVar4 != (undefined1 *)0x0))
    {
      uVar1 = *puVar4;
      uVar2 = puVar4[1];
      uVar5 = func_0x2c5e9090();
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_DAT_2c5d4c7c,0x1e0,_DAT_2c5d4c78,_LAB_2c5d4c74,uVar1,uVar2,uVar5);
    }
  }
  if (*_LAB_2c5d4c70 == iVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

