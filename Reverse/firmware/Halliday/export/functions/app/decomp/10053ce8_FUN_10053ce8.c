/* FUN_10053ce8 @ 0x10053ce8 */

undefined4 FUN_10053ce8(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  
  iVar6 = FUN_10119e92();
  iVar7 = FUN_10119e92(param_1,*(undefined4 *)(param_1 + 8));
  if (iVar7 < iVar6) {
    FUN_10119dc2(DAT_10053dd0,DAT_10053dcc,0xaf);
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0);
    }
    software_interrupt(2);
  }
  uVar11 = DAT_10053dd0;
  iVar13 = param_1 + iVar6 * 4;
  iVar7 = *(int *)(iVar13 + 0x10);
  if (iVar7 != 0) {
    iVar12 = 3;
    do {
      uVar10 = *(undefined4 *)(iVar13 + 0x10);
      uVar8 = FUN_10119e3a(param_1,uVar10);
      if (param_2 <= uVar8) {
        FUN_10053c24(param_1,uVar10,iVar6);
        return uVar10;
      }
      iVar9 = FUN_10119e24(param_1,uVar10,3);
      *(int *)(iVar13 + 0x10) = iVar9;
      if (iVar9 == 0) {
        FUN_10119dc2(uVar11,DAT_10053dcc,0xc9);
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(0);
        }
        software_interrupt(2);
      }
      iVar12 = iVar12 + -1;
    } while ((iVar12 != 0) && (iVar7 != *(int *)(iVar13 + 0x10)));
  }
  uVar8 = -1 << (iVar6 + 1U & 0xff) & *(uint *)(param_1 + 0xc);
  uVar11 = 0;
  if (uVar8 != 0) {
    bVar3 = (byte)uVar8;
    bVar4 = (byte)(uVar8 >> 8);
    bVar5 = (byte)(uVar8 >> 0x10);
    bVar2 = (byte)(uVar8 >> 0x18);
    iVar6 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1) <<
                                     1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                  bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x18
                    | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1)
                                       << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                    bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                      0x10 | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                              bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                            bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                          bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8 |
                    (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) <<
                                     1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                  bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7));
    iVar7 = iVar6 + 4;
    uVar11 = *(undefined4 *)(param_1 + iVar7 * 4);
    FUN_10053c24(param_1,uVar11,iVar6,iVar7,param_4);
    uVar8 = FUN_10119e3a(param_1,uVar11);
    if (uVar8 < param_2) {
      FUN_10119dc2(DAT_10053dd0,DAT_10053dcc,0xd7);
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0);
      }
      software_interrupt(2);
    }
  }
  return uVar11;
}

