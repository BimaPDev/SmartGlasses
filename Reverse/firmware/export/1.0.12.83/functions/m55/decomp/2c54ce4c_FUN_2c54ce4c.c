/* FUN_2c54ce4c @ 0x2c54ce4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c54ce4c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fpscr;
  undefined8 uVar3;
  
  uVar1 = FUN_2c48e738();
  uVar2 = FUN_2c54c810(param_1 + 4);
  FUN_2c48e474(uVar1,_LAB_2c54cf0c,uVar2);
  uVar2 = FUN_2c48e738();
  uVar3 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x60),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar3,uVar2,_LAB_2c54cf10);
  FUN_2c48e474(uVar1,_LAB_2c54cf14,uVar2);
  FUN_2c48e4c8(uVar1,_LAB_2c54cf18,*(undefined1 *)(param_1 + 100));
  FUN_2c48e4c8(uVar1,_LAB_2c54cf1c,*(undefined1 *)(param_1 + 0x65));
  uVar3 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x68),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar3,uVar1,_LAB_2c54cf20);
  uVar3 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x6c),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar3,uVar1,_LAB_2c54cf24);
  uVar3 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x70),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar3,uVar1,_LAB_2c54cf28);
  FUN_2c48e5b4(uVar1,_LAB_2c54cf2c,*(undefined4 *)(param_1 + 0x74));
  uVar3 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x8c),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar3,uVar1,_LAB_2c54cf30);
  uVar3 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x90),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar3,uVar1,_LAB_2c54cf34);
  FUN_2c48e4c8(uVar1,_LAB_2c54cf38,*(undefined1 *)(param_1 + 0x94));
  return uVar1;
}

