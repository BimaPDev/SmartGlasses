/* FUN_2c549138 @ 0x2c549138 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c549138(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint in_fpscr;
  undefined8 uVar6;
  
  uVar1 = FUN_2c48e738();
  uVar2 = FUN_2c48e714();
  puVar5 = *(undefined4 **)(param_1 + 8);
  for (puVar4 = *(undefined4 **)(param_1 + 4); puVar4 != puVar5; puVar4 = puVar4 + 1) {
    uVar3 = (*(code *)**(undefined4 **)*puVar4)();
    FUN_2c48e444(uVar2,uVar3);
  }
  FUN_2c48e474(uVar1,_LAB_2c5491a8,uVar2);
  uVar6 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x10),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar6,uVar1,_LAB_2c5491ac);
  uVar6 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x14),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar6,uVar1,_LAB_2c5491b0);
  uVar6 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x18),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar6,uVar1,_LAB_2c5491b4);
  return uVar1;
}

