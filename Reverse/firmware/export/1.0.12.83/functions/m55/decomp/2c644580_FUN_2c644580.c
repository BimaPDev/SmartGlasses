/* FUN_2c644580 @ 0x2c644580 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c644580(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_r3;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = _LAB_2c6445e0;
  iVar3 = *(int *)(_LAB_2c6445e0 + 0x44);
  if (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 0x10) + -1;
    *(int *)(iVar3 + 0x10) = iVar2;
    while (iVar2 == 0) {
      uVar4 = 0;
      if (*(int *)(iVar3 + 0xc) != 0) {
        *(undefined4 *)(*(int *)(iVar3 + 0xc) + 8) = *(undefined4 *)(iVar3 + 8);
        uVar4 = *(undefined4 *)(iVar3 + 0xc);
      }
      *(undefined4 *)(iVar1 + 0x44) = uVar4;
      iVar2 = FUN_2c6450ec(*(undefined4 *)(iVar1 + 0x4c),iVar3 + 0x18,0,0,in_r3);
      if (iVar2 == 0) {
        if (*(char *)(iVar3 + 3) != '\x01') goto LAB_2c644598;
LAB_2c6445ce:
        func_0x2c644534(iVar3,*(undefined4 *)(iVar3 + 0x14));
        iVar3 = *(int *)(iVar1 + 0x44);
      }
      else {
        func_0x2c6438a0(3,iVar3);
        if (*(char *)(iVar3 + 3) == '\x01') goto LAB_2c6445ce;
LAB_2c644598:
        *(undefined1 *)(iVar3 + 1) = 1;
        iVar3 = *(int *)(iVar1 + 0x44);
      }
      if (iVar3 == 0) {
        return;
      }
      iVar2 = *(int *)(iVar3 + 0x10);
    }
  }
  return;
}

