/* FUN_2c6581d0 @ 0x2c6581d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c6581d0(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iStack_14;
  
  if ((param_2 == 0) && (param_3 != 0)) {
    iStack_14 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_LAB_2c658214);
  }
  uVar2 = param_3 - param_2;
  iStack_14 = (int)uVar2 >> 2;
  if (0xc < uVar2) {
    uVar1 = FUN_2c66485c(param_1,&iStack_14,0,uVar2,param_1);
    *param_1 = uVar1;
    param_1[2] = iStack_14;
  }
  FUN_2c664992(*param_1,param_2,param_3);
  FUN_2c664850(param_1,iStack_14);
  return;
}

