/* FUN_2c015bac @ 0x2c015bac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c015bac(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = _DAT_2c015bc4;
  if ((((code *)*_DAT_2c015bc4 == (code *)0x0) || (iVar2 = (*(code *)*_DAT_2c015bc4)(), iVar2 == 0))
     && ((code *)puVar1[1] != (code *)0x0)) {
    (*(code *)puVar1[1])();
  }
  return 0;
}

