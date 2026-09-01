/* FUN_1009aa6c @ 0x1009aa6c */

void FUN_1009aa6c(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_1009aa88;
  uVar2 = *(uint *)(DAT_1009aa88 + 0x34);
  if (uVar2 < *(uint *)(DAT_1009aa88 + 0x38)) {
    FUN_1011e89a(uVar2,*(uint *)(DAT_1009aa88 + 0x38) - uVar2);
    FUN_1011e8f6();
    *(undefined4 *)(iVar1 + 0x38) = 0;
  }
  return;
}

