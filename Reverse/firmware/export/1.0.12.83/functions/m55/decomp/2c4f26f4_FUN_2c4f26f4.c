/* FUN_2c4f26f4 @ 0x2c4f26f4 */

int FUN_2c4f26f4(int param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = FUN_2c4f25f0(param_1,param_2 + 1);
  if ((iVar1 == 0) && (iVar1 = FUN_2c4f25f0(param_1,param_2), iVar1 == 0)) {
    param_2[2] = 0;
    iVar4 = *(int *)(param_1 + 0x68);
    if ((*param_2 < *(uint *)(iVar4 + 0x20)) && (3 < *(uint *)(iVar4 + 0x1c))) {
      iVar4 = FUN_2c4f0eb4(param_1,0,param_1,4,*param_2,0,param_2 + 2,4);
      if ((iVar4 != 0) && (iVar4 != -0x54)) {
        return iVar4;
      }
      uVar2 = param_2[2];
      iVar4 = *(int *)(param_1 + 0x68);
    }
    else {
      uVar2 = 0;
    }
    if (0 < *(int *)(iVar4 + 0x24)) {
      uVar3 = *(int *)(iVar4 + 0x24) + 1U | 1;
      param_2[2] = uVar3 * (((uVar2 - 1) + uVar3) / uVar3);
    }
    param_2[7] = 0xffffffff;
    param_2[3] = 4;
    param_2[4] = 0xffffffff;
    param_2[5] = 0;
    param_2[6] = 0xffffffff;
  }
  return iVar1;
}

