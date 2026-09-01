/* FUN_100205b0 @ 0x100205b0 */

void FUN_100205b0(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *DAT_10020604;
  bVar1 = *DAT_10020610;
  FUN_100a5b78((DAT_10020608 - DAT_1002060c) * 0x20 & 0xff00U | 0xfd0034,DAT_10020618,DAT_10020614,
               param_1,bVar1,bVar1 >> 4,bVar1 & 0xf);
  if (*DAT_10020604 != iVar2) {
    FUN_1013cdc0(bVar1 >> 4 != 0);
  }
  return;
}

