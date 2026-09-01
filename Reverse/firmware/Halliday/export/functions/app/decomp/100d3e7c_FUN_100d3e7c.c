/* FUN_100d3e7c @ 0x100d3e7c */

undefined4 FUN_100d3e7c(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_10131c7e();
  uVar2 = (DAT_100d3eb8 - DAT_100d3ebc) * 0x20 & 0xff00;
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100d3ec0 | uVar2,DAT_100d3ec8,DAT_100d3ec4);
  }
  else {
    FUN_100a5b78(DAT_100d3ecc | uVar2,DAT_100d3ec8,DAT_100d3ed0);
    FUN_101319b8(iVar1);
  }
  return 0;
}

