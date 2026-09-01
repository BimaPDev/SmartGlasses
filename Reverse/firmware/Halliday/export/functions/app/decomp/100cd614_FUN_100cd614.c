/* FUN_100cd614 @ 0x100cd614 */

undefined4 FUN_100cd614(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int *piVar6;
  int iVar7;
  int *piVar8;
  ushort uVar9;
  int *piVar10;
  short sVar11;
  ushort uVar12;
  undefined8 uVar13;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  uVar13 = CONCAT44(param_2,param_1);
  local_30 = param_1;
  local_2c = param_2;
  uStack_28 = param_3;
  if (param_1 == (int *)0x0) {
    FUN_10119dc2(DAT_100cd818,DAT_100cd814,DAT_100cd810,0x51e,0,param_2);
    FUN_10119dc2(DAT_100cd81c);
    uVar13 = FUN_1011a1f0(DAT_100cd810,0x51e,param_3,param_4);
    param_3 = extraout_r2;
  }
  if (*param_1 == 0) {
    FUN_10119dc2(DAT_100cd818,DAT_100cd820,DAT_100cd810,0x51f,uVar13);
    FUN_10119dc2(DAT_100cd81c);
    uVar13 = FUN_1011a1f0(DAT_100cd810,0x51f,param_3,0);
    param_3 = extraout_r2_00;
  }
  if (param_1[1] == 0) {
    FUN_10119dc2(DAT_100cd818,DAT_100cd824,DAT_100cd810,0x520,uVar13);
    FUN_10119dc2(DAT_100cd81c);
    FUN_1011a1f0(DAT_100cd810,0x520,param_3,0);
  }
  if (*DAT_100cd828 == 0) {
    *DAT_100cd828 = 1;
    FUN_100ccc60();
  }
  uVar9 = (ushort)local_30;
  local_30 = (int *)CONCAT22(0x1800,uVar9 & 0xff00);
  iVar4 = FUN_10132c82(*(undefined4 *)*param_1,&local_30);
  if (iVar4 != 0) {
    uVar9 = (ushort)local_2c;
    local_2c = CONCAT22(0x1801,uVar9 & 0xff00);
    iVar4 = FUN_10132c82(*(undefined4 *)*param_1,&local_2c);
    uVar3 = DAT_100cd84c;
    piVar2 = DAT_100cd82c;
    if (iVar4 != 0) {
      iVar4 = *param_1;
      sVar11 = (short)param_1[1];
      if (((*DAT_100cd82c == 0) || (iVar7 = DAT_100cd82c[1], iVar7 == 0)) || (iVar7 == 8)) {
        uVar9 = *DAT_100cd830;
        uVar12 = 0;
      }
      else {
        uVar9 = *(ushort *)(*(int *)(iVar7 + -4) * 0x14 + *(int *)(iVar7 + -8) + -4);
        uVar12 = uVar9;
      }
      for (; (iVar4 != 0 && (sVar11 != 0)); sVar11 = sVar11 + -1) {
        uVar1 = *(ushort *)(iVar4 + 0x10);
        if (uVar1 == 0) {
          *(ushort *)(iVar4 + 0x10) = uVar9 + 1;
          uVar1 = uVar9 + 1;
        }
        else if (uVar1 <= uVar9) {
          local_2c = 0;
          FUN_10134be0(uVar1,uVar1,uVar3,&local_2c);
          uVar1 = uVar9;
          if (local_2c != 0) {
            FUN_100a5b78(DAT_100cd840 | (DAT_100cd83c - DAT_100cd838) * 0x20 & 0xff00U,DAT_100cd848,
                         DAT_100cd844,*(undefined2 *)(iVar4 + 0x10));
            return 0xffffffea;
          }
        }
        uVar9 = uVar1;
        iVar4 = iVar4 + 0x14;
      }
      if ((uVar12 == 0) || (uVar12 < *(ushort *)(*param_1 + 0x10))) {
        param_1[2] = 0;
LAB_100cd750:
        piVar5 = param_1 + 2;
        if ((undefined4 *)piVar2[1] == (undefined4 *)0x0) {
          *piVar2 = (int)piVar5;
          piVar2[1] = (int)piVar5;
        }
        else {
          *(undefined4 *)piVar2[1] = piVar5;
LAB_100cd7f8:
          piVar2[1] = (int)(param_1 + 2);
        }
      }
      else {
        piVar5 = (int *)*piVar2;
        if (piVar5 != (int *)0x0) {
          piVar6 = (int *)0x0;
          piVar10 = piVar5;
          while (piVar8 = piVar10 + -2, piVar8 != (int *)0x0) {
            if (*(ushort *)(*param_1 + 0x10) < *(ushort *)(*piVar8 + 0x10)) {
              if ((piVar6 == (int *)0x0) || (piVar6 == (int *)0xfffffff8)) {
                iVar4 = piVar2[1];
                param_1[2] = (int)piVar5;
                *piVar2 = (int)(param_1 + 2);
                if (iVar4 == 0) goto LAB_100cd7f8;
              }
              else {
                iVar4 = piVar6[2];
                param_1[2] = iVar4;
                if (iVar4 == 0) goto LAB_100cd750;
                piVar6[2] = (int)(param_1 + 2);
              }
              break;
            }
            if ((piVar8 == (int *)0xfffffff8) ||
               (piVar10 = (int *)*piVar10, piVar6 = piVar8, piVar10 == (int *)0x0)) break;
          }
        }
      }
      iVar4 = FUN_1013457a(DAT_100cd834);
      if (iVar4 == 0) {
        return 0;
      }
      FUN_100cd204(*(undefined2 *)(*param_1 + 0x10),
                   *(undefined2 *)(param_1[1] * 0x14 + *param_1 + -4));
      FUN_100ccd8c();
      return 0;
    }
  }
  return 0xffffff88;
}

