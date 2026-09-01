/* FUN_1012734a @ 0x1012734a */

void FUN_1012734a(int param_1,int param_2,int param_3,uint param_4,ushort param_5,int param_6,
                 char param_7,int *param_8)

{
  short sVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  short sVar2;
  
  uVar8 = (uint)param_5;
  if (uVar8 == param_4 + 0x168) goto LAB_1012736e;
  if (0x168 < param_4) {
    param_4 = param_4 - 0x168 & 0xffff;
  }
  if (0x168 < uVar8) {
    uVar8 = uVar8 - 0x168 & 0xffff;
  }
  iVar10 = param_3 - param_6;
  if (param_7 == '\0') {
    iVar9 = 0;
  }
  else {
    iVar9 = param_6 / 2 + 1;
  }
  uVar6 = param_4 / 0x5a & 0xff;
  uVar7 = uVar8 / 0x5a & 0xff;
  sVar1 = (short)param_4;
  sVar2 = (short)uVar8;
  if (uVar6 == 4) {
    if (uVar7 != 4) {
      uVar6 = 3;
      goto LAB_101273ce;
    }
    if (uVar8 < param_4) goto LAB_1012736e;
LAB_1012750c:
    iVar3 = FUN_1013d980((int)(short)(sVar1 + 0x5a));
    *param_8 = (param_1 - iVar9) + (iVar10 * iVar3 >> 0xf);
    iVar3 = FUN_1013d980((int)sVar1);
    param_8[1] = (param_2 - iVar9) + (param_3 * iVar3 >> 0xf);
    iVar3 = FUN_1013d980((int)(short)(sVar2 + 0x5a));
    param_8[2] = param_1 + iVar9 + (param_3 * iVar3 >> 0xf);
    iVar3 = FUN_1013d980((int)sVar2);
    iVar10 = iVar10 * iVar3;
  }
  else {
    if (uVar7 == 4) {
      uVar7 = 3;
    }
LAB_101273ce:
    if ((uVar7 == uVar6) && (param_4 <= uVar8)) {
      if (uVar7 == 0) {
        iVar3 = FUN_1013d980((int)sVar1);
        param_8[1] = (param_2 - iVar9) + (iVar10 * iVar3 >> 0xf);
        iVar3 = FUN_1013d980((int)(short)(sVar1 + 0x5a));
        param_8[2] = iVar9 + param_1 + (param_3 * iVar3 >> 0xf);
        iVar3 = FUN_1013d980((int)sVar2);
        param_8[3] = param_2 + iVar9 + (param_3 * iVar3 >> 0xf);
        iVar3 = FUN_1013d980((int)(short)(sVar2 + 0x5a));
        iVar10 = iVar10 * iVar3;
LAB_1012742e:
        *param_8 = (param_1 - iVar9) + (iVar10 >> 0xf);
        return;
      }
      if (uVar7 == 1) {
        iVar3 = FUN_1013d980((int)sVar1);
        param_8[3] = iVar9 + param_2 + (param_3 * iVar3 >> 0xf);
        iVar3 = FUN_1013d980((int)(short)(sVar1 + 0x5a));
        param_8[2] = iVar9 + param_1 + (iVar10 * iVar3 >> 0xf);
        iVar3 = FUN_1013d980((int)sVar2);
        param_8[1] = (param_2 - iVar9) + (iVar10 * iVar3 >> 0xf);
        iVar10 = FUN_1013d980((int)(short)(sVar2 + 0x5a));
        iVar10 = param_3 * iVar10;
        goto LAB_1012742e;
      }
      if (uVar7 == 2) {
        iVar3 = FUN_1013d980((int)(short)(sVar1 + 0x5a));
        *param_8 = (param_1 - iVar9) + (param_3 * iVar3 >> 0xf);
        iVar3 = FUN_1013d980((int)sVar1);
        param_8[3] = iVar9 + param_2 + (iVar10 * iVar3 >> 0xf);
        iVar3 = FUN_1013d980((int)sVar2);
        param_8[1] = (param_2 - iVar9) + (param_3 * iVar3 >> 0xf);
        iVar3 = FUN_1013d980((int)(short)(sVar2 + 0x5a));
        param_8[2] = param_1 + iVar9 + (iVar10 * iVar3 >> 0xf);
        return;
      }
      if (uVar7 != 3) {
        return;
      }
      goto LAB_1012750c;
    }
    if (uVar6 == 0) {
      if (uVar7 == 1) {
        iVar3 = FUN_1013d980((int)(short)(sVar2 + 0x5a));
        *param_8 = (param_1 - iVar9) + (param_3 * iVar3 >> 0xf);
        iVar4 = FUN_1013d980((int)sVar2);
        iVar3 = (int)sVar1;
        iVar5 = FUN_1013d980(iVar3);
        if (iVar4 < iVar5) {
          iVar3 = (int)sVar2;
        }
        iVar3 = FUN_1013d980(iVar3);
        param_8[1] = (param_2 - iVar9) + (iVar10 * iVar3 >> 0xf);
        iVar10 = FUN_1013d980((int)(short)(sVar1 + 0x5a));
        param_8[2] = param_1 + iVar9 + (param_3 * iVar10 >> 0xf);
        param_2 = param_2 + param_3 + iVar9;
        goto LAB_101275d6;
      }
LAB_1012736e:
      *param_8 = param_1 - param_3;
      param_8[1] = param_2 - param_3;
      param_8[2] = param_1 + param_3;
      param_2 = param_2 + param_3;
      goto LAB_101275d6;
    }
    if (uVar6 != 1) {
      if (uVar6 == 2) {
        if (uVar7 == 3) {
          iVar4 = FUN_1013d980((int)(short)(sVar1 + 0x5a));
          iVar3 = (int)sVar2;
          *param_8 = (param_1 - iVar9) + (param_3 * iVar4 >> 0xf);
          param_8[1] = (param_2 - param_3) - iVar9;
          iVar4 = FUN_1013d980((int)(short)(sVar2 + 0x5a));
          param_8[2] = param_1 + iVar9 + (param_3 * iVar4 >> 0xf);
          iVar4 = FUN_1013d980(iVar3);
          iVar5 = FUN_1013d980((int)sVar1);
          if (iVar10 * iVar4 - iVar10 * iVar5 == 0 || iVar10 * iVar4 < iVar10 * iVar5) {
            iVar3 = (int)sVar1;
          }
          iVar3 = FUN_1013d980(iVar3);
          param_8[3] = (iVar10 * iVar3 >> 0xf) + param_2 + iVar9;
          return;
        }
      }
      else if ((uVar6 == 3) && (uVar7 == 0)) {
        iVar3 = (int)(short)(sVar2 + 0x5a);
        iVar4 = FUN_1013d980(iVar3);
        iVar5 = FUN_1013d980((int)(short)(sVar1 + 0x5a));
        if (iVar5 <= iVar4) {
          iVar3 = (int)(short)(sVar1 + 0x5a);
        }
        iVar3 = FUN_1013d980(iVar3);
        *param_8 = (param_1 - iVar9) + (iVar10 * iVar3 >> 0xf);
        iVar10 = FUN_1013d980((int)sVar1);
        param_8[1] = (param_2 - iVar9) + (param_3 * iVar10 >> 0xf);
        param_8[2] = param_1 + param_3 + iVar9;
        goto LAB_10127646;
      }
      goto LAB_1012736e;
    }
    if (uVar7 != 2) goto LAB_1012736e;
    *param_8 = (param_1 - param_3) - iVar9;
    iVar4 = FUN_1013d980((int)sVar2);
    iVar3 = (int)(short)(sVar1 + 0x5a);
    param_8[1] = (param_2 - iVar9) + (param_3 * iVar4 >> 0xf);
    iVar4 = FUN_1013d980(iVar3);
    iVar5 = FUN_1013d980((int)(short)(sVar2 + 0x5a));
    if (iVar4 <= iVar5) {
      iVar3 = (int)(short)(sVar2 + 0x5a);
    }
    iVar3 = FUN_1013d980(iVar3);
    param_8[2] = param_1 + iVar9 + (iVar10 * iVar3 >> 0xf);
    sVar2 = sVar1;
LAB_10127646:
    iVar10 = FUN_1013d980((int)sVar2);
    iVar10 = param_3 * iVar10;
  }
  param_2 = param_2 + iVar9 + (iVar10 >> 0xf);
LAB_101275d6:
  param_8[3] = param_2;
  return;
}

