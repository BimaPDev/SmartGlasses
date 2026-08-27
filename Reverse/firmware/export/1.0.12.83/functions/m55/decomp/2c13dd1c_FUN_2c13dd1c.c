/* FUN_2c13dd1c @ 0x2c13dd1c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c13dd1c(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = FUN_2c14486c();
  puVar3 = _DAT_2c13dd78;
  puVar2 = _DAT_2c13dd74;
  puVar1 = _DAT_2c13dd70;
  iVar6 = _DAT_2c13dd6c;
  if (*_DAT_2c13dd68 == '\0') {
    while( true ) {
      iVar6 = (*(code *)*puVar2)(*puVar1);
      if (iVar6 == 0) {
        return;
      }
      iVar6 = FUN_2c14486c();
      if (0xc7f < (uint)(iVar6 - iVar4)) break;
      (*(code *)*puVar3)();
    }
  }
  else {
    do {
      if (*(short *)(iVar6 + 0x10) == *(short *)(iVar6 + 0x12)) {
        return;
      }
      iVar5 = FUN_2c14486c();
    } while ((uint)(iVar5 - iVar4) < 0xc80);
  }
  return;
}

