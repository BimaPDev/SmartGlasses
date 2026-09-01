/* FUN_1001227c @ 0x1001227c */

void FUN_1001227c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *DAT_100122d8;
  uVar4 = (DAT_100122dc - DAT_100122e0) * 0x20 & 0xff00;
  FUN_100a5b78(uVar4 | 0x1280031,DAT_100122e4,DAT_100122e8,DAT_100122e0,param_1);
  iVar1 = FUN_100b55f4(DAT_100122f0,DAT_100122ec);
  if (iVar1 != 0) goto LAB_100122d0;
  FUN_100a5b78(uVar4 | 0x12e0031,DAT_100122e4,DAT_100122f4);
  uVar2 = 0xffffffed;
  while( true ) {
    if (*DAT_100122d8 == iVar3) break;
    FUN_1013cdc0(uVar2);
LAB_100122d0:
    uVar2 = 0;
  }
  return;
}

