/* FUN_1000f6f0 @ 0x1000f6f0 */

void FUN_1000f6f0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*DAT_1000f714 != *DAT_1000f714) {
    FUN_1013cdc0();
  }
  iVar3 = *DAT_1000f67c;
  iVar1 = FUN_1000ec38();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = (*(byte *)(iVar1 + 4) & 0x1f) >> 4;
  }
  if (*DAT_1000f67c != iVar3) {
    FUN_1013cdc0(uVar2);
  }
  return;
}

