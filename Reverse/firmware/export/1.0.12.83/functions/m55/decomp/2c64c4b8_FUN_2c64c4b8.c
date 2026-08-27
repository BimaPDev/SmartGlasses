/* FUN_2c64c4b8 @ 0x2c64c4b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c64c4b8(undefined4 param_1,int param_2,uint param_3)

{
  undefined4 uStack_18;
  int iStack_14;
  
  iStack_14 = *_LAB_2c64c518;
  if ((param_2 == 0) && ((param_3 & 0x780) == 0)) {
    FUN_2c648600(_LAB_2c64c51c,param_1,param_3,0);
    uStack_18 = 0x6c0;
    FUN_2c4bb66c(1,_DAT_2c64c520,0x100,0,0,&uStack_18);
    FUN_2c4bb780(1,_DAT_2c64c520,param_1,0,0);
  }
  if (*_LAB_2c64c518 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

