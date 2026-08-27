/* FUN_2c5eb89c @ 0x2c5eb89c */

void FUN_2c5eb89c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_2c5eb720(param_1,0,param_2,param_3,param_4,1,param_5);
  uVar2 = DAT_2c5eb918;
  uVar3 = DAT_2c5eb90c;
  if (-1 < iVar1) {
    FUN_2c602454(param_2,param_4,0x2d,param_5);
    uVar2 = registry_lookup(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5eb914,0xc4,DAT_2c5eb910,uVar3,uVar2,param_2);
  }
  uVar3 = registry_lookup(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5eb914,0xbf,DAT_2c5eb910,uVar2,uVar3,param_2);
}

