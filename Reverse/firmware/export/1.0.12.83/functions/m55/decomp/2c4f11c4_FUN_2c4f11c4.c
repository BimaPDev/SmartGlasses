/* FUN_2c4f11c4 @ 0x2c4f11c4 */

int FUN_2c4f11c4(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  
  param_2 = param_2 & 0x3ff;
  uVar2 = param_1[2];
  if (param_2 <= (uint)param_1[2]) {
    uVar2 = param_2;
  }
  iVar1 = FUN_2c4f1120(*param_1,*param_1,uVar2,*param_3,param_3[1],param_1[1],uVar2);
  if ((iVar1 == 0) && (param_1[2] != param_2)) {
    if ((uint)param_1[2] < param_2) {
      iVar1 = 1;
    }
    else {
      iVar1 = 2;
    }
  }
  return iVar1;
}

