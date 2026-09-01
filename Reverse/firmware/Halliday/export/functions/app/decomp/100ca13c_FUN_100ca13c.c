/* FUN_100ca13c @ 0x100ca13c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ca13c(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined8 uVar6;
  
  piVar4 = (int *)(param_1 + 0xcc);
  iVar5 = *piVar4;
  *piVar4 = iVar5 + -1;
  if (iVar5 < 1) {
    FUN_10119dc2(DAT_100ca1b4,DAT_100ca1b0,DAT_100ca1ac,0x7ee,param_1,param_2);
    FUN_10119dc2(DAT_100ca1b8);
    FUN_1011a1f0(DAT_100ca1ac,0x7ee,0,iVar5 + -1);
    if (iVar5 == 0) {
      FUN_100a5b78(DAT_100ca1c4 | (DAT_100ca1c0 - DAT_100ca1bc) * 0x20 & 0xff00U,DAT_100ca1cc,
                   DAT_100ca1c8);
    }
  }
  uVar6 = FUN_101334a4(piVar4);
  uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (((int)uVar6 == 0) && (*(char *)(param_1 + 2) == '\x01')) {
    iVar5 = FUN_10132e28(_DAT_100c867c);
    if (iVar5 << 0x13 < 0) {
      uVar1 = FUN_10132e28(_DAT_100c867c);
      uVar3 = (uVar1 & 0x7f) >> 6;
      if (((-1 < (int)(uVar1 << 0x19)) && (iVar5 = FUN_10132e28(_DAT_100c867c), iVar5 << 0x17 < 0))
         && (iVar5 = FUN_100c5c18(_DAT_100c8680,&stack0xfffffff4), iVar5 == 0)) {
        iVar5 = FUN_100c60a0(_DAT_100c8680,1);
        if (iVar5 != 0) {
          FUN_100cad6c(uVar2,uVar3);
          uVar3 = FUN_10132e6c(_DAT_100c867c,0xc);
        }
        FUN_100ca13c(uVar2);
        if (uVar3 != 0) {
          FUN_10132e3c(_DAT_100c867c,0x1000);
        }
      }
    }
    return;
  }
  return;
}

