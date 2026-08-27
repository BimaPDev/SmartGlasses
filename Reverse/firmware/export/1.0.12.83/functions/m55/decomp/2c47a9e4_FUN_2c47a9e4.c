/* FUN_2c47a9e4 @ 0x2c47a9e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c47a9e4(void)

{
  int iVar1;
  
  iVar1 = FUN_2c6440f0();
  *_LAB_2c47aa2c = iVar1;
  if (iVar1 == 0) {
    FUN_2c6741e8(0x711,_LAB_2c47aa3c,_LAB_2c47aa38);
    return 0;
  }
  iVar1 = FUN_2c6440f0(_LAB_2c47aa30,0);
  *_LAB_2c47aa34 = iVar1;
  if (iVar1 != 0) {
    return 1;
  }
  FUN_2c6741e8(0x711,_LAB_2c47aa40,_LAB_2c47aa38);
  return 0;
}

