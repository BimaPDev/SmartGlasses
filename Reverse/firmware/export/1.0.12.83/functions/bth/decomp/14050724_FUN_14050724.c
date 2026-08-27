/* FUN_14050724 @ 0x14050724 */

undefined4 FUN_14050724(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  
  piVar2 = DAT_140507f4;
  piVar1 = DAT_140507f0;
  if (*DAT_140507f0 == 0) {
    if (*DAT_140507f4 == 0) {
      iVar6 = FUN_140e5138(DAT_14050818);
      *piVar2 = iVar6;
    }
    iVar6 = DAT_140507f8;
    uVar7 = 0xffffffff;
    *(undefined4 *)(DAT_140507f8 + 0xc) = 0xffffffff;
    uVar4 = FUN_140e5a48(0xffff,0);
    iVar3 = DAT_14050824;
    *(undefined4 *)(iVar6 + 8) = uVar4;
    *(undefined1 *)(iVar6 + 1) = 0;
    *(undefined4 *)(iVar6 + 0x10) = 0xffffffff;
    *(undefined1 *)(iVar3 + 1) = 0;
    *(undefined4 *)(iVar6 + 0x20) = 0xffffffff;
    uVar4 = FUN_140e5a48(0xffff,0,0);
    *(undefined4 *)(iVar6 + 0x1c) = uVar4;
    uVar4 = DAT_140507fc;
    *(undefined1 *)(iVar3 + 0x401) = 0;
    *(undefined1 *)(iVar6 + 0x15) = 0;
    *(undefined4 *)(iVar6 + 0x24) = 0xffffffff;
    uVar5 = FUN_140e5138(uVar4);
    uVar4 = DAT_14050800;
    *(undefined4 *)(iVar6 + 4) = uVar5;
    uVar4 = FUN_140e5138(uVar4);
    *(undefined4 *)(iVar6 + 0x18) = uVar4;
    iVar6 = FUN_140e5418(LAB_14050804,0);
    *piVar1 = iVar6;
    if (iVar6 == 0) {
      FUN_1402a6e8(4,0xb0,DAT_14050814,DAT_14050810,DAT_14050820,DAT_14050808);
    }
    else {
      FUN_1402a6e8(4,0xb5,DAT_14050814,DAT_14050810,DAT_1405080c,DAT_14050808);
      FUN_14050634();
      uVar7 = 0;
    }
  }
  else {
    FUN_1402a6e8(4,0x97,DAT_14050814,DAT_14050810,DAT_1405081c,DAT_14050808);
    uVar7 = 0xffffffff;
  }
  return uVar7;
}

