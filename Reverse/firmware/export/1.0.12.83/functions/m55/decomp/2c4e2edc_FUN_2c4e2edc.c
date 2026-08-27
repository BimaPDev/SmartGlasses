/* FUN_2c4e2edc @ 0x2c4e2edc */

int FUN_2c4e2edc(int *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  undefined1 auStack_6c [64];
  int local_2c;
  
  iVar8 = param_1[0x6b];
  local_2c = *DAT_2c4e31b4;
  if (iVar8 == 0) {
    FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x72de,0x6e,1);
    uVar7 = 0x6e;
    iVar8 = 0;
    uVar12 = DAT_2c4e31b8;
LAB_2c4e2f18:
    FUN_2c4e0504(DAT_2c4e31c4,iVar8,iVar8,iVar8,DAT_2c4e31c0,uVar7,DAT_2c4e31bc,0x1300,uVar12);
  }
  else {
    iVar10 = 8;
    puVar11 = auStack_6c + iVar8;
    do {
      uVar3 = FUN_2c4e29bc(param_1,8,auStack_6c);
      if (uVar3 == 0) {
        FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x72de,0x77,1);
        uVar7 = 0x77;
        uVar12 = DAT_2c4e31c8;
        goto LAB_2c4e2f8a;
      }
      iVar4 = FUN_2c4e1650(param_1);
      iVar4 = iVar4 - param_1[0x5b];
      iVar5 = FUN_2c4e1600(param_1,uVar3 + iVar4,0);
      if (iVar5 == 0) {
        FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x72de,0x7b,1);
        uVar7 = 0x7b;
        iVar8 = 0;
        uVar12 = DAT_2c4e31cc;
        goto LAB_2c4e2f18;
      }
      iVar5 = FUN_2c4e29bc(param_1,8,puVar11);
      if (iVar5 == 0) {
        FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x72de,0x7d,1);
        uVar7 = 0x7d;
        iVar8 = 0;
        uVar12 = DAT_2c4e31d0;
        goto LAB_2c4e2f18;
      }
      iVar6 = (**(code **)(*param_1 + 0x68))(param_1,auStack_6c,puVar11);
      if (iVar6 == 0) {
        param_1[0x5b] = 0;
        iVar4 = FUN_2c4e1600(param_1,iVar4 + 1,0);
        if (iVar4 == 0) {
          FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x72de,0x8e,1);
          uVar7 = 0x8e;
          iVar8 = 0;
          uVar12 = DAT_2c4e31e4;
          goto LAB_2c4e2f18;
        }
      }
      else {
        iVar5 = FUN_2c4e1600(param_1,uVar3 + iVar4 + iVar5,0);
        if (iVar5 == 0) {
          FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x72de,0x81,1);
          uVar7 = 0x81;
          iVar8 = 0;
          uVar12 = DAT_2c4e31d4;
          goto LAB_2c4e2f18;
        }
        iVar5 = FUN_2c4e29bc(param_1,8,auStack_6c + iVar8 * 2);
        if (iVar5 == 0) {
          FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x72de,0x83,1);
          uVar7 = 0x83;
          iVar8 = 0;
          uVar12 = DAT_2c4e31d8;
          goto LAB_2c4e2f18;
        }
        iVar5 = (**(code **)(*param_1 + 0x68))(param_1,puVar11,auStack_6c + iVar8 * 2);
        if (iVar5 != 0) {
          iVar8 = FUN_2c4e1600(param_1,iVar4,0);
          if (iVar8 == 0) {
            FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x72de,0x86,1);
            uVar7 = 0x86;
            iVar8 = 0;
            uVar12 = DAT_2c4e31dc;
            goto LAB_2c4e2f18;
          }
          param_1[0x5b] = 0;
          iVar8 = (**(code **)(*param_1 + 100))(param_1,param_1[0x5c]);
          if (iVar8 == 0) {
            FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x72de,0x92,1);
            uVar7 = 0x92;
            uVar12 = DAT_2c4e31e0;
            goto LAB_2c4e2f18;
          }
          uVar9 = param_1[0x38];
          if (uVar9 == 0) {
            FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x72de,0x93,1);
            uVar7 = 0x93;
            uVar12 = DAT_2c4e31ec;
            goto LAB_2c4e2f8a;
          }
          *(undefined1 *)(param_1 + 0x69) = 1;
          FUN_2c674668(param_1 + 0x65,auStack_6c,param_1[0x6b]);
          uVar1 = (ulonglong)((uint)param_1[0x2c] / uVar3) * (ulonglong)uVar9;
          param_1[0x2b] = (uint)param_1[0x2c] / uVar3;
          lVar2 = (uVar1 & 0xffffffff) * 1000;
          iVar10 = FUN_2c672a48((int)lVar2,
                                (int)(uVar1 >> 0x20) * 1000 + (int)((ulonglong)lVar2 >> 0x20),
                                param_1[0x32],param_1[0x32] >> 0x1f);
          param_1[0x2a] = iVar10;
          iVar10 = FUN_2c4e1650(param_1);
          param_1[0x22] = 0;
          param_1[0x23] = (uint)(iVar10 - param_1[0x5b]) / uVar3;
          param_1[0x24] = iVar10 - param_1[0x5b];
          goto LAB_2c4e2f2a;
        }
      }
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x72de,0x91,1);
    uVar7 = 0x91;
    uVar12 = DAT_2c4e31e8;
LAB_2c4e2f8a:
    iVar8 = 0;
    FUN_2c4e0504(DAT_2c4e31c4,0,0,0,DAT_2c4e31c0,uVar7,DAT_2c4e31bc,0x1300,uVar12);
  }
LAB_2c4e2f2a:
  if (*DAT_2c4e31b4 != local_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return iVar8;
}

