/* FUN_1008fb34 @ 0x1008fb34 */

int * FUN_1008fb34(int *param_1,int *param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = param_3 & 1;
  iVar5 = uVar6 + 2;
  if ((int)(param_3 << 0x1e) < 0) {
    param_2[0xf] = param_2[0xf] & 0x80000000U | 0x6000;
    piVar3 = param_2;
    iVar2 = FUN_1012a84e(param_2);
    uVar1 = DAT_1008fc44;
    uVar6 = param_2[0xf];
    uVar4 = uVar6 & 0x7fffffff;
    if ((uint)(iVar5 * iVar2) < uVar4) {
      uVar6 = uVar6 & 0x80000000 | iVar5 * iVar2 & 0x7fffffffU;
      param_2[0xf] = uVar6;
    }
    iVar2 = FUN_10094254(param_2[0xf] & 0x7fffffff,uVar1,uVar4,uVar6,param_1,piVar3,param_3,param_4)
    ;
    param_2[10] = iVar2;
    if (iVar2 == 0) {
      FUN_10094174(2,DAT_1008fc4c,0x3b,DAT_1008fc44,DAT_1008fc48,param_2[0xf] & 0x7fffffff,
                   iVar5 * 0xc00);
      uVar1 = DAT_1008fc44;
      param_2[0xf] = param_2[0xf] & 0x80000000U | 0xc00;
      iVar5 = FUN_10094254(0xc00,uVar1);
      param_2[10] = iVar5;
      if (iVar5 == 0) goto LAB_1008fbe6;
    }
    param_2[4] = *param_2;
    param_2[5] = param_2[1];
    param_2[6] = param_2[2];
    param_2[7] = param_2[3];
    param_2[7] = param_2[1];
    uVar6 = (int)(param_2[0xf] & 0x7fffffffU) / ((param_2[6] + 1) - *param_2);
    param_2[8] = (int)uVar6 / 3;
    param_2[9] = uVar6 >> 1;
  }
  else {
    piVar3 = param_2 + 4;
    *piVar3 = *param_2;
    param_2[5] = param_2[1];
    param_2[6] = param_2[2];
    param_2[7] = param_2[3];
    iVar2 = FUN_1012a84e(param_2);
    param_2[0xf] = param_2[0xf] & 0x80000000U | iVar5 * iVar2 & 0x7fffffffU;
    iVar5 = FUN_10094254(iVar5 * iVar2 & 0x7fffffff,DAT_1008fc44);
    param_2[10] = iVar5;
    FUN_10128990(iVar5,param_2[0xf] & 0x7fffffff);
    *(byte *)((int)param_2 + 0x3f) = *(byte *)((int)param_2 + 0x3f) & 0x7f | (byte)(uVar6 << 7);
    if (param_2[10] != 0) {
      *param_1 = param_2[10];
      param_1[1] = (int)piVar3;
      param_1[2] = (int)piVar3;
      piVar3 = (int *)FUN_1008bbb4();
      *(byte *)(*piVar3 + 0x1c) = *(byte *)(*piVar3 + 0x1c) & 0xbf | (byte)(uVar6 << 6);
      return param_2;
    }
LAB_1008fbe6:
    param_2 = (int *)0x0;
  }
  return param_2;
}

