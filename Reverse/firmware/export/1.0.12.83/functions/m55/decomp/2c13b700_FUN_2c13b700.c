/* FUN_2c13b700 @ 0x2c13b700 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c13b700(void)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = _DAT_2c13b740;
  if (*_DAT_2c13b740 != 0) {
    FUN_2c13b264(0x118,0);
    uVar2 = FUN_2c13b264(0x114,0xffffffff);
    *piVar1 = 0;
    return uVar2;
  }
  FUN_2c135988(4,0x179,_DAT_2c13b74c,_DAT_2c13b748,_DAT_2c13b744);
  return 1;
}

