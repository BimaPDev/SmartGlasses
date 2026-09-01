/* FUN_1007ade4 @ 0x1007ade4 */

void FUN_1007ade4(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  
  iVar4 = DAT_1007afa0;
  uVar8 = (DAT_1007af98 - DAT_1007af94) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_1007af9c | uVar8,DAT_1007afa8,DAT_1007afa4);
  uVar5 = DAT_1007afb0;
  if (*(char *)(iVar4 + 8) != '\0') {
    uVar5 = DAT_1007afac;
  }
  FUN_100a5b78(DAT_1007afb4 | uVar8,DAT_1007afa8,DAT_1007afb8,uVar5);
  uVar5 = FUN_1007c5fc(*(undefined1 *)(iVar4 + 9));
  FUN_100a5b78(DAT_1007afbc | uVar8,DAT_1007afa8,DAT_1007afc0,uVar5,
               ((uint)*(byte *)(iVar4 + 10) * 0x7d + 0xa19f) / 10);
  FUN_100a5b78(uVar8 | 0x4e00033,DAT_1007afa8,DAT_1007afc4,*(undefined1 *)(iVar4 + 0xb),
               *(undefined2 *)(iVar4 + 0xc),*(undefined1 *)(iVar4 + 0xe));
  uVar1 = *(undefined1 *)(iVar4 + 0xf);
  uVar5 = FUN_1007c5fc(*(undefined1 *)(iVar4 + 0x10));
  uVar2 = *(undefined2 *)(iVar4 + 0x12);
  uVar6 = FUN_1007c5fc(*(undefined1 *)(iVar4 + 0x14));
  uVar3 = *(undefined2 *)(iVar4 + 0x16);
  uVar7 = FUN_1007c5fc(*(undefined1 *)(iVar4 + 0x18));
  FUN_100a5b78(DAT_1007afc8 | uVar8,DAT_1007afa8,DAT_1007afcc,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,
               *(undefined2 *)(iVar4 + 0x1a));
  FUN_100a5b78(DAT_1007afd0 | uVar8,DAT_1007afa8,DAT_1007afd4,*(undefined1 *)(iVar4 + 0x1c),
               *(undefined2 *)(iVar4 + 0x1e),*(undefined1 *)(iVar4 + 0x20),
               *(undefined1 *)(iVar4 + 0x21));
  uVar1 = *(undefined1 *)(iVar4 + 0x22);
  uVar5 = FUN_1007c5fc(*(undefined1 *)(iVar4 + 0x23));
  FUN_100a5b78(DAT_1007afd8 | uVar8,DAT_1007afa8,DAT_1007afdc,uVar1,uVar5,
               *(undefined2 *)(iVar4 + 0x24));
  FUN_100a5b78(DAT_1007afe0 | uVar8,DAT_1007afa8,DAT_1007afe4,*(undefined1 *)(iVar4 + 0x26),
               *(undefined2 *)(iVar4 + 0x28),*(undefined2 *)(iVar4 + 0x2a),
               *(undefined2 *)(iVar4 + 0x2c));
  FUN_100a5b78(uVar8 | 0x4f80034,DAT_1007afa8,DAT_1007afe8,*(undefined1 *)(iVar4 + 0x2e),
               *(undefined2 *)(iVar4 + 0x30),*(undefined2 *)(iVar4 + 0x32),
               *(undefined2 *)(iVar4 + 0x34));
  FUN_100a5b78(DAT_1007afec | uVar8,DAT_1007afa8,DAT_1007aff0,*(undefined2 *)(iVar4 + 0x36));
  FUN_100a5b78(DAT_1007aff4 | uVar8,DAT_1007afa8,DAT_1007aff8,*(undefined2 *)(iVar4 + 0x38));
  FUN_100a5b78(DAT_1007affc | uVar8,DAT_1007afa8,DAT_1007b000,*(undefined2 *)(iVar4 + 0x3a));
  FUN_100a5b78(uVar8 | 0x5000031,DAT_1007afa8,DAT_1007b004,*(undefined2 *)(iVar4 + 0x3c));
  FUN_100a5b78(DAT_1007b008 | uVar8,DAT_1007afa8,DAT_1007b00c,*(undefined2 *)(iVar4 + 0x3e));
  FUN_100a5b78(DAT_1007b010 | uVar8,DAT_1007afa8,DAT_1007b014,*(undefined2 *)(iVar4 + 0x40));
  FUN_100a5b78(DAT_1007b018 | uVar8,DAT_1007afa8,DAT_1007b01c,*(undefined2 *)(iVar4 + 0x42));
  FUN_100a5b78(DAT_1007b020 | uVar8,DAT_1007afa8,DAT_1007b024);
  return;
}

