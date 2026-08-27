/* FUN_2c5c68a8 @ 0x2c5c68a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c68a8(void)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 auStack_58 [2];
  byte *pbStack_50;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_10 = _LAB_2c5c68c0;
  pbVar1 = (byte *)FUN_2c5dc53c();
  uStack_14 = *DAT_2c5dc6d4;
  if (pbVar1 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x33,DAT_2c5dc6e4,DAT_2c5dc6e0,DAT_2c5dc6f4);
  }
  if (*(int *)(pbVar1 + 0x10) == 0) {
    uVar4 = *pbVar1 - 1 & 0xff;
    uVar3 = DAT_2c5dc6f0;
    if (uVar4 < 0x16) {
      uVar3 = *(undefined4 *)(DAT_2c5dc6d8 + uVar4 * 4);
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x37,DAT_2c5dc6e4,DAT_2c5dc6e0,DAT_2c5dc6ec,uVar3);
  }
  FUN_2c62c3b0(auStack_58,0x44);
  auStack_58[0] = 0xb;
  pbStack_50 = pbVar1;
  iVar2 = FUN_2c6419a8(auStack_58);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,*(undefined4 *)(pbVar1 + 0xc));
  }
  uVar4 = *pbVar1 - 1 & 0xff;
  uVar3 = DAT_2c5dc6f0;
  if (uVar4 < 0x16) {
    uVar3 = *(undefined4 *)(DAT_2c5dc6d8 + uVar4 * 4);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x40,DAT_2c5dc6e4,DAT_2c5dc6e0,DAT_2c5dc6dc,uVar3,*(undefined4 *)(pbVar1 + 4));
}

