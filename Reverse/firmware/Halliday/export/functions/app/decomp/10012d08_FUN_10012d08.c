/* FUN_10012d08 @ 0x10012d08 */

void FUN_10012d08(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint unaff_r4;
  int iVar7;
  
  piVar1 = DAT_10012db0;
  iVar7 = *DAT_10012db0;
  iVar6 = *DAT_10012db4;
  if (iVar7 != 0) goto LAB_10012da6;
  iVar4 = thunk_FUN_1009f30c(700,DAT_10012db8,param_3,0,param_1,iVar6,param_3);
  iVar3 = DAT_10012dc0;
  iVar2 = DAT_10012dbc;
  *piVar1 = iVar4;
  unaff_r4 = (iVar2 - iVar3) * 0x20 & 0xff00;
  if (iVar4 != 0) goto LAB_10012d5a;
  FUN_100a5b78(unaff_r4 | 0x740011,DAT_10012dc8,DAT_10012dc4);
  uVar5 = 0xfffffff4;
  while( true ) {
    if (*DAT_10012db4 == iVar6) break;
    iVar4 = FUN_1013cdc0(uVar5);
LAB_10012d5a:
    FUN_1011ea48(iVar4,iVar7,700);
    FUN_10131306(3);
    FUN_10118a1c(*piVar1 + 7,0xb,DAT_10012dcc,param_1);
    FUN_10015058(*piVar1 + 7,*piVar1 + 0x214);
    *(byte *)(*piVar1 + 3) = *(byte *)(*piVar1 + 3) & 0x1f | *DAT_10012dd0 << 5;
    FUN_10013e50();
    FUN_100a5b78(unaff_r4 | 0x910031,DAT_10012dc8,DAT_10012dd4);
LAB_10012da6:
    uVar5 = 0;
  }
  return;
}

