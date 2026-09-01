/* FUN_10023df0 @ 0x10023df0 */

void FUN_10023df0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *DAT_10023e38;
  iVar3 = *DAT_10023e3c;
  uVar1 = FUN_10126fb4(*(undefined4 *)(iVar3 + 0x24),*(undefined4 *)(iVar3 + 0x204),param_3,
                       DAT_10023e3c,param_1,iVar2,param_3);
  FUN_101255ce(uVar1,0);
  FUN_10125640(uVar1,DAT_10023e40);
  if (*DAT_10023e38 != iVar2) {
    FUN_1013cdc0();
  }
  FUN_10124cea(*(undefined4 *)(iVar3 + 0x14),1);
  return;
}

