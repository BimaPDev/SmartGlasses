/* FUN_2c017fa8 @ 0x2c017fa8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c017fa8(int param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  
  if (param_2 != (uint *)0x0) {
    iVar2 = func_0x2c0185cc();
    puVar1 = _DAT_2c017ff0;
    _DAT_2c017ff0[1] = 0;
    *puVar1 = *puVar1 | 1;
    *puVar1 = *puVar1 & 0xfffffffe;
    *param_2 = puVar1[1];
    if (iVar2 == 0) {
      func_0x2c01853c();
    }
  }
  do {
  } while (*(int *)(_DAT_2c017ff4 + 4) == *(int *)(_DAT_2c017ff4 + 4));
  do {
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  return *(int *)(_DAT_2c017ff4 + 4) - *(int *)(_DAT_2c017ff4 + 4);
}

