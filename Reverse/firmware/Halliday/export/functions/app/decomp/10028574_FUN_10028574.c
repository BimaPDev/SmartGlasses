/* FUN_10028574 @ 0x10028574 */

void FUN_10028574(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *DAT_10028674;
  uVar5 = param_1;
  iVar2 = FUN_1012437a();
  iVar3 = FUN_10124372(param_1);
  piVar1 = DAT_10028678;
  iVar7 = *DAT_10028678;
  if (iVar2 == 7) {
LAB_1002859a:
    if (iVar7 != 0) {
      iVar2 = *piVar1;
      *(undefined4 *)(iVar7 + 0x174) = *(undefined4 *)(iVar3 + 0x10);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x178) != 0)) {
        uVar5 = FUN_1011ea48(iVar2 + 800,0,0x5c,iVar2 + 800,uVar5);
        (**(code **)(DAT_1002867c + 4))(*(undefined1 *)(iVar2 + 0x174),uVar5);
        iVar7 = FUN_100ba31c();
        iVar3 = *(int *)(iVar2 + 0x18);
        if (iVar7 < 1) goto LAB_1002862e;
        uVar5 = FUN_1004cf14(0xa5);
        FUN_10097aec(iVar3,DAT_10028680,uVar5,iVar2 + 0x33d);
        goto LAB_10028608;
      }
    }
  }
  else if (iVar2 == 0xd) {
    iVar4 = FUN_100871bc(param_1);
    if (iVar4 == 10) goto LAB_1002859a;
  }
  else if (((iVar2 == 0xe) && (iVar7 != 0)) && (*(int *)(iVar7 + 8) != 0)) {
    if (*DAT_10028674 == iVar6) {
      FUN_1012bb2a(*(int *)(iVar7 + 8),(int)(short)((short)*(undefined4 *)(iVar3 + 0x10) + 1));
      return;
    }
    goto LAB_1002862a;
  }
  if (*DAT_10028674 == iVar6) {
    return;
  }
LAB_1002862a:
  do {
    FUN_1013cdc0();
LAB_1002862e:
    uVar5 = FUN_1004cf14(0xb5);
    FUN_10097998(iVar3,uVar5);
LAB_10028608:
    FUN_10124c20(*(undefined4 *)(iVar2 + 0x14),1);
    FUN_10124cea(*(undefined4 *)(iVar2 + 4),1);
    FUN_1002efe4();
    uVar5 = FUN_10087308();
  } while (*DAT_10028674 != iVar6);
  FUN_1008740c(uVar5,*(undefined4 *)(iVar2 + 0x14));
  return;
}

