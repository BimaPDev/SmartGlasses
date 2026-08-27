/* FUN_2c13c770 @ 0x2c13c770 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c13c770(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uStack_18;
  int iStack_14;
  
  iStack_14 = *_DAT_2c13c7e4;
  uStack_18 = 0;
  func_0x2c13ad14(4,_DAT_2c13c7e8,0);
  uVar1 = FUN_2c13c41c(0x104,param_2);
  uStack_18 = 10;
  uVar2 = FUN_2c13c41c(0x100);
  if ((uVar1 | uVar2) != 0) {
    FUN_2c135988(4,0x322,_DAT_2c13c7f8,_DAT_2c13c7f4,_DAT_2c13c7f0,_DAT_2c13c7ec,uVar1 | uVar2);
  }
  FUN_2c13bc94(0x100,&uStack_18);
  if (*_DAT_2c13c7e4 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c();
}

