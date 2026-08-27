/* FUN_2c4e6ae8 @ 0x2c4e6ae8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e6ae8(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  iVar3 = func_0x2c4efeec(*param_2);
  iVar4 = func_0x2c4e9434();
  iVar4 = (**(code **)(iVar4 + 0x18))();
  piVar2 = _LAB_2c4e6b88;
  pcVar1 = _LAB_2c4e6b84;
  if (iVar4 == 0) {
    return _LAB_2c4e6b98;
  }
  if (iVar3 != 1) {
    if (*_LAB_2c4e6b84 != '\0') {
      if ((*_LAB_2c4e6b88 != 0) && (iVar3 = func_0x2c644928(), iVar3 == 1)) {
        FUN_2c6448f0(*piVar2);
      }
      iVar3 = func_0x2c4e9434();
      (**(code **)(iVar3 + 0x14))();
      iVar3 = func_0x2c4e9434();
      (**(code **)(iVar3 + 4))();
    }
    uVar5 = _LAB_2c4e6b94;
    *pcVar1 = '\0';
    return uVar5;
  }
  if (*_LAB_2c4e6b84 != '\0') goto LAB_2c4e6b32;
  iVar3 = *_LAB_2c4e6b88;
  if (iVar3 == 0) {
    iVar3 = func_0x2c644870(_LAB_2c4e6b9c,0,0,0);
    *piVar2 = iVar3;
    if (iVar3 != 0) goto LAB_2c4e6b0e;
  }
  else {
LAB_2c4e6b0e:
    uVar5 = func_0x2c4f00ec(30000);
    FUN_2c6448b4(iVar3,uVar5);
  }
  puVar6 = (undefined4 *)func_0x2c4e9434();
  (*(code *)*puVar6)(_LAB_2c4e6b8c);
  iVar3 = func_0x2c4e9434();
  (**(code **)(iVar3 + 0x10))();
LAB_2c4e6b32:
  uVar5 = _LAB_2c4e6b90;
  *pcVar1 = '\x01';
  return uVar5;
}

