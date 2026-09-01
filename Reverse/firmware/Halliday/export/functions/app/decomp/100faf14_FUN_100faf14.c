/* FUN_100faf14 @ 0x100faf14 */

undefined4 FUN_100faf14(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if ((code *)param_1[5] == (code *)0x0) {
    uVar2 = param_1[2];
    if ((uVar2 < (uint)param_1[1]) && (param_2 <= param_1[1] - uVar2)) {
      param_1[8] = *param_1 + uVar2;
      param_1[9] = param_2 + *param_1 + uVar2;
      param_1[2] = uVar2 + param_2;
      return 0;
    }
  }
  else if (param_2 <= (uint)param_1[1]) {
    if ((int)param_2 < 1) {
      if (param_2 != 0) {
        *param_1 = 0;
        return 6;
      }
      *param_1 = 0;
      uVar2 = (*(code *)param_1[5])(param_1,param_1[2],0,0,param_4);
    }
    else {
      iVar3 = param_1[7];
      iVar1 = (**(code **)(iVar3 + 4))(iVar3);
      *param_1 = iVar1;
      if (iVar1 == 0) {
        return 0x40;
      }
      uVar2 = (*(code *)param_1[5])(param_1,param_1[2],iVar1,param_2);
      if (uVar2 < param_2) {
        if (*param_1 != 0) {
          (**(code **)(iVar3 + 8))(iVar3);
        }
        *param_1 = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[2] = uVar2 + param_1[2];
        return 0x55;
      }
    }
    iVar1 = *param_1;
    param_1[8] = iVar1;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar1 + param_2;
    }
    param_1[9] = iVar1;
    param_1[2] = uVar2 + param_1[2];
    return 0;
  }
  return 0x55;
}

