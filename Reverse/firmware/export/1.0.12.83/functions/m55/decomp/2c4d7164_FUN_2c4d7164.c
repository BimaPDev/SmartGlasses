/* FUN_2c4d7164 @ 0x2c4d7164 */

void FUN_2c4d7164(int *param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  
  iVar1 = DAT_2c4d7280;
  if (param_5 == -1) {
    param_1 = param_1 + param_2 + 0x3fffffff;
  }
  if (param_2 != 0) {
    piVar11 = (int *)(param_8 + (param_7 + 0x3fffffff) * 4);
    iVar7 = param_7 + -1;
    piVar8 = (int *)(param_6 + (param_7 + 0x3fffffff) * 4);
    do {
      if ((int)(param_3 - 1U) < 1) {
        uVar6 = *param_1 >> (1U - param_3 & 0xff);
      }
      else {
        uVar6 = *param_1 << (param_3 - 1U & 0xff);
      }
      iVar2 = (int)(((ulonglong)uVar6 << 0x20) - (longlong)*piVar8 * (longlong)*piVar11 >> 0x20);
      piVar9 = piVar11;
      piVar5 = piVar8;
      iVar10 = iVar7;
      if (iVar2 < 0x40000000) {
        iVar3 = iVar1;
        if (-0x40000000 < iVar2) {
          iVar3 = iVar2 << 1;
        }
        if (iVar7 == 0) goto LAB_2c4d725c;
LAB_2c4d71f2:
        do {
          while( true ) {
            piVar5 = piVar5 + -1;
            iVar2 = (int)(((ulonglong)(uint)(iVar3 >> 1) << 0x20) -
                          (longlong)*piVar5 * (longlong)piVar9[-1] >> 0x20);
            if (iVar2 < 0x40000000) {
              iVar3 = iVar1;
              if (-0x40000000 < iVar2) {
                iVar3 = iVar2 << 1;
              }
            }
            else {
              iVar3 = 0x7fffffff;
            }
            iVar2 = (int)((longlong)*piVar5 * (longlong)iVar3 +
                          ((ulonglong)(uint)(piVar9[-1] >> 1) << 0x20) >> 0x20);
            if (iVar2 < 0x40000000) break;
            iVar10 = iVar10 + -1;
            *piVar9 = 0x7fffffff;
            piVar9 = piVar9 + -1;
            if (iVar10 == 0) goto LAB_2c4d7228;
          }
          iVar4 = iVar1;
          if (-0x40000000 < iVar2) {
            iVar4 = iVar2 << 1;
          }
          iVar10 = iVar10 + -1;
          *piVar9 = iVar4;
          piVar9 = piVar9 + -1;
        } while (iVar10 != 0);
LAB_2c4d7228:
        piVar5 = piVar11 + -param_7;
        if (-1 < (int)param_4) goto LAB_2c4d7262;
LAB_2c4d722e:
        iVar10 = iVar3 << (-param_4 & 0xff);
      }
      else {
        iVar3 = 0x7fffffff;
        if (iVar7 != 0) goto LAB_2c4d71f2;
LAB_2c4d725c:
        piVar5 = piVar11 + -1;
        if ((int)param_4 < 0) goto LAB_2c4d722e;
LAB_2c4d7262:
        iVar10 = iVar3 >> (param_4 & 0xff);
      }
      *param_1 = iVar10;
      param_2 = param_2 + -1;
      piVar5[1] = iVar3;
      param_1 = param_1 + param_5;
    } while (param_2 != 0);
  }
  return;
}

