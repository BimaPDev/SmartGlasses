/* FUN_2c654a10 @ 0x2c654a10 */

void FUN_2c654a10(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int local_14;
  
  if ((param_2 == 0) && (param_3 != 0)) {
    local_14 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c654a54);
  }
  uVar2 = param_3 - param_2;
  local_14 = (int)uVar2 >> 2;
  if (0xc < uVar2) {
    uVar1 = FUN_2c66485c(param_1,&local_14,0,uVar2,param_1);
    *param_1 = uVar1;
    param_1[2] = local_14;
  }
  FUN_2c664992(*param_1,param_2,param_3);
  FUN_2c664850(param_1,local_14);
  return;
}

