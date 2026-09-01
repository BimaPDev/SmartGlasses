/* FUN_100437bc @ 0x100437bc */

int FUN_100437bc(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = *DAT_10043868;
  uVar5 = param_1;
  iVar1 = FUN_100efda8();
  iVar4 = 0;
  if (iVar1 == 0) goto LAB_1004380a;
  FUN_100a5b78((DAT_10043870 - DAT_1004386c) * 0x20 & 0xff00U | 0x4d0031,DAT_10043878,DAT_10043874,
               iVar1,uVar5);
  switch(iVar1) {
  case 5:
    break;
  default:
    iVar4 = 0;
    goto LAB_1004380a;
  case 8:
    FUN_10039e58(param_1);
    goto LAB_10043808;
  case 10:
    FUN_100355e0(param_1);
    goto LAB_10043808;
  case 0xb:
    FUN_10039cc0(param_1);
    goto LAB_10043808;
  }
switchD_100437f6_caseD_5:
  FUN_10026ff8(param_1);
LAB_10043808:
  iVar4 = 1;
LAB_1004380a:
  iVar1 = FUN_100efd98();
  if ((iVar1 != 0) && (iVar4 == 0)) {
    uVar2 = FUN_100efd98();
    FUN_100a5b78((DAT_10043870 - DAT_1004386c) * 0x20 & 0xff00U | 0x760031,DAT_10043878,DAT_1004387c
                 ,uVar2,uVar5);
    iVar4 = 1;
  }
  if (*DAT_10043868 == iVar3) {
    return iVar4;
  }
  FUN_1013cdc0();
  goto switchD_100437f6_caseD_5;
}

