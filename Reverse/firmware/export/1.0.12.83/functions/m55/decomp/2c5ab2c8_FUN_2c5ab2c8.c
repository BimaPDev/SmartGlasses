/* FUN_2c5ab2c8 @ 0x2c5ab2c8 */

uint FUN_2c5ab2c8(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_2c5ab29c();
  if (uVar1 != 0) {
    return uVar1;
  }
  iVar2 = FUN_2c5abf68();
  uVar1 = 0;
  if (*(int *)(iVar2 + 0x180) != 0) {
    uVar1 = (uint)*(byte *)(*(int *)(iVar2 + 0x180) + 4);
  }
  return uVar1;
}

