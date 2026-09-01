/* FUN_10039b40 @ 0x10039b40 */

void FUN_10039b40(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *DAT_10039b6c;
  iVar2 = FUN_10039af4();
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = *(undefined1 *)(DAT_10039b70 + 0xb);
  }
  if (*DAT_10039b6c != iVar3) {
    FUN_1013cdc0(uVar1);
  }
  return;
}

