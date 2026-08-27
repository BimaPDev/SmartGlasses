/* FUN_2c4f1298 @ 0x2c4f1298 */

int FUN_2c4f1298(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5,
                uint param_6,int param_7,uint param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  do {
    if (param_8 == 0) {
      return 0;
    }
    while (((*param_2 != param_5 || (uVar1 = param_2[1], param_6 < uVar1)) ||
           (uVar3 = *(int *)(*(int *)(param_1 + 0x68) + 0x28) + uVar1, uVar3 <= param_6))) {
      *param_2 = param_5;
      uVar1 = *(uint *)(*(int *)(param_1 + 0x68) + 0x18);
      param_2[2] = 0;
      param_2[1] = uVar1 * (param_6 / uVar1);
    }
    uVar3 = uVar3 - param_6;
    iVar2 = param_6 - uVar1;
    if (param_8 <= uVar3) {
      uVar3 = param_8;
    }
    param_6 = param_6 + uVar3;
    param_8 = param_8 - uVar3;
    FUN_2c674668(iVar2 + param_2[3],param_7);
    param_7 = param_7 + uVar3;
    uVar1 = param_6 - param_2[1];
    if (param_6 - param_2[1] < (uint)param_2[2]) {
      uVar1 = param_2[2];
    }
    param_2[2] = uVar1;
  } while ((*(uint *)(*(int *)(param_1 + 0x68) + 0x28) != uVar1) ||
          (iVar2 = FUN_2c4f1200(param_1,param_2,param_3,param_4), iVar2 == 0));
  return iVar2;
}

