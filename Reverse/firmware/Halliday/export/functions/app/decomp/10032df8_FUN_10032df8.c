/* FUN_10032df8 @ 0x10032df8 */

void FUN_10032df8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *DAT_10032e30;
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*(uint *)(iVar1 + 0x160) < *(uint *)(iVar1 + 0x164)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  if (*DAT_10032e2c != *DAT_10032e2c) {
    FUN_1013cdc0(uVar2);
  }
  return;
}

