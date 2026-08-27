/* FUN_2c5bafca @ 0x2c5bafca */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5bafca(int param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  char in_ZR;
  undefined4 auStack_58 [2];
  byte *pbStack_50;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  puVar4 = _LAB_2c5baffc;
  if ((in_ZR == '\0') && (puVar4 = _LAB_2c5bb004, param_1 != 0xd3)) {
    return;
  }
  uStack_10 = _DAT_2c5bb000;
  pbVar1 = (byte *)FUN_2c5dc53c(6,*puVar4,0);
  uStack_14 = *DAT_2c5dc6d4;
  if (pbVar1 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x33,DAT_2c5dc6e4,DAT_2c5dc6e0,DAT_2c5dc6f4);
  }
  if (*(int *)(pbVar1 + 0x10) != 0) {
    FUN_2c62c3b0(auStack_58,0x44);
    auStack_58[0] = 0xb;
    pbStack_50 = pbVar1;
    iVar2 = FUN_2c6419a8(auStack_58);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,*(undefined4 *)(pbVar1 + 0xc));
    }
    uVar5 = *pbVar1 - 1 & 0xff;
    uVar3 = DAT_2c5dc6f0;
    if (uVar5 < 0x16) {
      uVar3 = *(undefined4 *)(DAT_2c5dc6d8 + uVar5 * 4);
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x40,DAT_2c5dc6e4,DAT_2c5dc6e0,DAT_2c5dc6dc,uVar3,*(undefined4 *)(pbVar1 + 4));
  }
  uVar5 = *pbVar1 - 1 & 0xff;
  uVar3 = DAT_2c5dc6f0;
  if (uVar5 < 0x16) {
    uVar3 = *(undefined4 *)(DAT_2c5dc6d8 + uVar5 * 4);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x37,DAT_2c5dc6e4,DAT_2c5dc6e0,DAT_2c5dc6ec,uVar3);
}

