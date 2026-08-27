/* FUN_2c50cf00 @ 0x2c50cf00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c50cf00(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((*(int *)(iVar2 + 0x48) != 0) &&
     (iVar1 = FUN_2c606b94(*(undefined4 *)(iVar2 + 0x4c),1), iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x19c,_DAT_2c50cf88,_LAB_2c50cf84,_DAT_2c50cf80);
  }
  FUN_2c5eba54(*(undefined4 *)(iVar2 + 0x24),_LAB_2c50cf78);
  FUN_2c50cd4c(iVar2);
  FUN_2c50cda8(iVar2);
  FUN_2c5eb89c(_LAB_2c50cf7c,*(undefined4 *)(iVar2 + 0x24),0,_LAB_2c50cf78,iVar2);
  return;
}

