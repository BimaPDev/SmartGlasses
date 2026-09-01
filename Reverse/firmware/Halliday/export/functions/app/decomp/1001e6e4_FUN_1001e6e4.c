/* FUN_1001e6e4 @ 0x1001e6e4 */

void FUN_1001e6e4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_1001e7b0;
  iVar4 = *DAT_1001e7a8;
  iVar5 = *DAT_1001e7ac;
  if (iVar5 == 0) {
switchD_1001e738_caseD_4:
    if (*DAT_1001e7a8 == iVar4) {
      return;
    }
    goto LAB_1001e716;
  }
  if ((param_1 == 1) && (iVar2 = (**(code **)(DAT_1001e7b0 + 0x28))(), iVar2 != 0)) {
    (**(code **)(iVar1 + 0x24))(0);
    if (*DAT_1001e7a8 == iVar4) goto LAB_1001e71a;
    goto LAB_1001e716;
  }
  FUN_1002f5bc(iVar5 + 0x20,6,param_1);
  FUN_1002efe4();
  switch(param_1) {
  case 0:
    if (*DAT_1001e7a8 == iVar4) {
      uVar3 = *(undefined4 *)(iVar5 + 0x20);
LAB_1001e74e:
      FUN_1002eefc(uVar3);
      return;
    }
    break;
  case 1:
    if (*DAT_1001e7a8 == iVar4) {
      uVar3 = *(undefined4 *)(iVar5 + 0x24);
      goto LAB_1001e74e;
    }
    break;
  case 2:
    uVar3 = *(undefined4 *)(iVar5 + 4);
    goto LAB_1001e768;
  case 3:
    uVar3 = *(undefined4 *)(iVar5 + 8);
LAB_1001e768:
    FUN_1002eefc(uVar3);
    uVar3 = FUN_10087308();
    if (*DAT_1001e7a8 == iVar4) {
      FUN_1012458c(uVar3,1);
      return;
    }
    break;
  default:
    goto switchD_1001e738_caseD_4;
  case 5:
    if (*DAT_1001e7a8 == iVar4) {
      uVar3 = *(undefined4 *)(iVar5 + 0x34);
      goto LAB_1001e74e;
    }
  }
LAB_1001e716:
  FUN_1013cdc0();
LAB_1001e71a:
  FUN_1001e5ec();
  return;
}

