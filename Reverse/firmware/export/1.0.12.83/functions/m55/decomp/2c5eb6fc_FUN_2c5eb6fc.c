/* FUN_2c5eb6fc @ 0x2c5eb6fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5eb6fc(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = _LAB_2c5eb71c;
  iVar2 = *_LAB_2c5eb71c;
  iVar3 = *(int *)(iVar2 + 0x54);
  if (*(int *)(iVar2 + 0x54) != 0) {
    do {
      iVar2 = *(int *)(iVar3 + 0x54);
      FUN_2c62bea8(iVar3);
      iVar3 = iVar2;
    } while (iVar2 != 0);
    iVar2 = *piVar1;
  }
  *(undefined4 *)(iVar2 + 0x54) = 0;
  *(undefined1 *)(piVar1 + 1) = 0;
  return;
}

