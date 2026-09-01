/* FUN_10023d9c @ 0x10023d9c */

void FUN_10023d9c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *DAT_10023de4;
  iVar3 = *DAT_10023de8;
  uVar1 = FUN_10126fb4(*(undefined4 *)(iVar3 + 0x24),*(undefined4 *)(iVar3 + 0x204),param_3,
                       DAT_10023de8,param_1,iVar2,param_3);
  FUN_101255ce(uVar1,0);
  FUN_10125640(uVar1,DAT_10023dec);
  if (*DAT_10023de4 != iVar2) {
    FUN_1013cdc0();
  }
  FUN_10124cea(*(undefined4 *)(iVar3 + 0x18),1);
  return;
}

