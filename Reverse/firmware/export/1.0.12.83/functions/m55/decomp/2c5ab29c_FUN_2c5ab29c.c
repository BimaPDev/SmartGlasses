/* FUN_2c5ab29c @ 0x2c5ab29c */

byte FUN_2c5ab29c(void)

{
  byte bVar1;
  int iVar2;
  
  FUN_2c5abf68();
  iVar2 = func_0x2c5ac3f0();
  if (iVar2 != 0) {
    FUN_2c5abf68();
    iVar2 = func_0x2c5ac4a4();
    if (iVar2 == 0) {
      FUN_2c5abf68();
      bVar1 = FUN_2c5ac3d0();
      return bVar1 ^ 1;
    }
  }
  return 0;
}

