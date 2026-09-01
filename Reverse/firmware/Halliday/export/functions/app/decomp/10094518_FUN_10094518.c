/* FUN_10094518 @ 0x10094518 */

uint FUN_10094518(undefined1 param_1)

{
  int *piVar1;
  ushort *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined8 uVar7;
  undefined4 uVar8;
  
  puVar2 = DAT_1009460c;
  piVar1 = DAT_10094608;
  if (*DAT_10094608 == 0) {
    *DAT_10094610 = 0;
    *puVar2 = 0x70;
  }
  puVar3 = DAT_10094610;
  uVar5 = (uint)*puVar2;
  if ((uVar5 + 1 & 0xc000) == 0) {
    if (*DAT_10094610 < uVar5 - 0x6f) {
      uVar5 = uVar5 - 0x50 & 0xffffffe0;
      if (uVar5 == 0) {
        uVar7 = FUN_10094174(3,DAT_1009461c,200,DAT_10094618,DAT_10094628,DAT_10094624,DAT_10094620)
        ;
        FUN_10119dc2(DAT_10094630,DAT_1009462c,DAT_1009461c,200,uVar7);
        FUN_10119dc2(DAT_10094634);
        FUN_1011a1f0(DAT_1009461c,200,extraout_r2,extraout_r3);
      }
      iVar4 = FUN_10094280(*piVar1,uVar5,DAT_10094618);
      if (iVar4 == 0) {
        uVar6 = 0xcc;
        uVar8 = DAT_10094638;
        goto LAB_10094542;
      }
      *piVar1 = iVar4;
      *puVar3 = uVar5;
    }
    *puVar2 = *puVar2 + 1;
    if (*piVar1 == 0) {
      uVar7 = FUN_10094174(3,DAT_1009461c,0xd4,DAT_10094618,DAT_10094628,DAT_10094640,DAT_1009463c);
      FUN_10119dc2(DAT_10094630,DAT_1009462c,DAT_1009461c,0xd4,uVar7);
      FUN_10119dc2(DAT_10094634);
      FUN_1011a1f0(DAT_1009461c,0xd4,extraout_r2_00,extraout_r3_00);
    }
    uVar5 = (uint)*puVar2;
    *(undefined1 *)(*piVar1 + uVar5 + -0x71) = param_1;
  }
  else {
    uVar6 = 0xbd;
    uVar8 = DAT_10094614;
LAB_10094542:
    FUN_10094174(3,DAT_1009461c,uVar6,DAT_10094618,uVar8);
    uVar5 = 0;
  }
  return uVar5;
}

