/* FUN_2c654350 @ 0x2c654350 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c654350(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uStack_14;
  
  if ((param_2 == 0) && (param_3 != 0)) {
    uStack_14 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_LAB_2c654394);
  }
  uStack_14 = param_3 - param_2;
  if (0xf < uStack_14) {
    iVar1 = FUN_2c65e908(param_1,&uStack_14,0,uStack_14,param_1);
    *param_1 = iVar1;
    param_1[2] = uStack_14;
  }
  FUN_2c65ea38(*param_1,param_2,param_3);
  param_1[1] = uStack_14;
  *(undefined1 *)(*param_1 + uStack_14) = 0;
  return;
}

