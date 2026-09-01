/* FUN_100413a4 @ 0x100413a4 */

undefined4 FUN_100413a4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *DAT_100413e8;
  FUN_100a5b78((DAT_100413ec - DAT_100413f0) * 0x20 & 0xff00U | 0x470031,DAT_100413f8,DAT_100413f4,
               DAT_100413f0,param_1,iVar1,param_3);
  FUN_100411ec();
  if (*DAT_100413e8 != iVar1) {
    FUN_1013cdc0();
  }
  return 1;
}

