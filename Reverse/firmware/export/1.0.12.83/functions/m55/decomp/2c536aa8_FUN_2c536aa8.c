/* FUN_2c536aa8 @ 0x2c536aa8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c536aa8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  undefined4 auStack_58 [2];
  byte *pbStack_50;
  undefined4 uStack_18;
  uint uStack_14;
  
  uVar1 = FUN_2c530d48(param_1 + 0xcc);
  FUN_2c536824(param_1,uVar1,1);
  FUN_2c52b2a8(param_2);
  uStack_14 = (uint)*_LAB_2c536aec;
  if (uStack_14 != 0) {
    return;
  }
  uStack_18 = _LAB_2c536af0;
  pbVar2 = (byte *)FUN_2c5dc53c(6,0x85,0);
  uStack_14 = *DAT_2c5dc6d4;
  if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x33,DAT_2c5dc6e4,DAT_2c5dc6e0,DAT_2c5dc6f4);
  }
  if (*(int *)(pbVar2 + 0x10) == 0) {
    uVar4 = *pbVar2 - 1 & 0xff;
    uVar1 = DAT_2c5dc6f0;
    if (uVar4 < 0x16) {
      uVar1 = *(undefined4 *)(DAT_2c5dc6d8 + uVar4 * 4);
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x37,DAT_2c5dc6e4,DAT_2c5dc6e0,DAT_2c5dc6ec,uVar1);
  }
  FUN_2c62c3b0(auStack_58,0x44);
  auStack_58[0] = 0xb;
  pbStack_50 = pbVar2;
  iVar3 = FUN_2c6419a8(auStack_58);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,*(undefined4 *)(pbVar2 + 0xc));
  }
  uVar4 = *pbVar2 - 1 & 0xff;
  uVar1 = DAT_2c5dc6f0;
  if (uVar4 < 0x16) {
    uVar1 = *(undefined4 *)(DAT_2c5dc6d8 + uVar4 * 4);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x40,DAT_2c5dc6e4,DAT_2c5dc6e0,DAT_2c5dc6dc,uVar1,*(undefined4 *)(pbVar2 + 4));
}

