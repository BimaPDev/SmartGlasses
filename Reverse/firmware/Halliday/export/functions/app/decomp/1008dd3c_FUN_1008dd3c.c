/* FUN_1008dd3c @ 0x1008dd3c */

int FUN_1008dd3c(void)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 in_r3;
  undefined4 extraout_r3;
  undefined8 uVar2;
  
  iVar1 = FUN_10094064(DAT_1008dd8c);
  if (iVar1 == 0) {
    uVar2 = FUN_10094174(3,DAT_1008dd9c,0xd0,DAT_1008dda0,DAT_1008dd98,DAT_1008dd94,DAT_1008dd90,
                         in_r3);
    FUN_10119dc2(DAT_1008dda8,DAT_1008dda4,DAT_1008dd9c,0xd0,uVar2);
    FUN_10119dc2(DAT_1008ddac);
    FUN_1011a1f0(DAT_1008dd9c,0xd0,extraout_r2,extraout_r3);
  }
  else {
    FUN_10128176(iVar1,0x14);
  }
  return iVar1;
}

