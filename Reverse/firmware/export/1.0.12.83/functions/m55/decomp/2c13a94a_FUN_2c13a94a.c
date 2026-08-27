/* FUN_2c13a94a @ 0x2c13a94a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c13a94a(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool in_ZR;
  bool in_CY;
  
  puVar1 = _DAT_2c13a988;
  if (in_CY && !in_ZR) {
    return 0;
  }
  FUN_2c13f29c(*_DAT_2c13a988,0xffffffff);
  uVar2 = 0;
  if (*(char *)(_DAT_2c13a98c + param_1 * 0xc + 4) != '\0') {
    pcVar3 = *(code **)(*(int *)(_DAT_2c13a98c + param_1 * 0xc) + 0xc);
    uVar2 = 0;
    if (pcVar3 != (code *)0x0) {
      uVar2 = (*pcVar3)();
    }
  }
  FUN_2c13f2d8(*puVar1);
  return uVar2;
}

