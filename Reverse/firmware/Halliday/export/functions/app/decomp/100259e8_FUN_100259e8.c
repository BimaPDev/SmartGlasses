/* FUN_100259e8 @ 0x100259e8 */

void FUN_100259e8(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = DAT_10025a34;
  iVar2 = *DAT_10025a28;
  FUN_100a5b78((DAT_10025a2c - DAT_10025a30) * 0x20 & 0xff00U | 0xba0031,DAT_10025a3c,DAT_10025a38,
               *DAT_10025a34,param_1);
  if (*DAT_10025a28 != iVar2) {
    FUN_1013cdc0(*puVar1);
  }
  return;
}

