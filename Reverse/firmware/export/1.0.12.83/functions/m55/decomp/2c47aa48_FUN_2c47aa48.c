/* FUN_2c47aa48 @ 0x2c47aa48 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c47aa48(void)

{
  int iVar1;
  
  iVar1 = FUN_2c6442a4();
  *_LAB_2c47aa8c = iVar1;
  if (iVar1 == 0) {
    FUN_2c6741e8(0x710,_LAB_2c47aa98);
    return 0;
  }
  iVar1 = FUN_2c6442a4(_LAB_2c47aa90,0);
  *_LAB_2c47aa94 = iVar1;
  if (iVar1 != 0) {
    return 1;
  }
  FUN_2c6741e8(0x710,_LAB_2c47aa9c);
  return 0;
}

