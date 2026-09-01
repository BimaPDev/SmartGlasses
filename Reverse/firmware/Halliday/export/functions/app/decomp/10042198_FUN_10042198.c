/* FUN_10042198 @ 0x10042198 */

void FUN_10042198(undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = *DAT_100421e0;
  if (*DAT_100421e4 == '\0') goto LAB_100421d4;
  FUN_100a5b78(DAT_100421f0 | (DAT_100421ec - DAT_100421e8) * 0x20 & 0xff00U,DAT_100421f8,
               DAT_100421f4,1,param_1);
  uVar1 = 0;
  while( true ) {
    if (*DAT_100421e0 == iVar2) break;
    FUN_1013cdc0(uVar1);
LAB_100421d4:
    uVar1 = *DAT_100421fc;
  }
  return;
}

