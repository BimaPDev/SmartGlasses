/* FUN_2c140214 @ 0x2c140214 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c140214(void)

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
  
  iVar2 = _DAT_2c140378;
  iVar1 = _DAT_2c140374;
  if (*(char *)(_DAT_2c140374 + 8) == '\x01') goto LAB_2c140324;
  if (*(char *)(_DAT_2c140374 + 8) != '\0') {
    func_0x2c13edb4(0xffffffff);
    return 0xffffffff;
  }
  FUN_2c13e9dc(_DAT_2c140374 + 8,0,0x9c,in_r3,in_r3);
  uVar7 = *(undefined4 *)(iVar2 + 0x2c);
  uVar5 = *(undefined4 *)(iVar2 + 0xc);
  *(undefined2 *)(iVar1 + 0x54) = *(undefined2 *)(iVar2 + 0x10);
  uVar6 = *(undefined4 *)(iVar2 + 8);
  uVar4 = *(undefined4 *)(iVar2 + 0x30);
  *(undefined4 *)(iVar1 + 0x5c) = uVar5;
  *(undefined4 *)(iVar1 + 0x40) = uVar6;
  iVar3 = FUN_2c13f50c(uVar7,uVar4);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar1 + 0x80) = uVar7;
  }
  uVar4 = *(undefined4 *)(iVar2 + 0x14);
  iVar3 = FUN_2c13f50c(uVar4,*(undefined4 *)(iVar2 + 0x18));
  if (iVar3 == 0) {
    uVar5 = *(undefined4 *)(iVar2 + 0x1c);
    uVar4 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(iVar1 + 0x80);
    iVar3 = FUN_2c13f50c(uVar5,uVar4);
    if (iVar3 == 0) goto LAB_2c14033a;
LAB_2c14026e:
    uVar6 = *(undefined4 *)(iVar2 + 0x24);
    uVar4 = *(undefined4 *)(iVar2 + 0x28);
    *(undefined4 *)(iVar1 + 0x78) = uVar5;
    iVar3 = FUN_2c13f50c(uVar6,uVar4);
    if (iVar3 != 0) goto LAB_2c14027e;
LAB_2c14032c:
    puVar8 = *(undefined4 **)(iVar2 + 0x34);
    *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(iVar1 + 0x80);
  }
  else {
    uVar5 = *(undefined4 *)(iVar2 + 0x1c);
    uVar6 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(iVar1 + 0x74) = uVar4;
    iVar3 = FUN_2c13f50c(uVar5,uVar6);
    if (iVar3 != 0) goto LAB_2c14026e;
LAB_2c14033a:
    uVar6 = *(undefined4 *)(iVar2 + 0x24);
    uVar4 = *(undefined4 *)(iVar2 + 0x28);
    *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(iVar1 + 0x80);
    iVar3 = FUN_2c13f50c(uVar6,uVar4);
    if (iVar3 == 0) goto LAB_2c14032c;
LAB_2c14027e:
    puVar8 = *(undefined4 **)(iVar2 + 0x34);
    *(undefined4 *)(iVar1 + 0x7c) = uVar6;
  }
  if (puVar8 != (undefined4 *)0x0) {
    FUN_2c141b70(puVar8,*puVar8,puVar8[2],puVar8[3]);
    *(undefined4 **)(iVar1 + 0x84) = puVar8;
  }
  puVar8 = *(undefined4 **)(iVar2 + 0x38);
  if (puVar8 != (undefined4 *)0x0) {
    FUN_2c141b70(puVar8,*puVar8,puVar8[2],puVar8[3]);
    *(undefined4 **)(iVar1 + 0x88) = puVar8;
  }
  puVar8 = *(undefined4 **)(iVar2 + 0x3c);
  if (puVar8 != (undefined4 *)0x0) {
    FUN_2c141b70(puVar8,*puVar8,puVar8[2],puVar8[3]);
    *(undefined4 **)(iVar1 + 0x8c) = puVar8;
  }
  puVar8 = *(undefined4 **)(iVar2 + 0x40);
  if (puVar8 != (undefined4 *)0x0) {
    FUN_2c141b70(puVar8,*puVar8,puVar8[2],puVar8[3]);
    *(undefined4 **)(iVar1 + 0x90) = puVar8;
  }
  puVar8 = *(undefined4 **)(iVar2 + 0x44);
  if (puVar8 != (undefined4 *)0x0) {
    FUN_2c141b70(puVar8,*puVar8,puVar8[2],puVar8[3]);
    *(undefined4 **)(iVar1 + 0x94) = puVar8;
  }
  puVar8 = *(undefined4 **)(iVar2 + 0x48);
  if (puVar8 != (undefined4 *)0x0) {
    FUN_2c141b70(puVar8,*puVar8,puVar8[2],puVar8[3]);
    *(undefined4 **)(iVar1 + 0x98) = puVar8;
  }
  puVar8 = *(undefined4 **)(iVar2 + 0x4c);
  if (puVar8 != (undefined4 *)0x0) {
    FUN_2c141b70(puVar8,*puVar8,puVar8[2],puVar8[3]);
    *(undefined4 **)(iVar1 + 0x9c) = puVar8;
  }
  puVar8 = *(undefined4 **)(iVar2 + 0x50);
  if (puVar8 != (undefined4 *)0x0) {
    FUN_2c141b70(puVar8,*puVar8,puVar8[2],puVar8[3]);
    *(undefined4 **)(iVar1 + 0xa0) = puVar8;
  }
  *(undefined1 *)(iVar1 + 8) = 1;
LAB_2c140324:
  func_0x2c13edbc();
  return 0;
}

