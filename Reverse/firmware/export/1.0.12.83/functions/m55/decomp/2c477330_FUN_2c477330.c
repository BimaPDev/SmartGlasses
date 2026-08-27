/* FUN_2c477330 @ 0x2c477330 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c477330(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fpscr;
  undefined8 uVar4;
  undefined1 auStack_2c [16];
  undefined4 uStack_1c;
  
  uStack_1c = *_LAB_2c477408;
  puVar1 = (undefined1 *)FUN_2c46de74();
  FUN_2c66b4b8(auStack_2c,_LAB_2c47740c,puVar1[5],puVar1[4],puVar1[3],puVar1[2],puVar1[1],*puVar1);
  uVar2 = FUN_2c48e738();
  FUN_2c48e5b4(uVar2,_LAB_2c477410,auStack_2c);
  FUN_2c48e518(0,uVar2,_LAB_2c477414);
  FUN_2c48e518(0,uVar2,_LAB_2c477418);
  uVar4 = VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar4,uVar2,_LAB_2c47741c);
  FUN_2c48e518(0,uVar2,_LAB_2c477420);
  uVar2 = FUN_2c48e3e8(uVar2);
  uVar3 = FUN_2c66c4ec();
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x72,_LAB_2c47742c,_LAB_2c477428,_LAB_2c477424,uVar3,uVar2);
}

