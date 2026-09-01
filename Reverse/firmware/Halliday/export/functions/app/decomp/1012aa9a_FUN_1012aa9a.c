/* FUN_1012aa9a @ 0x1012aa9a */

uint FUN_1012aa9a(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar8 = FUN_1012a9f8(param_2,param_3);
  if ((int)uVar8 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_1012aa22(param_2,(int)((ulonglong)uVar8 >> 0x20),0);
    if (iVar1 == 0) {
      iVar7 = param_2[1];
      iVar4 = param_3[1];
      iVar5 = param_2[2];
      iVar1 = *param_2;
      iVar6 = iVar4 - iVar7;
      iVar3 = param_2[3];
      if (0 < iVar6) {
        *param_1 = iVar1;
        param_1[1] = iVar7;
        param_1[2] = iVar5;
        param_1[3] = iVar4;
      }
      iVar4 = param_3[3];
      iVar7 = ((iVar3 + param_2[1]) - iVar4) - iVar7;
      uVar2 = (uint)(0 < iVar6);
      if ((0 < iVar7) && (iVar4 < param_2[3])) {
        iVar3 = param_2[2];
        param_1[uVar2 * 4] = *param_2;
        param_1[uVar2 * 4 + 1] = iVar4;
        param_1[uVar2 * 4 + 2] = iVar3;
        param_1[uVar2 * 4 + 3] = iVar7 + iVar4;
        uVar2 = (uint)(char)((0 < iVar6) + '\x01');
      }
      iVar3 = param_2[1];
      if (param_2[1] < param_3[1]) {
        iVar3 = param_3[1];
      }
      iVar7 = param_3[3];
      if (param_2[3] <= param_3[3]) {
        iVar7 = param_2[3];
      }
      iVar4 = *param_3;
      if ((0 < iVar4 - *param_2) && (0 < iVar7 - iVar3)) {
        param_1[uVar2 * 4] = *param_2;
        param_1[uVar2 * 4 + 1] = iVar3;
        param_1[uVar2 * 4 + 2] = iVar4;
        param_1[uVar2 * 4 + 3] = iVar7;
        uVar2 = (uint)(char)((char)uVar2 + '\x01');
      }
      iVar4 = param_3[2];
      iVar1 = ((iVar5 + *param_2) - iVar4) - iVar1;
      if (0 < iVar1) {
        param_1[uVar2 * 4] = iVar4;
        param_1[uVar2 * 4 + 2] = iVar1 + iVar4;
        param_1[uVar2 * 4 + 3] = iVar7;
        param_1[uVar2 * 4 + 1] = iVar3;
        uVar2 = (uint)(char)((char)uVar2 + '\x01');
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

