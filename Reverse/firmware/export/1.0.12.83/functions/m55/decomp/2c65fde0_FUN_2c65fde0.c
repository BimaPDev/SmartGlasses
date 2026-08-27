/* FUN_2c65fde0 @ 0x2c65fde0 */

void FUN_2c65fde0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6,int param_7,int *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_5 == 0) {
    iVar3 = *param_8;
  }
  else {
    iVar3 = param_5 - param_7 >> 2;
  }
  iVar1 = FUN_2c65fd48(param_6,param_4,param_2,param_3,param_7,param_7 + iVar3 * 4,param_3);
  iVar2 = iVar1 - param_6 >> 2;
  if (param_5 != 0) {
    if (*param_8 != iVar3) {
      FUN_2c66ed1c(iVar1,param_5);
    }
    iVar2 = iVar2 + (*param_8 - iVar3);
  }
  *param_8 = iVar2;
  return;
}

