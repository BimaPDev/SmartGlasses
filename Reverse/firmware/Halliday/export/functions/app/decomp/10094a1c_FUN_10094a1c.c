/* FUN_10094a1c @ 0x10094a1c */

undefined4 * FUN_10094a1c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined8 uVar4;
  
  puVar2 = (undefined4 *)FUN_10094064(DAT_10094a90);
  if (puVar2 == (undefined4 *)0x0) {
    uVar4 = FUN_10094174(3,DAT_10094aa0,0xac,DAT_10094aa4,DAT_10094a9c,DAT_10094a98,DAT_10094a94);
    FUN_10119dc2(DAT_10094aac,DAT_10094aa8,DAT_10094aa0,0xac,uVar4);
    FUN_10119dc2(DAT_10094ab0);
    FUN_1011a1f0(DAT_10094aa0,0xac,extraout_r2,extraout_r3);
  }
  else {
    puVar2[4] = 0xffffffff;
    *puVar2 = param_2;
    *(byte *)(puVar2 + 5) = *(byte *)(puVar2 + 5) & 0xfe;
    puVar2[2] = param_1;
    uVar3 = FUN_1012a75c();
    puVar1 = DAT_10094ab4;
    puVar2[1] = uVar3;
    puVar2[3] = param_3;
    *puVar1 = 1;
  }
  return puVar2;
}

