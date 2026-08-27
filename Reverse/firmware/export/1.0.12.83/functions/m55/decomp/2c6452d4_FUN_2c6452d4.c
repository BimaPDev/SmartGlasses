/* FUN_2c6452d4 @ 0x2c6452d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c6452d4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_r3;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  iVar2 = _LAB_2c645438;
  iVar1 = _LAB_2c645434;
  if (*(char *)(_LAB_2c645434 + 8) == '\x01') goto LAB_2c6453e4;
  if (*(char *)(_LAB_2c645434 + 8) != '\0') {
    func_0x2c6439ec(0xffffffff);
    return 0xffffffff;
  }
  FUN_2c674268(_LAB_2c645434 + 8,0,0x9c,in_r3,in_r3);
  uVar7 = *(undefined4 *)(iVar2 + 0x2c);
  uVar5 = *(undefined4 *)(iVar2 + 0xc);
  *(undefined2 *)(iVar1 + 0x54) = *(undefined2 *)(iVar2 + 0x10);
  uVar6 = *(undefined4 *)(iVar2 + 8);
  uVar4 = *(undefined4 *)(iVar2 + 0x30);
  *(undefined4 *)(iVar1 + 0x5c) = uVar5;
  *(undefined4 *)(iVar1 + 0x40) = uVar6;
  iVar3 = FUN_2c6443ac(uVar7,uVar4);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar1 + 0x80) = uVar7;
  }
  uVar4 = *(undefined4 *)(iVar2 + 0x14);
  iVar3 = FUN_2c6443ac(uVar4,*(undefined4 *)(iVar2 + 0x18));
  if (iVar3 == 0) {
    uVar5 = *(undefined4 *)(iVar2 + 0x1c);
    uVar4 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(iVar1 + 0x80);
    iVar3 = FUN_2c6443ac(uVar5,uVar4);
    if (iVar3 == 0) goto LAB_2c6453fa;
LAB_2c64532e:
    *(undefined4 *)(iVar1 + 0x78) = uVar5;
    uVar5 = *(undefined4 *)(iVar2 + 0x24);
    iVar3 = FUN_2c6443ac(uVar5,*(undefined4 *)(iVar2 + 0x28));
    if (iVar3 != 0) goto LAB_2c64533e;
LAB_2c6453ec:
    puVar8 = *(undefined4 **)(iVar2 + 0x34);
    *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(iVar1 + 0x80);
  }
  else {
    *(undefined4 *)(iVar1 + 0x74) = uVar4;
    uVar5 = *(undefined4 *)(iVar2 + 0x1c);
    iVar3 = FUN_2c6443ac(uVar5,*(undefined4 *)(iVar2 + 0x20));
    if (iVar3 != 0) goto LAB_2c64532e;
LAB_2c6453fa:
    uVar5 = *(undefined4 *)(iVar2 + 0x24);
    uVar4 = *(undefined4 *)(iVar2 + 0x28);
    *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(iVar1 + 0x80);
    iVar3 = FUN_2c6443ac(uVar5,uVar4);
    if (iVar3 == 0) goto LAB_2c6453ec;
LAB_2c64533e:
    puVar8 = *(undefined4 **)(iVar2 + 0x34);
    *(undefined4 *)(iVar1 + 0x7c) = uVar5;
  }
  if (puVar8 != (undefined4 *)0x0) {
    FUN_2c647368(puVar8,*puVar8,puVar8[2],puVar8[3]);
    *(undefined4 **)(iVar1 + 0x84) = puVar8;
  }
  puVar8 = *(undefined4 **)(iVar2 + 0x38);
  if (puVar8 != (undefined4 *)0x0) {
    FUN_2c647368(puVar8,*puVar8,puVar8[2],puVar8[3]);
    *(undefined4 **)(iVar1 + 0x88) = puVar8;
  }
  puVar8 = *(undefined4 **)(iVar2 + 0x3c);
  if (puVar8 != (undefined4 *)0x0) {
    FUN_2c647368(puVar8,*puVar8,puVar8[2],puVar8[3]);
    *(undefined4 **)(iVar1 + 0x8c) = puVar8;
  }
  puVar8 = *(undefined4 **)(iVar2 + 0x40);
  if (puVar8 != (undefined4 *)0x0) {
    FUN_2c647368(puVar8,*puVar8,puVar8[2],puVar8[3]);
    *(undefined4 **)(iVar1 + 0x90) = puVar8;
  }
  puVar8 = *(undefined4 **)(iVar2 + 0x44);
  if (puVar8 != (undefined4 *)0x0) {
    FUN_2c647368(puVar8,*puVar8,puVar8[2],puVar8[3]);
    *(undefined4 **)(iVar1 + 0x94) = puVar8;
  }
  puVar8 = *(undefined4 **)(iVar2 + 0x48);
  if (puVar8 != (undefined4 *)0x0) {
    FUN_2c647368(puVar8,*puVar8,puVar8[2],puVar8[3]);
    *(undefined4 **)(iVar1 + 0x98) = puVar8;
  }
  puVar8 = *(undefined4 **)(iVar2 + 0x4c);
  if (puVar8 != (undefined4 *)0x0) {
    FUN_2c647368(puVar8,*puVar8,puVar8[2],puVar8[3]);
    *(undefined4 **)(iVar1 + 0x9c) = puVar8;
  }
  puVar8 = *(undefined4 **)(iVar2 + 0x50);
  if (puVar8 != (undefined4 *)0x0) {
    FUN_2c647368(puVar8,*puVar8,puVar8[2],puVar8[3]);
    *(undefined4 **)(iVar1 + 0xa0) = puVar8;
  }
  *(undefined1 *)(iVar1 + 8) = 1;
LAB_2c6453e4:
  func_0x2c6439f4();
  return 0;
}

