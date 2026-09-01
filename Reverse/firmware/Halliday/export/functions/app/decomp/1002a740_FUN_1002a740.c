/* FUN_1002a740 @ 0x1002a740 */

void FUN_1002a740(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  short sVar7;
  uint unaff_r5;
  int *piVar8;
  int *unaff_r7;
  int *piVar9;
  int *piStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int local_1c;
  
  local_1c = *DAT_1002a9dc;
  piStack_28 = param_1;
  uStack_24 = param_2;
  uStack_20 = param_3;
  iVar3 = FUN_10124372();
  iVar4 = FUN_1012437a(param_1);
  if (iVar4 != 0x1c) {
    piVar9 = unaff_r7;
    if (iVar4 != 0xd) goto LAB_1002a7ec;
    uVar6 = FUN_100871bc(param_1);
    unaff_r5 = uVar6 & 0xff;
    param_1 = *(int **)(iVar3 + 0x10);
    unaff_r7 = (int *)(**(code **)(DAT_1002a9e4 + 0xc))();
    cVar2 = FUN_1012c10e(iVar3);
    piVar9 = unaff_r7;
    if ((unaff_r5 == 10) || (unaff_r5 == 0x12)) {
      iVar3 = FUN_1011ea18(param_1,DAT_1002a9e8);
      if (iVar3 == 0) {
LAB_1002a7a4:
        iVar3 = *(int *)(*DAT_1002a9ec + 0x18);
        goto LAB_1002a876;
      }
      iVar3 = FUN_1011ea18(param_1,DAT_1002a9f0);
      piVar1 = DAT_1002a9ec;
      if (iVar3 != 0) goto LAB_1002a7fc;
      FUN_1002eefc(*(undefined4 *)(*DAT_1002a9ec + 0x14));
      uVar5 = FUN_10087308();
      FUN_1012458c(uVar5,1);
      param_1 = piVar1;
      if (*(int *)(*piVar1 + 0x14) != 0) {
        FUN_1002a628(*(int *)(*piVar1 + 0x14),cVar2 + '\x01');
        FUN_1012c082(*(undefined4 *)(*piVar1 + 0x14),*(byte *)(*piVar1 + 0x4b) - 1,0);
      }
      goto LAB_1002a7ec;
    }
    if (unaff_r5 == 0x11) {
      iVar3 = FUN_1011ea18(param_1,DAT_1002a9f0);
      if (iVar3 == 0) {
        iVar3 = *(int *)(*DAT_1002a9ec + 0x1c);
        goto LAB_1002a876;
      }
      iVar3 = FUN_1011ea18(param_1,DAT_1002a9f4);
      if (iVar3 == 0) goto LAB_1002a7a4;
      iVar3 = FUN_1011ea18(param_1,DAT_1002a9fc);
      if (iVar3 == 0) {
        iVar3 = *(int *)(*DAT_1002a9ec + 0x20);
        goto LAB_1002a876;
      }
      iVar3 = FUN_1011ea18(param_1,DAT_1002aa00);
      if (iVar3 == 0) goto LAB_1002a870;
      goto LAB_1002a7ec;
    }
    if (1 < unaff_r5 - 0x13) {
      if (unaff_r5 == 0x1b) goto LAB_1002a8f4;
      goto LAB_1002a7ec;
    }
    iVar4 = FUN_1011ea18(param_1,DAT_1002a9f0);
    if (iVar4 != 0) goto LAB_1002a7ec;
  }
  uVar5 = FUN_1012c10e(iVar3);
  FUN_101188d0(DAT_1002a9e0,uVar5);
  piVar9 = unaff_r7;
LAB_1002a7ec:
  while( true ) {
    if (*DAT_1002a9dc == local_1c) {
      return;
    }
    FUN_1013cdc0();
LAB_1002a7fc:
    iVar3 = FUN_1011ea18(param_1,DAT_1002a9f4);
    unaff_r7 = DAT_1002a9ec;
    if (iVar3 == 0) goto code_r0x1002a808;
    iVar3 = FUN_1011ea18(param_1,DAT_1002a9f8);
    unaff_r7 = piVar9;
    if (iVar3 != 0) break;
LAB_1002a870:
    iVar3 = *(int *)(*DAT_1002a9ec + 0x24);
LAB_1002a876:
    FUN_1002eefc(iVar3);
    uVar5 = FUN_10087308();
    FUN_1012458c(uVar5,1);
    piVar9 = unaff_r7;
  }
  iVar3 = FUN_1011ea18(param_1,DAT_1002a9fc);
  piVar1 = DAT_1002a9ec;
  if (iVar3 == 0) {
    if ((piVar9 == (int *)0x1) && (iVar3 = *(int *)(*DAT_1002a9ec + 0x28), iVar3 != 0))
    goto LAB_1002a876;
    if (unaff_r5 != 10) goto LAB_1002a7ec;
    param_1 = (int *)0x0;
    if (*(int *)(*DAT_1002a9ec + 0x20) != 0) {
      param_1 = (int *)FUN_1012c10e();
    }
    unaff_r5 = 0;
    if (*(int *)(*piVar1 + 0x24) != 0) {
      unaff_r5 = FUN_1012c10e();
    }
    piVar8 = param_1;
    if (piVar9 == (int *)0x1) {
      piVar8 = (int *)((int)param_1 + 1);
      if (*(int *)(*piVar1 + 0x28) == 0) {
        if (piVar8 == (int *)&HardFault) {
LAB_1002a8dc:
          piVar8 = (int *)0x0;
        }
      }
      else {
        iVar3 = FUN_1012c10e();
        if (piVar8 == (int *)&HardFault) {
          if (iVar3 == 0) goto LAB_1002a8dc;
        }
        else if (iVar3 != 0) {
          piVar8 = (int *)((int)param_1 + 0xd);
        }
      }
    }
    iVar3 = *piVar1;
    *(char *)(iVar3 + 0x4a) = (char)piVar8;
    *(char *)(iVar3 + 0x49) = (char)unaff_r5;
  }
  else {
    iVar3 = FUN_1011ea18(param_1,DAT_1002aa00);
    unaff_r7 = DAT_1002a9ec;
    if ((iVar3 != 0) || (unaff_r5 != 10)) goto LAB_1002a7ec;
    if (*(int *)(*DAT_1002a9ec + 0x20) == 0) {
      unaff_r5 = 0;
    }
    else {
      unaff_r5 = FUN_1012c10e();
    }
    param_1 = (int *)0x0;
    if (*(int *)(*unaff_r7 + 0x24) != 0) {
      param_1 = (int *)FUN_1012c10e();
    }
    iVar3 = 0;
    if (*(int *)(*unaff_r7 + 0x28) != 0) {
      iVar3 = FUN_1012c10e();
    }
    cVar2 = (char)unaff_r5 + '\x01';
    if (unaff_r5 == 0xb) {
      if (iVar3 == 0) {
        cVar2 = '\0';
      }
    }
    else if (iVar3 != 0) {
      cVar2 = (char)unaff_r5 + '\r';
    }
    iVar3 = *unaff_r7;
    *(char *)(iVar3 + 0x4a) = cVar2;
    *(char *)(iVar3 + 0x49) = (char)param_1;
  }
  FUN_1002bbd0(*(undefined4 *)(iVar3 + 0x10),iVar3 + 0x48);
LAB_1002a8f4:
  uVar5 = 1;
  goto LAB_1002a85c;
code_r0x1002a808:
  if (unaff_r5 == 10) {
    if (*(int *)(*DAT_1002a9ec + 0x1c) == 0) {
      unaff_r5 = 0;
    }
    else {
      unaff_r5 = FUN_1012c10e();
    }
    param_1 = (int *)0x0;
    if (*(int *)(*unaff_r7 + 0x18) != 0) {
      param_1 = (int *)FUN_1012c10e();
    }
    cVar2 = '\0';
    if (*(int *)(*unaff_r7 + 0x14) != 0) {
      cVar2 = FUN_1012c10e();
    }
    FUN_1004337c(&piStack_28);
    sVar7 = uStack_24._2_2_ + 0x76c;
    iVar3 = *unaff_r7;
    uStack_24 = CONCAT22(sVar7,(undefined2)uStack_24);
    *(char *)(iVar3 + 0x4c) = (char)param_1 + '\x01';
    uVar5 = 2;
    *(short *)(iVar3 + 0x4e) = sVar7 + (short)unaff_r5;
    *(char *)(iVar3 + 0x4b) = cVar2 + '\x01';
LAB_1002a85c:
    FUN_10029f68(uVar5);
    piVar9 = unaff_r7;
  }
  goto LAB_1002a7ec;
}

