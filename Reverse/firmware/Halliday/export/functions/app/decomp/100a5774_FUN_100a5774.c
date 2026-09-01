/* FUN_100a5774 @ 0x100a5774 */

undefined4 FUN_100a5774(void)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_20;
  undefined4 local_1c;
  
  pbVar1 = DAT_100a5850;
  uVar8 = *DAT_100a5850 & 1;
  if ((*DAT_100a5850 & 1) == 0) {
    FUN_1013ca1a(DAT_100a5854,uVar8,1);
    FUN_1011ea48(pbVar1 + 0x14,uVar8,0x20);
    pbVar1[0x24] = 0;
    pbVar1[0x25] = 0x10;
    pbVar1[0x26] = 0;
    pbVar1[0x27] = 0;
    *(byte **)(pbVar1 + 0x28) = pbVar1 + 0x34;
    pbVar1[0x2c] = 0xff;
    iVar2 = DAT_100a5858;
    pbVar1[0x2d] = 0xf;
    pbVar1[0x2e] = 0;
    pbVar1[0x2f] = 0;
    *pbVar1 = *pbVar1 & 0xc5 | 0x18;
    uVar3 = DAT_100a5864;
    uVar5 = DAT_100a5860;
    uVar9 = (uint)(DAT_100a585c - iVar2) >> 3;
    pbVar1[1] = (byte)uVar9;
    pbVar1[2] = (byte)uVar8;
    uVar5 = FUN_1011db7e(uVar3,0x800,uVar5,uVar8,uVar8,uVar8,0xe,uVar8,uVar8);
    *(undefined4 *)(pbVar1 + 4) = uVar5;
    FUN_10113564(uVar5,DAT_100a5868);
    FUN_100a60ec();
    uVar5 = FUN_100a61b0(uVar8);
    FUN_10119dc2(DAT_100a586c,uVar5);
    uVar7 = uVar9 + 1 >> 1;
    iVar6 = thunk_FUN_1009f30c(uVar7,DAT_100a5870);
    *(int *)(pbVar1 + 0x104c) = iVar6;
    if (iVar6 != 0) {
      FUN_1011ea48(iVar6,uVar8,uVar7);
      puVar4 = DAT_100a587c;
      for (; uVar9 != uVar8; uVar8 = uVar8 + 1) {
        FUN_1012daac(*puVar4,uVar8 & 0xff,*(undefined1 *)(iVar2 + (uVar8 & 0xff) * 8 + 4));
      }
    }
    *pbVar1 = *pbVar1 | 1;
    local_20 = DAT_100a5874;
    local_1c = DAT_100a5878;
    FUN_100578dc(&local_20);
  }
  return 0;
}

