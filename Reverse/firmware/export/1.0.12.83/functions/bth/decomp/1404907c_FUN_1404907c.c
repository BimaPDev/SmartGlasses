/* FUN_1404907c @ 0x1404907c */

void FUN_1404907c(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  uint uVar7;
  
  uVar2 = FUN_14051938();
  iVar1 = DAT_14049120;
  uVar5 = (uint)*(byte *)(DAT_14049120 + 0x125);
  uVar7 = uVar2;
  FUN_1402a6e8(4,0x14a,DAT_1404912c,DAT_14049128,DAT_14049124,uVar2,uVar5);
  if (((param_1 == 0x44) && (*(char *)(iVar1 + 0x125) != -1)) &&
     (iVar3 = FUN_1404a1b4(), *(char *)(iVar3 + 0x44) != '\0')) {
    uVar2 = (uint)*(byte *)(iVar1 + 0x125);
  }
  iVar3 = FUN_1404a1b4(uVar2);
  if (*(char *)(iVar3 + 0x44) == '\0') {
    FUN_1402a6e8(4,0x158,DAT_1404912c,DAT_14049128,DAT_14049130,uVar7,uVar5);
    return;
  }
  iVar3 = FUN_14094ab4(*(undefined4 *)(iVar3 + 0x78));
  if (iVar3 == 0) {
    FUN_1402a6e8(4,0x15e,DAT_1404912c,DAT_14049128,DAT_14049134,param_1,uVar5);
    return;
  }
  uVar6 = uVar2;
  if (param_1 != 0x46) {
    uVar6 = 0xff;
  }
  *(char *)(iVar1 + 0x125) = (char)uVar6;
  iVar1 = FUN_1404a1b4();
  if (iVar1 == 0) {
    return;
  }
  if (*(char *)(iVar1 + 0x44) == '\0') {
    FUN_1402a6e8(4,0x10c,DAT_14049058,DAT_14049054,DAT_1404904c,DAT_14049050);
    return;
  }
  iVar3 = FUN_14094ab4(*(undefined4 *)(iVar1 + 0x78));
  if (iVar3 == 0) {
    FUN_1402a6e8(4,0x112,DAT_14049058,DAT_14049054,DAT_1404905c,DAT_14049050,param_1,uVar7,uVar5,
                 unaff_r4,unaff_r5,unaff_r6);
    return;
  }
  switch(param_1) {
  case 0x41:
    FUN_1402a6e8(4,0x137,DAT_14049058,DAT_14049054,DAT_14049078,uVar2,unaff_lr,uVar7,uVar5,unaff_r4,
                 unaff_r5,unaff_r6);
    FUN_14094ae8(*(undefined4 *)(iVar1 + 0x78),0x41,1);
    uVar4 = 0x41;
    goto LAB_14049018;
  case 0x42:
    FUN_1402a6e8(4,0x13c,DAT_14049058,DAT_14049054,DAT_14049074,uVar2,unaff_lr,uVar7,uVar5,unaff_r4,
                 unaff_r5,unaff_r6);
    FUN_14094ae8(*(undefined4 *)(iVar1 + 0x78),0x42,1);
    uVar4 = 0x42;
LAB_14049018:
    FUN_14094ae8(*(undefined4 *)(iVar1 + 0x78),uVar4,0);
    return;
  case 0x44:
    FUN_1402a6e8(4,0x11f,DAT_14049058,DAT_14049054,DAT_14049070,uVar2,unaff_lr,uVar7,uVar5,unaff_r4,
                 unaff_r5,unaff_r6);
    FUN_14094ae8(*(undefined4 *)(iVar1 + 0x78),0x44,1);
    FUN_14094ae8(*(undefined4 *)(iVar1 + 0x78),0x44,0);
    *(undefined1 *)(iVar1 + 0x47) = 1;
    break;
  case 0x45:
    FUN_1402a6e8(4,0x119,DAT_14049058,DAT_14049054,DAT_1404906c,uVar2,unaff_lr,uVar7,uVar5,unaff_r4,
                 unaff_r5,unaff_r6);
    FUN_14094ae8(*(undefined4 *)(iVar1 + 0x78),0x45,1);
    FUN_14094ae8(*(undefined4 *)(iVar1 + 0x78),0x45,0);
    *(undefined1 *)(iVar1 + 0x47) = 0;
    break;
  case 0x46:
    FUN_1402a6e8(4,0x125,DAT_14049058,DAT_14049054,DAT_14049068,uVar2,unaff_lr,uVar7,uVar5,unaff_r4,
                 unaff_r5,unaff_r6);
    FUN_14094ae8(*(undefined4 *)(iVar1 + 0x78),0x46,1);
    FUN_14094ae8(*(undefined4 *)(iVar1 + 0x78),0x46,0);
    *(undefined1 *)(iVar1 + 0x47) = 0;
    break;
  case 0x4b:
    FUN_1402a6e8(4,299,DAT_14049058,DAT_14049054,DAT_14049064,uVar2,unaff_lr,uVar7,uVar5,unaff_r4,
                 unaff_r5,unaff_r6);
    FUN_14094ae8(*(undefined4 *)(iVar1 + 0x78),0x4b,1);
    FUN_14094ae8(*(undefined4 *)(iVar1 + 0x78),0x4b,0);
    *(undefined1 *)(iVar1 + 0x47) = 1;
    break;
  case 0x4c:
    FUN_1402a6e8(4,0x131,DAT_14049058,DAT_14049054,DAT_14049060,uVar2,unaff_lr,uVar7,uVar5,unaff_r4,
                 unaff_r5,unaff_r6);
    FUN_14094ae8(*(undefined4 *)(iVar1 + 0x78),0x4c,1);
    FUN_14094ae8(*(undefined4 *)(iVar1 + 0x78),0x4c,0);
    *(undefined1 *)(iVar1 + 0x47) = 1;
  }
  return;
}

