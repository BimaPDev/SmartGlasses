/* FUN_2c13b750 @ 0x2c13b750 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c13b750(void)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = _DAT_2c13b794;
  if (*_DAT_2c13b794 != 1) {
    FUN_2c13b264(0x118,0xf0f);
    uVar2 = FUN_2c13b264(0x114,0xffffffff);
    *piVar1 = 1;
    return uVar2;
  }
  FUN_2c135988(4,0x16a,_DAT_2c13b7a0,_DAT_2c13b79c,_DAT_2c13b798);
  return 1;
}

