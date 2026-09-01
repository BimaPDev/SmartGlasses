/* FUN_100d3ed4 @ 0x100d3ed4 */

undefined4 FUN_100d3ed4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10131ca0();
  if (iVar1 != 0) {
    uVar2 = FUN_10131c54(iVar1,0x13);
    FUN_101319b8(iVar1);
    FUN_100a5b78(DAT_100d3f14 | (DAT_100d3f0c - DAT_100d3f10) * 0x20 & 0xff00U,DAT_100d3f1c,
                 DAT_100d3f18,uVar2,param_1);
  }
  return 0;
}

