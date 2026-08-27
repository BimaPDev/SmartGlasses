/* FUN_2c62a2f8 @ 0x2c62a2f8 */

undefined4 * FUN_2c62a2f8(short *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  puVar2 = (undefined4 *)FUN_2c62c938(DAT_2c62a450);
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  if (*(int *)(param_1 + 0x1e) == 0) {
    iVar3 = lv_mem_alloc(*(undefined4 *)(param_1 + 0x24));
    if (iVar3 == 0) {
      return (undefined4 *)0x0;
    }
    (**(code **)(param_1 + 0x20))(param_1,iVar3);
    *(int *)(param_1 + 0x1e) = iVar3;
  }
  FUN_2c62c3b0(puVar2,0x164);
  puVar1 = DAT_2c62a454;
  puVar2[0x57] = 1;
  uVar4 = DAT_2c62a458;
  *puVar2 = param_1;
  puVar6 = (undefined4 *)*puVar1;
  *puVar1 = puVar2;
  iVar3 = FUN_2c62bdd8(uVar4,0x10,puVar2);
  puVar2[1] = iVar3;
  if (iVar3 == 0) {
    FUN_2c62bea8(puVar2);
    puVar2 = (undefined4 *)0x0;
  }
  else {
    if (((int)((uint)*(byte *)(param_1 + 8) << 0x1e) < 0) &&
       (*(uint *)(*(int *)(param_1 + 6) + 0xc) < (uint)((int)*param_1 * (int)param_1[1]))) {
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
    }
    puVar2[0xc] = 0xffffffff;
    *(undefined1 *)((int)puVar2 + 0x2d) = 0;
    iVar3 = FUN_2c620d24();
    if (iVar3 == 0) {
      uVar4 = FUN_2c62ee64(5);
      uVar5 = FUN_2c62ee64(0);
      uVar4 = FUN_2c61d868(puVar2,uVar4,uVar5,0,DAT_2c62a460);
      puVar2[2] = uVar4;
    }
    else {
      uVar4 = FUN_2c620d0c();
      puVar2[2] = uVar4;
    }
    uVar4 = FUN_2c606a10(0);
    puVar2[4] = uVar4;
    uVar4 = FUN_2c606a10(0);
    puVar2[7] = uVar4;
    uVar4 = FUN_2c606a10(0);
    puVar2[8] = uVar4;
    uVar5 = FUN_2c606a10(0);
    uVar4 = DAT_2c62a45c;
    puVar2[9] = uVar5;
    FUN_2c603a04(puVar2[7],0,uVar4);
    FUN_2c603a04(puVar2[8],0,DAT_2c62a45c);
    FUN_2c603a04(puVar2[9],0,DAT_2c62a45c);
    FUN_2c606abc(puVar2[7],2);
    FUN_2c606abc(puVar2[8],2);
    FUN_2c606abc(puVar2[9],2);
    FUN_2c60497c(puVar2[7],0);
    FUN_2c60497c(puVar2[8],0);
    FUN_2c60497c(puVar2[9],0);
    FUN_2c607df0(puVar2[4]);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = puVar2;
    }
    uVar4 = puVar2[1];
    *puVar1 = puVar6;
    FUN_2c62be5c(uVar4);
  }
  return puVar2;
}

