/* FUN_1012e3ce @ 0x1012e3ce */

undefined4 FUN_1012e3ce(int *param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      puVar4 = (undefined4 *)*param_1;
      iVar1 = param_1[1];
      if ((int)param_2 < 0) {
        uVar3 = param_2 + param_1[2];
        if ((int)uVar3 < 0) {
          iVar1 = (uVar3 & 0x1ff) + (iVar1 - param_2);
          if ((0 < iVar1) &&
             (iVar1 = (*(code *)puVar4[2])(puVar4,-iVar1,1,(code *)puVar4[2],param_4), iVar1 != 0))
          {
            return 0xffffff93;
          }
          iVar1 = (*(code *)*puVar4)(param_1 + 5,1,0x200,puVar4);
          if (iVar1 < 0) {
            return 0xffffff91;
          }
          uVar3 = param_1[2] + param_2 & 0x1ff;
          param_1[2] = uVar3;
          param_1[1] = iVar1 - uVar3;
        }
        else {
          param_1[1] = iVar1 - param_2;
          param_1[2] = uVar3;
        }
      }
      else {
        if ((int)param_2 < iVar1) {
          param_1[1] = iVar1 - param_2;
          uVar3 = param_1[2] + param_2;
        }
        else {
          uVar3 = param_2 - iVar1 & 0xfffffe00;
          if ((uVar3 != 0) && (iVar1 = (*(code *)puVar4[2])(puVar4,uVar3,1), iVar1 != 0)) {
            return 0xffffff97;
          }
          iVar1 = (*(code *)*puVar4)(param_1 + 5,1,0x200,puVar4);
          if (iVar1 < 0) {
            return 0xffffff95;
          }
          uVar3 = param_2 - param_1[1] & 0x1ff;
          if (iVar1 < (int)uVar3) {
            return 0xffffff94;
          }
          param_1[1] = iVar1 - uVar3;
        }
        param_1[2] = uVar3;
      }
      param_1[3] = param_1[3] + param_2;
      return 0;
    }
    if (param_3 != 2) {
      return 0xffffff8d;
    }
    param_2 = param_1[4];
  }
  puVar4 = (undefined4 *)*param_1;
  iVar1 = (*(code *)puVar4[2])(puVar4,param_2 & 0xfffffe00,0,(code *)puVar4[2],param_4);
  if (iVar1 == 0) {
    iVar1 = (*(code *)*puVar4)(param_1 + 5,1,0x200,puVar4);
    if (iVar1 < 0) {
      uVar2 = 0xffffff8e;
    }
    else if (iVar1 == 0) {
      param_1[3] = param_2 & 0xfffffe00;
      uVar2 = 0;
    }
    else {
      param_1[3] = param_2;
      param_1[1] = iVar1 - (param_2 & 0x1ff);
      param_1[2] = param_2 & 0x1ff;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffff90;
  }
  return uVar2;
}

