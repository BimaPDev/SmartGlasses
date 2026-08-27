/* FUN_2c13aa30 @ 0x2c13aa30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c13aa30(int param_1,int param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = _DAT_2c13aa70;
  if (param_2 != 0) {
    FUN_2c13f29c(*_DAT_2c13aa70,0xffffffff);
    if ((*(char *)(_DAT_2c13aa74 + param_1 * 0xc + 4) != '\0') &&
       (pcVar2 = *(code **)(*(int *)(_DAT_2c13aa74 + param_1 * 0xc) + 0x10), pcVar2 != (code *)0x0))
    {
      (*pcVar2)(param_2);
    }
    FUN_2c13f2d8(*puVar1);
    return 1;
  }
  return 0;
}

