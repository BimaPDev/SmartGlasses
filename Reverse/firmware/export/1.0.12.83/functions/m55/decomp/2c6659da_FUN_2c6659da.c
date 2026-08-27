/* FUN_2c6659da @ 0x2c6659da */

int FUN_2c6659da(undefined4 param_1,undefined4 *param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar2 = 0;
  uStack_28 = *param_2;
  uStack_24 = param_2[1];
  while (((param_3 < param_4 && (param_5 != 0)) &&
         (uVar1 = func_0x2c6695cc(0,param_3,param_4 - param_3,&uStack_28), uVar1 < 0xfffffffe))) {
    param_5 = param_5 + -1;
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    param_3 = param_3 + uVar1;
    iVar2 = iVar2 + uVar1;
    *param_2 = uStack_28;
    param_2[1] = uStack_24;
  }
  return iVar2;
}

