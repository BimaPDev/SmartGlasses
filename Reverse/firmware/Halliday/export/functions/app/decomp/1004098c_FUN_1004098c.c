/* FUN_1004098c @ 0x1004098c */

void FUN_1004098c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = *DAT_100409cc;
  uStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  if ((*(byte *)(DAT_100409d0 + 1) & 0x20) == 0) {
    FUN_1011ea48(&uStack_20,*(byte *)(DAT_100409d0 + 1) & 0x20,0x14);
    uStack_20._0_3_ = CONCAT12(0x87,(undefined2)uStack_20);
    FUN_1009ece8(DAT_100409d4,&uStack_20);
  }
  if (*DAT_100409cc != iVar1) {
    FUN_1013cdc0();
  }
  return;
}

