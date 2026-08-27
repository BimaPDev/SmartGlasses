/* FUN_2c54f490 @ 0x2c54f490 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c54f490(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint in_fpscr;
  undefined8 uVar6;
  
  uVar2 = FUN_2c48e738();
  FUN_2c48e5b4(uVar2,_LAB_2c54f504,*(undefined4 *)(param_1 + 100));
  FUN_2c48e5b4(uVar2,_LAB_2c54f508,*(undefined4 *)(param_1 + 0x7c));
  FUN_2c48e5b4(uVar2,_LAB_2c54f50c,*(undefined4 *)(param_1 + 0x94));
  uVar6 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0xac),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar6,uVar2,_LAB_2c54f510);
  uVar3 = FUN_2c48e67c(uVar2,_LAB_2c54f514);
  puVar5 = *(undefined4 **)(param_1 + 0xb4);
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  while( true ) {
    if (puVar1 == puVar5) {
      return uVar2;
    }
    iVar4 = (**(code **)*puVar1)(puVar1);
    if (iVar4 == 0) break;
    FUN_2c48e444(uVar3);
    puVar1 = puVar1 + 0x16;
  }
  FUN_2c48dea0(uVar2);
  return 0;
}

