/* FUN_10038a38 @ 0x10038a38 */

void FUN_10038a38(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = DAT_10038ad0;
  iVar4 = *DAT_10038ad0;
  iVar3 = *DAT_10038ad4;
  FUN_1002f5bc(iVar4 + 0x1c,6,param_1,0,param_1);
  switch(param_1) {
  case 1:
    FUN_1002e994(*(undefined4 *)(*piVar1 + 0x14),1);
    FUN_100389e8();
    break;
  case 2:
    goto switchD_10038a5c_caseD_2;
  case 3:
    FUN_1002e994(*(undefined4 *)(*piVar1 + 0x60),1);
    (**(code **)(DAT_10038ad8 + 0x14))();
    break;
  case 4:
    FUN_100389e8();
    FUN_100389a0(4);
    break;
  case 5:
    FUN_100389e8();
    FUN_100389a0(5);
    uVar2 = *(undefined4 *)(*piVar1 + 0x18);
    goto LAB_10038aac;
  default:
    uVar2 = *(undefined4 *)(*piVar1 + 0x14);
LAB_10038aac:
    FUN_1002e994(uVar2,0);
  }
  while (*(char *)(*piVar1 + 0x54) = (char)param_1, *DAT_10038ad4 != iVar3) {
    FUN_1013cdc0();
switchD_10038a5c_caseD_2:
    FUN_1002eefc(*(undefined4 *)(iVar4 + 0x24));
  }
  return;
}

