/* FUN_1009b0c4 @ 0x1009b0c4 */

int * FUN_1009b0c4(int *param_1,int *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = param_3 & 1;
  FUN_1009b000(0);
  FUN_1009aa6c();
  iVar7 = uVar6 + 2;
  if ((param_3 & 2) == 0) {
    piVar4 = param_2 + 4;
    *piVar4 = *param_2;
    param_2[5] = param_2[1];
    param_2[6] = param_2[2];
    param_2[7] = param_2[3];
    iVar2 = FUN_1012a84e(param_2);
    uVar1 = DAT_1009b248;
    param_2[0xf] = param_2[0xf] & 0x80000000U | iVar2 * iVar7 & 0x7fffffffU;
    uVar3 = FUN_10094254(((iVar2 * iVar7 & 0x7fffffffU) + 0x3f & 0xffffffc0) + 0x40,uVar1);
    param_2[10] = uVar3;
    if (uVar3 == 0) {
      return (int *)0x0;
    }
    uVar5 = ((uVar3 & 0xff) + 0x3f & 0xffffffc0) - (uVar3 & 0xff);
    iVar7 = uVar3 + (uVar5 & 0xff);
    *(char *)(param_2 + 0x10) = (char)uVar5;
    param_2[10] = iVar7;
    FUN_1011ea48(iVar7,0,param_2[0xf] & 0x7fffffff);
    *(byte *)((int)param_2 + 0x3f) = *(byte *)((int)param_2 + 0x3f) & 0x7f | (byte)(uVar6 << 7);
    iVar7 = param_2[10];
    param_1[2] = (int)piVar4;
    *param_1 = iVar7;
    param_1[1] = (int)piVar4;
    piVar4 = (int *)FUN_1008bbb4();
    *(byte *)(*piVar4 + 0x1c) = *(byte *)(*piVar4 + 0x1c) & 0xbf | (byte)(uVar6 << 6);
    FUN_1009ad0c(param_1);
  }
  else {
    param_2[0xf] = param_2[0xf] & 0x80000000U | 0x6000;
    iVar2 = FUN_1012a84e(param_2);
    uVar1 = DAT_1009b248;
    if ((uint)(iVar2 * iVar7) < (param_2[0xf] & 0x7fffffffU)) {
      param_2[0xf] = param_2[0xf] & 0x80000000U | iVar2 * iVar7 & 0x7fffffffU;
    }
    iVar2 = FUN_10094254(((param_2[0xf] & 0x7fffffffU) + 0x3f & 0xffffffc0) + 0x40,uVar1);
    param_2[10] = iVar2;
    if (iVar2 == 0) {
      FUN_10094174(2,DAT_1009b250,0x3a0,DAT_1009b248,DAT_1009b24c,param_2[0xf] & 0x7fffffff,
                   iVar7 * 0xc00);
      uVar1 = DAT_1009b248;
      param_2[0xf] = param_2[0xf] & 0x80000000U | 0xc00;
      iVar7 = FUN_10094254(0xc40,uVar1);
      param_2[10] = iVar7;
      if (iVar7 == 0) {
        return (int *)0x0;
      }
    }
    uVar6 = param_2[10] & 0xff;
    uVar6 = (uVar6 + 0x3f & 0xffffffc0) - uVar6;
    *(char *)(param_2 + 0x10) = (char)uVar6;
    param_2[10] = (uVar6 & 0xff) + param_2[10];
    param_2[4] = *param_2;
    param_2[5] = param_2[1];
    param_2[6] = param_2[2];
    param_2[7] = param_2[3];
    param_2[7] = param_2[1];
    uVar6 = (int)(param_2[0xf] & 0x7fffffffU) / ((param_2[6] + 1) - *param_2);
    param_2[8] = (int)uVar6 / 3;
    param_2[9] = uVar6 >> 1;
  }
  FUN_1011e848(param_2[10],param_2[0xf] & 0x7fffffff);
  FUN_1011e8f6();
  return param_2;
}

