/* FUN_100fb280 @ 0x100fb280 */

int FUN_100fb280(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((param_3 < 0) || (param_4 < 0)) || (param_2 < 0)) {
    uVar2 = 6;
  }
  else {
    if ((param_4 == 0) || (param_2 == 0)) {
      iVar1 = 0;
      if (param_5 != 0) {
        (**(code **)(param_1 + 8))(param_1,param_5);
        *param_6 = 0;
        return 0;
      }
LAB_100fb318:
      *param_6 = 0;
      return iVar1;
    }
    if (0x7fffffff / param_2 < param_4) {
      uVar2 = 10;
    }
    else if (param_3 == 0) {
      iVar1 = (**(code **)(param_1 + 4))(param_1,param_4 * param_2);
      if (iVar1 != 0) {
        iVar3 = 0;
LAB_100fb2e0:
        FUN_1011ea48(iVar1 + iVar3,0,param_2 * (param_4 - param_3));
        *param_6 = 0;
        return iVar1;
      }
      uVar2 = 0x40;
      param_5 = 0;
    }
    else {
      iVar3 = param_3 * param_2;
      iVar1 = (**(code **)(param_1 + 0xc))(param_1,iVar3,param_4 * param_2,param_5,param_4);
      if (iVar1 != 0) {
        if (param_4 <= param_3) goto LAB_100fb318;
        goto LAB_100fb2e0;
      }
      uVar2 = 0x40;
    }
  }
  *param_6 = uVar2;
  return param_5;
}

