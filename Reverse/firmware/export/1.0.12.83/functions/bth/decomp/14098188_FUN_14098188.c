/* FUN_14098188 @ 0x14098188 */

void FUN_14098188(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    iVar1 = FUN_1407f720();
    uVar3 = iVar1 - 3U & 0xff;
    if (uVar3 < 5) {
      uVar3 = (uint)*(byte *)(DAT_14097780 + uVar3);
    }
    else {
      uVar3 = 0;
    }
    uVar2 = FUN_1407f728(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x45,DAT_1409778c,DAT_14097788,iVar1,uVar2,uVar3,
                 *(undefined4 *)(DAT_14097784 + uVar3 * 4));
  }
  return;
}

