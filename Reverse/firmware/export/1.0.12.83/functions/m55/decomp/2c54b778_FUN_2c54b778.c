/* FUN_2c54b778 @ 0x2c54b778 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c54b778(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  undefined8 uVar2;
  
  uVar1 = FUN_2c48e738();
  FUN_2c48e5b4(uVar1,_LAB_2c54b8d4,*(undefined4 *)(param_1 + 4));
  FUN_2c48e5b4(uVar1,_LAB_2c54b8d8,*(undefined4 *)(param_1 + 0x1c));
  FUN_2c48e5b4(uVar1,_LAB_2c54b8dc,*(undefined4 *)(param_1 + 0x34));
  FUN_2c48e5b4(uVar1,_LAB_2c54b8e0,*(undefined4 *)(param_1 + 0x4c));
  FUN_2c48e5b4(uVar1,_LAB_2c54b8e4,*(undefined4 *)(param_1 + 0x90));
  FUN_2c48e5b4(uVar1,_LAB_2c54b8e8,*(undefined4 *)(param_1 + 0x78));
  FUN_2c48e518((int)*(undefined8 *)(param_1 + 0x68),uVar1,_LAB_2c54b8ec);
  FUN_2c48e518((int)*(undefined8 *)(param_1 + 0x70),uVar1,_LAB_2c54b8f0);
  FUN_2c48e518((int)*(undefined8 *)(param_1 + 0xa8),uVar1,_LAB_2c54b8f4);
  FUN_2c48e518((int)*(undefined8 *)(param_1 + 0xb0),uVar1,_LAB_2c54b8f8);
  uVar2 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0xb8),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar2,uVar1,_LAB_2c54b8fc);
  uVar2 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0xbc),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar2,uVar1,_LAB_2c54b900);
  uVar2 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0xc0),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar2,uVar1,_LAB_2c54b904);
  uVar2 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0xc4),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar2,uVar1,_LAB_2c54b908);
  uVar2 = VectorSignedToFloat(*(undefined4 *)(param_1 + 200),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar2,uVar1,_LAB_2c54b90c);
  uVar2 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0xcc),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar2,uVar1,_LAB_2c54b910);
  uVar2 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0xd0),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar2,uVar1,_LAB_2c54b914);
  uVar2 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0xd4),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar2,uVar1,_LAB_2c54b918);
  uVar2 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0xd8),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar2,uVar1,_LAB_2c54b91c);
  uVar2 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0xdc),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar2,uVar1,_LAB_2c54b920);
  uVar2 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0xe0),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar2,uVar1,_LAB_2c54b924);
  uVar2 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0xe4),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar2,uVar1,_LAB_2c54b928);
  uVar2 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0xe8),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar2,uVar1,_LAB_2c54b92c);
  uVar2 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0xec),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar2,uVar1,_LAB_2c54b930);
  return uVar1;
}

