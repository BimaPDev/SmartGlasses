/* FUN_100b96d4 @ 0x100b96d4 */

bool FUN_100b96d4(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  uint local_1c;
  
  pbVar1 = DAT_100b986c;
  iVar2 = DAT_100b9868;
  iVar10 = DAT_100b9868 + 2;
  pbVar11 = (byte *)(DAT_100b9868 + 0x84);
  while (iVar3 = FUN_100b92f0(&local_1c), iVar3 != 0) {
    while( true ) {
      iVar3 = FUN_100b993c();
      if (iVar3 == 0) goto LAB_100b97a0;
      uVar9 = local_1c & 3;
      iVar3 = FUN_100b99c0(pbVar1 + (uVar9 + (uint)*pbVar1 * 4 + 0x19ae) * 2);
      if (iVar3 == 0) break;
      iVar3 = FUN_100b99c0(pbVar1 + (*pbVar1 + 0x180c) * 2);
      if (iVar3 == 0) {
        FUN_100b95ec(uVar9);
        iVar3 = *(int *)(pbVar1 + 0x14);
      }
      else {
        iVar3 = FUN_100b99c0(pbVar1 + (*pbVar1 + 0x1818) * 2);
        if (iVar3 == 0) {
          iVar3 = FUN_100b99c0(pbVar1 + (uVar9 + (uint)*pbVar1 * 4 + 0x1824) * 2);
          if (iVar3 == 0) {
            iVar3 = 1;
            if (*pbVar1 < 7) {
              bVar6 = 9;
            }
            else {
              bVar6 = 0xb;
            }
            pbVar1[0x14] = 1;
            pbVar1[0x15] = 0;
            pbVar1[0x16] = 0;
            pbVar1[0x17] = 0;
            *pbVar1 = bVar6;
            goto LAB_100b9788;
          }
          pbVar1[0x14] = 2;
          pbVar1[0x15] = 0;
          pbVar1[0x16] = 0;
          pbVar1[0x17] = 0;
          iVar3 = FUN_100b99c0(iVar2);
          if (iVar3 == 0) {
            uVar7 = 8;
            pbVar4 = pbVar1 + uVar9 * 0x10 + 0x30dc;
          }
          else {
            iVar3 = FUN_100b99c0(iVar10);
            iVar8 = *(int *)(pbVar1 + 0x14);
            if (iVar3 != 0) goto LAB_100b983e;
            uVar7 = 8;
            pbVar4 = pbVar1 + uVar9 * 0x10 + 0x311c;
            *(int *)(pbVar1 + 0x14) = iVar8 + 8;
          }
        }
        else {
          iVar3 = FUN_100b99c0(pbVar1 + (*pbVar1 + 0x1854) * 2);
          if (iVar3 == 0) {
            uVar7 = *(undefined4 *)(pbVar1 + 8);
          }
          else {
            iVar3 = FUN_100b99c0(pbVar1 + (*pbVar1 + 0x1860) * 2);
            uVar7 = *(undefined4 *)(pbVar1 + 0xc);
            if (iVar3 != 0) {
              uVar7 = *(undefined4 *)(pbVar1 + 0x10);
              *(undefined4 *)(pbVar1 + 0x10) = *(undefined4 *)(pbVar1 + 0xc);
            }
            *(undefined4 *)(pbVar1 + 0xc) = *(undefined4 *)(pbVar1 + 8);
          }
          uVar5 = *(undefined4 *)(pbVar1 + 4);
          *(undefined4 *)(pbVar1 + 4) = uVar7;
          *(undefined4 *)(pbVar1 + 8) = uVar5;
          pbVar1[0x14] = 2;
          pbVar1[0x15] = 0;
          pbVar1[0x16] = 0;
          pbVar1[0x17] = 0;
          iVar3 = FUN_100b99c0(iVar2);
          if (iVar3 == 0) {
            uVar7 = 8;
            pbVar4 = pbVar1 + uVar9 * 0x10 + 0x30dc;
          }
          else {
            iVar3 = FUN_100b99c0(iVar10);
            iVar8 = *(int *)(pbVar1 + 0x14);
            if (iVar3 == 0) {
              uVar7 = 8;
              *(int *)(pbVar1 + 0x14) = iVar8 + 8;
              pbVar4 = pbVar1 + uVar9 * 0x10 + 0x311c;
            }
            else {
LAB_100b983e:
              uVar7 = 0x100;
              *(int *)(pbVar1 + 0x14) = iVar8 + 0x10;
              pbVar4 = pbVar11;
            }
          }
        }
        iVar3 = FUN_100b9a34(pbVar4,uVar7);
        if (*pbVar1 < 7) {
          bVar6 = 8;
        }
        else {
          bVar6 = 0xb;
        }
        iVar3 = iVar3 + *(int *)(pbVar1 + 0x14);
        *(int *)(pbVar1 + 0x14) = iVar3;
        *pbVar1 = bVar6;
      }
LAB_100b9788:
      iVar3 = FUN_100b9338(iVar3,*(int *)(pbVar1 + 4) + 1);
      if (iVar3 == 0) {
        return false;
      }
      pbVar1[0x14] = 0;
      pbVar1[0x15] = 0;
      pbVar1[0x16] = 0;
      pbVar1[0x17] = 0;
      iVar3 = FUN_100b92f0(&local_1c);
      if (iVar3 == 0) goto LAB_100b97a0;
    }
    FUN_100b9590();
  }
LAB_100b97a0:
  FUN_100b9988();
  return *(int *)(pbVar1 + 0x14) == 0;
}

