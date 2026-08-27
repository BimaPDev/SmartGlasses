/* FUN_2c54c8ac @ 0x2c54c8ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c54c8ac(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint in_fpscr;
  undefined8 uVar6;
  
  uVar1 = FUN_2c48e738();
  puVar4 = *(undefined4 **)(param_1 + 8);
  if (*(int *)(param_1 + 0xc) - (int)puVar4 == 0x98) {
    iVar3 = (**(code **)*puVar4)(puVar4);
    if (iVar3 == 0) {
      FUN_2c48dea0(uVar1);
      return 0;
    }
    FUN_2c48e474(uVar1,_LAB_2c54c938);
  }
  else {
    uVar2 = FUN_2c48e67c(uVar1,_LAB_2c54c938);
    puVar5 = *(undefined4 **)(param_1 + 0xc);
    puVar4 = *(undefined4 **)(param_1 + 8);
    while (puVar5 != puVar4) {
      iVar3 = (**(code **)*puVar4)(puVar4);
      if (iVar3 == 0) {
        FUN_2c48dea0(uVar1);
        FUN_2c48dea0(uVar2);
        return 0;
      }
      FUN_2c48e444(uVar2);
      puVar4 = puVar4 + 0x26;
    }
  }
  uVar6 = VectorSignedToFloat(*(undefined4 *)(param_1 + 4),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar6,uVar1,_LAB_2c54c93c);
  return uVar1;
}

