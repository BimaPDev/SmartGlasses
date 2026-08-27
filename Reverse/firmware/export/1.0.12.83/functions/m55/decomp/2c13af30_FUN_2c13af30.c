/* FUN_2c13af30 @ 0x2c13af30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c13af30(void)

{
  undefined4 uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*(int *)(*(int *)(_DAT_2c13af50 + 0x18) + 0x10) + 4);
  uVar1 = 0;
  if (pcVar2 != (code *)0x0) {
    uVar1 = (*pcVar2)();
    if (*_DAT_2c13af54 != 0) {
      func_0x2c13f9c8(*_DAT_2c13af54);
    }
  }
  return uVar1;
}

