/* FUN_2c4c1044 @ 0x2c4c1044 */

void FUN_2c4c1044(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  
  local_2c = *DAT_2c4c123c;
  iVar6 = FUN_2c49d154();
  puVar1 = DAT_2c4c1244;
  local_34 = 0;
  local_30 = 0;
  if (*DAT_2c4c1240 != iVar6) {
    *DAT_2c4c1240 = iVar6;
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  piVar5 = DAT_2c4c1258;
  piVar4 = DAT_2c4c1254;
  piVar3 = DAT_2c4c1250;
  piVar2 = DAT_2c4c124c;
  if (*DAT_2c4c1248 == 0) {
    if (*DAT_2c4c1254 == 1) {
      *DAT_2c4c1254 = 0;
      FUN_2c49c0cc(0x1b);
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x1a1,DAT_2c4c1264,DAT_2c4c1260,DAT_2c4c125c,iVar6,*DAT_2c4c124c,*DAT_2c4c1250,0,
            *piVar4);
    }
  }
  else {
    iVar12 = *DAT_2c4c124c;
    if (iVar12 <= iVar6) {
      if (*DAT_2c4c1254 == 0) {
        *DAT_2c4c1254 = 1;
        FUN_2c49c0cc(0x1b,0);
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x18d,DAT_2c4c1264,DAT_2c4c1260,DAT_2c4c1268,iVar6,*piVar2,*DAT_2c4c1250,0,*piVar4);
      }
    }
    iVar11 = *DAT_2c4c1250;
    if (iVar11 == 0) {
      if (*DAT_2c4c1254 == 1) {
        if (iVar12 < 0xb) {
          if (iVar12 < 0) {
            iVar12 = iVar12 + 1;
          }
          iVar12 = iVar12 >> 1;
        }
        else {
          iVar12 = iVar12 + -2;
        }
        if (iVar6 <= iVar12) {
          *DAT_2c4c1254 = 0;
          FUN_2c49c0cc(0x1b,1);
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x194,DAT_2c4c1264,DAT_2c4c1260,DAT_2c4c125c,iVar6,*piVar2,iVar12,0,*piVar4);
        }
      }
    }
    else if ((iVar6 <= iVar11) && (0 < iVar11)) {
      if (*DAT_2c4c1254 == 1) {
        *DAT_2c4c1254 = 0;
        FUN_2c49c0cc(0x1b);
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x19a,DAT_2c4c1264,DAT_2c4c1260,DAT_2c4c125c,iVar6,*piVar2,*piVar3,0,*piVar4);
      }
    }
  }
  FUN_2c673c88();
  iVar12 = FUN_2c6741d8();
  if (9999 < (uint)(iVar12 - *piVar5)) {
    FUN_2c49b954(&local_34);
    uVar7 = FUN_2c49d108();
    uVar8 = FUN_2c49d0d8();
    FUN_2c49d1a8(&local_30);
    iVar12 = *DAT_2c4c126c;
    if (iVar12 < 1) {
      iVar12 = *DAT_2c4c1270;
    }
    uVar13 = *DAT_2c4c1274;
    uVar9 = FUN_2c49d434();
    uVar10 = FUN_2c49d4ac();
    FUN_2c673c88();
    iVar11 = FUN_2c6741d8();
    *piVar5 = iVar11;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1b4,DAT_2c4c1264,DAT_2c4c1260,DAT_2c4c1278,local_34,iVar6,uVar7,uVar8,local_30,iVar12,
          uVar13,uVar9,uVar10);
  }
  if (*DAT_2c4c123c == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

