/* FUN_10015b10 @ 0x10015b10 */

void FUN_10015b10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar2 = *DAT_10015b68;
  uStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  FUN_1011ea48(&uStack_20,0,0x14,0);
  uStack_20 = CONCAT22(0xdbca,(undefined2)uStack_20);
  FUN_100a5b78((DAT_10015b6c - DAT_10015b70) * 0x20 & 0xff00U | 0x3f0031,DAT_10015b78,DAT_10015b74);
  uVar1 = FUN_1009e224();
  FUN_1009ece8(uVar1,&uStack_20);
  if (*DAT_10015b68 != iVar2) {
    FUN_1013cdc0();
  }
  return;
}

