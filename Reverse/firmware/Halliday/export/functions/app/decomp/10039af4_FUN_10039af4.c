/* FUN_10039af4 @ 0x10039af4 */

void FUN_10039af4(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *DAT_10039b38;
  if (3 < *(byte *)(DAT_10039b3c + 1) - 1) goto LAB_10039b2c;
  if (3 < *(byte *)(DAT_10039b3c + 2) - 1) goto LAB_10039b2c;
  if (*(byte *)(DAT_10039b3c + 3) - 1 < 4) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  while (*DAT_10039b38 != iVar2) {
    FUN_1013cdc0(uVar1);
LAB_10039b2c:
    uVar1 = 0;
  }
  return;
}

