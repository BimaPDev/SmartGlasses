/* FUN_10025bf0 @ 0x10025bf0 */

void FUN_10025bf0(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int local_14;
  
  piVar1 = DAT_10025c7c;
  local_14 = *DAT_10025c78;
  local_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  if ((*DAT_10025c7c == 0) || (param_1 == 0)) {
    if (*DAT_10025c78 == local_14) {
      return;
    }
  }
  else {
    uVar2 = FUN_1011ea10(param_1 + 0x38);
    local_20 = (uint)*(ushort *)(param_1 + 0x178);
    FUN_100a5b78((DAT_10025c80 - DAT_10025c84) * 0x20 & 0xff00U | 0x3a0032,DAT_10025c88,DAT_10025c8c
                 ,uVar2);
    iVar3 = *piVar1;
    *(undefined1 *)(param_1 + 0x17c) = 0;
    FUN_1011ea38(iVar3 + 0x19e,iVar3,0xe8e);
    FUN_1011ea40(iVar3,param_1,0x19e);
    if (*DAT_10025c78 == local_14) goto LAB_10025c60;
  }
  FUN_1013cdc0();
LAB_10025c60:
  if (*DAT_100431ac != *DAT_100431ac) {
    FUN_1013cdc0();
  }
  iVar3 = *DAT_1004317c;
  FUN_1011ea48(&local_20,0,0x14,0);
  local_20 = CONCAT13(2,CONCAT12(0x8a,(undefined2)local_20));
  FUN_1009ece8(DAT_10043180,&local_20);
  if (*DAT_1004317c != iVar3) {
    FUN_1013cdc0();
  }
  return;
}

