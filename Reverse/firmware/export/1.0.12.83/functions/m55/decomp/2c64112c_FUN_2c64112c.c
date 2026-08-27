/* FUN_2c64112c @ 0x2c64112c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c64112c(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  pcVar1 = _LAB_2c641168;
  *_LAB_2c641168 = '\x01';
  iVar2 = FUN_2c6410f0();
  if ((iVar2 != 0) && (*pcVar1 != '\0')) {
    for (puVar3 = (undefined4 *)*_LAB_2c641170; puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[1]) {
      (*(code *)*puVar3)(0);
    }
  }
  puVar3 = _LAB_2c64116c;
  FUN_2c62be40(*_LAB_2c64116c);
  FUN_2c62be74(*puVar3);
  *pcVar1 = '\0';
  return;
}

