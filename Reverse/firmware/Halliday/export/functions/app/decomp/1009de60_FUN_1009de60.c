/* FUN_1009de60 @ 0x1009de60 */

void FUN_1009de60(void)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  undefined8 uVar3;
  undefined4 uVar4;
  
  puVar1 = DAT_1009dea0;
  FUN_1012aff0(DAT_1009dea0);
  *puVar1 = 0x2f;
  *(undefined4 *)(puVar1 + 4) = DAT_1009dea4;
  *(undefined4 *)(puVar1 + 8) = DAT_1009dea8;
  *(undefined4 *)(puVar1 + 0xc) = DAT_1009deac;
  *(undefined4 *)(puVar1 + 0x10) = DAT_1009deb0;
  *(undefined4 *)(puVar1 + 0x14) = DAT_1009deb4;
  *(undefined4 *)(puVar1 + 0x18) = DAT_1009deb8;
  *(undefined4 *)(puVar1 + 0x1c) = DAT_1009debc;
  *(undefined4 *)(puVar1 + 0x20) = DAT_1009dec0;
  *(undefined4 *)(puVar1 + 0x24) = DAT_1009dec4;
  uVar4 = DAT_1009dec8;
  *(undefined4 *)(puVar1 + 0x28) = DAT_1009dec8;
  puVar2 = (undefined4 *)FUN_10094064(DAT_10093ebc);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = FUN_10094174(3,DAT_10093ecc,0x193,DAT_10093ed0,DAT_10093ec8,DAT_10093ec4,DAT_10093ec0,
                         uVar4,unaff_r4,unaff_lr);
    FUN_10119dc2(DAT_10093ed8,DAT_10093ed4,DAT_10093ecc,0x193,uVar3);
    FUN_10119dc2(DAT_10093edc);
    FUN_1011a1f0(DAT_10093ecc,0x193,extraout_r2,extraout_r3);
    return;
  }
  *puVar2 = puVar1;
  return;
}

