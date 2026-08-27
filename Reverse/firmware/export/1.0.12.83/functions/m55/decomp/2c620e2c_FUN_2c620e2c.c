/* FUN_2c620e2c @ 0x2c620e2c */

undefined4 * FUN_2c620e2c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)lv_mem_alloc(0x50);
  FUN_2c62c3b0(puVar1,0x50);
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  *puVar1 = *param_1;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  puVar1[4] = param_1[4];
  FUN_2c62a554(puVar1 + 5);
  uVar2 = DAT_2c620e84;
  *(undefined1 *)(puVar1 + 5) = *(undefined1 *)param_1;
  puVar1[6] = uVar2;
  puVar1[8] = puVar1;
  uVar2 = FUN_2c62bdd8(DAT_2c620e88,puVar1[1],puVar1);
  puVar1[0x12] = uVar2;
  FUN_2c62be40();
  uVar2 = FUN_2c62a574(puVar1 + 5);
  puVar1[0x11] = uVar2;
  return puVar1;
}

