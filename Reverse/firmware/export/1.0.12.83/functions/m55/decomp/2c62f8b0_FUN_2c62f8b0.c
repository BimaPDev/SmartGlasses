/* FUN_2c62f8b0 @ 0x2c62f8b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c62f8b0(void)

{
  undefined4 *puVar1;
  short *psVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_r3;
  undefined4 *puVar9;
  
  psVar2 = _LAB_2c62f8e8;
  uVar7 = _LAB_2c62f8e4;
  FUN_2c62a2dc(_LAB_2c62f8e4,_LAB_2c62f8ec,0,0x1f400);
  FUN_2c62a290(psVar2);
  uVar4 = _LAB_2c62f8f8;
  uVar3 = _LAB_2c62f8f4;
  uVar8 = _LAB_2c62f8f0;
  *(undefined4 *)psVar2 = _LAB_2c62f8f4;
  *(undefined4 *)(psVar2 + 6) = uVar7;
  *(undefined4 *)(psVar2 + 10) = uVar4;
  *(undefined4 *)(psVar2 + 0x16) = uVar8;
  puVar5 = (undefined4 *)FUN_2c62c938(DAT_2c62a450,uVar3,uVar4,in_r3);
  if (puVar5 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  if (*(int *)(psVar2 + 0x1e) == 0) {
    iVar6 = lv_mem_alloc(*(undefined4 *)(psVar2 + 0x24));
    if (iVar6 == 0) {
      return (undefined4 *)0x0;
    }
    (**(code **)(psVar2 + 0x20))(psVar2,iVar6);
    *(int *)(psVar2 + 0x1e) = iVar6;
  }
  FUN_2c62c3b0(puVar5,0x164);
  puVar1 = DAT_2c62a454;
  puVar5[0x57] = 1;
  uVar7 = DAT_2c62a458;
  *puVar5 = psVar2;
  puVar9 = (undefined4 *)*puVar1;
  *puVar1 = puVar5;
  iVar6 = FUN_2c62bdd8(uVar7,0x10,puVar5);
  puVar5[1] = iVar6;
  if (iVar6 == 0) {
    FUN_2c62bea8(puVar5);
    puVar5 = (undefined4 *)0x0;
  }
  else {
    if (((int)((uint)*(byte *)(psVar2 + 8) << 0x1e) < 0) &&
       (*(uint *)(*(int *)(psVar2 + 6) + 0xc) < (uint)((int)*psVar2 * (int)psVar2[1]))) {
      *(byte *)(psVar2 + 8) = *(byte *)(psVar2 + 8) & 0xfd;
    }
    puVar5[0xc] = 0xffffffff;
    *(undefined1 *)((int)puVar5 + 0x2d) = 0;
    iVar6 = FUN_2c620d24();
    if (iVar6 == 0) {
      uVar7 = FUN_2c62ee64(5);
      uVar8 = FUN_2c62ee64(0);
      uVar7 = FUN_2c61d868(puVar5,uVar7,uVar8,0,DAT_2c62a460);
      puVar5[2] = uVar7;
    }
    else {
      uVar7 = FUN_2c620d0c();
      puVar5[2] = uVar7;
    }
    uVar7 = FUN_2c606a10(0);
    puVar5[4] = uVar7;
    uVar7 = FUN_2c606a10(0);
    puVar5[7] = uVar7;
    uVar7 = FUN_2c606a10(0);
    puVar5[8] = uVar7;
    uVar8 = FUN_2c606a10(0);
    uVar7 = DAT_2c62a45c;
    puVar5[9] = uVar8;
    FUN_2c603a04(puVar5[7],0,uVar7);
    FUN_2c603a04(puVar5[8],0,DAT_2c62a45c);
    FUN_2c603a04(puVar5[9],0,DAT_2c62a45c);
    FUN_2c606abc(puVar5[7],2);
    FUN_2c606abc(puVar5[8],2);
    FUN_2c606abc(puVar5[9],2);
    FUN_2c60497c(puVar5[7],0);
    FUN_2c60497c(puVar5[8],0);
    FUN_2c60497c(puVar5[9],0);
    FUN_2c607df0(puVar5[4]);
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = puVar5;
    }
    uVar7 = puVar5[1];
    *puVar1 = puVar9;
    FUN_2c62be5c(uVar7);
  }
  return puVar5;
}

