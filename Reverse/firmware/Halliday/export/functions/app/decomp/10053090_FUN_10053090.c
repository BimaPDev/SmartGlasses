/* FUN_10053090 @ 0x10053090 */

void FUN_10053090(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *DAT_100530c8;
  uVar1 = DAT_100530d0;
  if ((-1 < (int)(param_1 << 0x18)) && (uVar1 = DAT_100530d4, param_1 < 10)) {
    uVar1 = *(undefined4 *)(DAT_100530cc + param_1 * 4);
  }
  while (*DAT_100530c8 != iVar2) {
    FUN_1013cdc0(uVar1);
    uVar1 = DAT_100530d0;
  }
  return;
}

