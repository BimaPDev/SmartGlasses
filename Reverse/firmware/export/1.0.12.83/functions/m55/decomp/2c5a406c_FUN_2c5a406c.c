/* FUN_2c5a406c @ 0x2c5a406c */

void FUN_2c5a406c(undefined4 param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = registry_lookup(0x5004);
  iVar2 = FUN_2c66b624(param_2,uVar1);
  if (iVar2 != 0) {
    uVar1 = registry_lookup(0x5005);
    iVar2 = FUN_2c66b624(param_2,uVar1);
    if ((iVar2 != 0) && (*param_2 != '\0')) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5a40dc,0x7b0,DAT_2c5a40d8,DAT_2c5a40d4);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5a40dc,0x7ac,DAT_2c5a40d8,DAT_2c5a40e0);
}

