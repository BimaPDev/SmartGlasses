/* FUN_2c47095c @ 0x2c47095c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c47095c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fpscr;
  undefined8 uVar3;
  
  uVar1 = FUN_2c48e738();
  FUN_2c48e5b4(uVar1,_LAB_2c470a04,_LAB_2c470a00);
  uVar2 = _LAB_2c470a0c;
  uVar3 = VectorSignedToFloat(*_LAB_2c470a08,(byte)(in_fpscr >> 0x16) & 3);
  *_LAB_2c470a08 = *_LAB_2c470a08 + 1;
  FUN_2c48e518((int)uVar3,uVar1,uVar2);
  uVar2 = FUN_2c48e3e8(uVar1);
  uVar1 = FUN_2c66c4ec();
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x414,_LAB_2c470a18,_LAB_2c470a14,_LAB_2c470a10,uVar1,uVar2);
}

