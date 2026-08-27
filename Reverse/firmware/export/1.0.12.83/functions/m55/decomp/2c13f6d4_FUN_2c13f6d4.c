/* FUN_2c13f6d4 @ 0x2c13f6d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c13f6d4(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = _DAT_2c13f734;
  iVar4 = *(int *)(_DAT_2c13f734 + 0x44);
  if (iVar4 != 0) {
    iVar3 = *(int *)(iVar4 + 0x10) + -1;
    *(int *)(iVar4 + 0x10) = iVar3;
    while (iVar3 == 0) {
      uVar2 = 0;
      if (*(int *)(iVar4 + 0xc) != 0) {
        *(undefined4 *)(*(int *)(iVar4 + 0xc) + 8) = *(undefined4 *)(iVar4 + 8);
        uVar2 = *(undefined4 *)(iVar4 + 0xc);
      }
      *(undefined4 *)(iVar1 + 0x44) = uVar2;
      iVar3 = FUN_2c14006c(*(undefined4 *)(iVar1 + 0x4c),iVar4 + 0x18,0);
      if (iVar3 == 0) {
        if (*(char *)(iVar4 + 3) != '\x01') goto LAB_2c13f6ec;
LAB_2c13f722:
        func_0x2c13f688(iVar4,*(undefined4 *)(iVar4 + 0x14));
        iVar4 = *(int *)(iVar1 + 0x44);
      }
      else {
        func_0x2c13ec68(3,iVar4);
        if (*(char *)(iVar4 + 3) == '\x01') goto LAB_2c13f722;
LAB_2c13f6ec:
        *(undefined1 *)(iVar4 + 1) = 1;
        iVar4 = *(int *)(iVar1 + 0x44);
      }
      if (iVar4 == 0) {
        return;
      }
      iVar3 = *(int *)(iVar4 + 0x10);
    }
  }
  return;
}

