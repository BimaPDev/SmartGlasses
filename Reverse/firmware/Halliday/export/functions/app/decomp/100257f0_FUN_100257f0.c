/* FUN_100257f0 @ 0x100257f0 */

void FUN_100257f0(uint param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = *DAT_10025864;
  uVar2 = 0;
  if (param_2 != 0) {
    uVar4 = (DAT_1002586c - DAT_10025868) * 0x20 & 0xff00;
    uVar5 = param_2;
    if (((param_1 | param_2) & 3) != 0) {
      FUN_100a5b78(uVar4 | 0x170032,DAT_10025874,DAT_10025870,param_1,param_2,param_2,param_3);
    }
    FUN_100a5b78(uVar4 | 0x190032,DAT_10025874,DAT_10025878,param_1,param_2,uVar5,param_3);
    iVar1 = FUN_1013d44e(param_2,param_1);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 1;
    }
  }
  while (*DAT_10025864 != iVar3) {
    FUN_1013cdc0(uVar2);
    uVar2 = extraout_r1;
  }
  return;
}

