/* FUN_2c6609d4 @ 0x2c6609d4 */

void FUN_2c6609d4(int param_1,undefined4 param_2,int *param_3,int *param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  param_5 = param_5 - param_6;
  uVar2 = *(uint *)(param_1 + 0xc) & 0xb0;
  if (uVar2 == 0x20) {
    if (param_6 != 0) {
      FUN_2c66ed1c(param_3,param_4,param_6);
    }
    FUN_2c65f5f0(param_3 + param_6,param_5,param_2);
    return;
  }
  if (uVar2 == 0x10) {
    uVar1 = FUN_2c65faf0(param_1 + 0x6c);
    iVar4 = FUN_2c656bd2(uVar1,0x2d);
    if ((iVar4 == *param_4) || (iVar4 = FUN_2c656bd2(uVar1,0x2b), iVar4 == *param_4)) {
      iVar4 = 1;
      piVar3 = param_3 + 1;
      *param_3 = *param_4;
      goto LAB_2c660a12;
    }
    iVar4 = FUN_2c656bd2(uVar1,0x30);
    if (((iVar4 == *param_4) && (1 < param_6)) &&
       ((iVar4 = FUN_2c656bd2(uVar1,0x78), iVar4 == param_4[1] ||
        (iVar4 = FUN_2c656bd2(uVar1,0x58), iVar4 == param_4[1])))) {
      piVar3 = param_3 + 2;
      iVar4 = 2;
      *param_3 = *param_4;
      param_3[1] = param_4[1];
      goto LAB_2c660a12;
    }
  }
  iVar4 = 0;
  piVar3 = param_3;
LAB_2c660a12:
  FUN_2c65f5f0(piVar3,param_5,param_2);
  if (param_6 - iVar4 == 0) {
    return;
  }
  FUN_2c66ed1c(piVar3 + param_5,param_4 + iVar4,param_6 - iVar4,param_4);
  return;
}

