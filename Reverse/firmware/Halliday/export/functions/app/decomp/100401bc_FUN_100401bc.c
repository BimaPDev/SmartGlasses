/* FUN_100401bc @ 0x100401bc */

undefined4 FUN_100401bc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar2 = *DAT_10040214;
  iVar1 = FUN_1003feb0();
  if (iVar1 != 0) goto LAB_10040204;
  iVar1 = FUN_100efda8();
  if (iVar1 - 5U < 2) {
    uVar3 = (DAT_1004021c - DAT_10040218) * 0x20 & 0xff00;
    FUN_100a5b78(uVar3 | 0x4a0031,DAT_10040224,DAT_10040220,uVar3,param_1);
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  while( true ) {
    if (*DAT_10040214 == iVar2) break;
    FUN_1013cdc0();
LAB_10040204:
    uVar4 = 0;
  }
  return uVar4;
}

