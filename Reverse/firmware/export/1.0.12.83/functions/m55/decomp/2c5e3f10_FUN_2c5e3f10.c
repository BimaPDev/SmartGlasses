/* FUN_2c5e3f10 @ 0x2c5e3f10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5e3f10(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  cVar1 = *_LAB_2c5e3f74;
  *_LAB_2c5e3f78 = 0;
  piVar2 = _LAB_2c5e3f7c;
  if (cVar1 == '\0') {
    FUN_2c5e3d2c();
    iVar4 = *piVar2;
  }
  else {
    FUN_2c62be4c(*_LAB_2c5e3f7c);
    FUN_2c62be74(*piVar2);
    uVar3 = *_LAB_2c5e3f80;
    *_LAB_2c5e3f84 = 1;
    FUN_2c6043d8(uVar3);
    FUN_2c5e3d2c(param_1);
    iVar4 = *piVar2;
  }
  if (iVar4 != 0) {
    return;
  }
  uVar3 = FUN_2c62a470();
  iVar4 = FUN_2c62bdd8(_LAB_2c5e3f88,3000,uVar3);
  *piVar2 = iVar4;
  *(undefined4 *)(iVar4 + 0x10) = 0xffffffff;
  return;
}

