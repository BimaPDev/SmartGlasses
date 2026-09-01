/* FUN_100fc030 @ 0x100fc030 */

undefined4
FUN_100fc030(uint *param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6,int param_7
            )

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint local_34;
  
  iVar6 = param_5 - param_3;
  if (((iVar6 < 1) || ((int)param_5 < param_6)) || (param_7 < (int)param_3)) {
LAB_100fc136:
    uVar4 = 0;
  }
  else {
    iVar8 = param_4 - param_2;
    if ((int)param_3 < param_6) {
      iVar9 = FUN_100f85ec(iVar8,param_6 - param_3);
      uVar5 = *param_1;
      iVar9 = param_2 + iVar9;
      param_6 = param_6 >> (uVar5 & 0xff);
      uVar1 = 0;
    }
    else {
      uVar5 = *param_1;
      uVar1 = param_1[1] - 1 & param_3;
      param_6 = (int)param_3 >> (uVar5 & 0xff);
      iVar9 = param_2;
    }
    if (param_7 < (int)param_5) {
      param_7 = param_7 >> (uVar5 & 0xff);
      local_34 = 0;
      if ((int)uVar1 < 1) goto LAB_100fc148;
LAB_100fc086:
      if (param_6 == param_7) goto LAB_100fc136;
      iVar2 = FUN_100f85ec(iVar8,param_1[1] - uVar1);
      iVar9 = iVar9 + iVar2;
      uVar1 = param_1[9];
      param_6 = param_6 + 1;
    }
    else {
      param_7 = (int)param_5 >> (uVar5 & 0xff);
      local_34 = param_1[1] - 1 & param_5;
      if (0 < (int)uVar1) goto LAB_100fc086;
LAB_100fc148:
      uVar1 = param_1[9];
      if (*(char *)((int)param_1 + 0x4f) != '\0') {
        uVar1 = uVar1 - 4;
        param_1[9] = uVar1;
      }
    }
    *(bool *)((int)param_1 + 0x4f) = local_34 == 0;
    if (*(char *)((int)param_1 + 0x4e) != '\0') {
      *(int *)(param_1[0x14] + 0x14) = param_6;
      *(undefined1 *)((int)param_1 + 0x4e) = 0;
    }
    param_6 = (param_7 + 1) - param_6;
    if (uVar1 + param_6 * 4 < param_1[8]) {
      if (iVar8 < 1) {
        iVar3 = FUN_100f86e0(param_1[1],param_2 - param_4);
        iVar8 = param_1[1] * (param_2 - param_4);
        iVar2 = -1;
        iVar8 = iVar8 - iVar6 * (iVar8 / iVar6);
        iVar3 = -iVar3;
      }
      else {
        iVar3 = FUN_100f86e0(param_1[1],iVar8);
        iVar2 = 1;
        iVar8 = param_1[1] * iVar8 - iVar6 * ((int)(param_1[1] * iVar8) / iVar6);
      }
      piVar11 = (int *)param_1[9];
      iVar6 = param_3 - param_5;
      piVar7 = piVar11;
      iVar10 = param_6;
      if (0 < param_6) {
        do {
          iVar6 = iVar6 + iVar8;
          *piVar7 = iVar9;
          iVar9 = iVar9 + iVar3;
          if (-1 < iVar6) {
            iVar6 = iVar6 + (param_3 - param_5);
            iVar9 = iVar9 + iVar2;
          }
          iVar10 = iVar10 + -1;
          piVar7 = piVar7 + 1;
        } while (iVar10 != 0);
        piVar11 = piVar11 + param_6;
      }
      param_1[9] = (uint)piVar11;
      return 0;
    }
    uVar4 = 1;
    param_1[10] = 0x62;
  }
  return uVar4;
}

