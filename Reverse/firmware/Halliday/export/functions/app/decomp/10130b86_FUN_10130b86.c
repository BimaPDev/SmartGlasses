/* FUN_10130b86 @ 0x10130b86 */

undefined4 FUN_10130b86(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint local_4c;
  int local_48;
  uint local_44;
  undefined1 auStack_40 [8];
  undefined4 local_38;
  undefined4 local_30;
  
  iVar13 = 0;
  iVar11 = *(int *)(param_1 + 0xc);
  pcVar6 = *(code **)(iVar11 + 0xa8);
  iVar14 = iVar11 + 0x84;
  do {
    bVar1 = *(byte *)(param_1 + 0xa2);
    if (((bVar1 & 0x18) == 0) || (uVar12 = bVar1 & 4, (bVar1 & 4) != 0)) {
      return 0xffffffc3;
    }
    iVar10 = *(int *)(param_1 + 0xc);
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar4 = *(int *)(iVar10 + 0xb0);
      if (*(int *)(param_1 + 0xa4) == 0) {
        iVar3 = FUN_101309b2(param_1,iVar10 + 100,iVar4);
      }
      else {
        FUN_1011ea48(auStack_40,0,0x18);
        local_44 = *(int *)(param_1 + 0xac) + (uint)*(ushort *)(param_1 + 0xc2) * 2;
        local_38 = *(undefined4 *)(iVar10 + 0x74);
        local_48 = *(int *)(param_1 + 0xa8) + (uint)*(ushort *)(param_1 + 0xc2) * 2;
        while (uVar12 = (uint)*(ushort *)(param_1 + 0xc4), uVar12 != 0) {
          iVar3 = *(int *)(iVar10 + 0x78);
          uVar7 = iVar4 - iVar3;
          if ((int)uVar7 < 1) {
            iVar3 = 0;
            goto LAB_10130c4c;
          }
          if ((int)uVar7 <= (int)uVar12) {
            uVar12 = uVar7;
          }
          iVar8 = *(int *)(iVar10 + 0x68);
          FUN_1011ea40(*(int *)(iVar10 + 100) + iVar3 * 2,
                       *(int *)(param_1 + 0xb0) + (uint)*(ushort *)(param_1 + 0xc6) * 2);
          if (1 < *(int *)(iVar10 + 0x74)) {
            FUN_1011ea40(iVar8 + iVar3 * 2,
                         *(int *)(param_1 + 0xb4) + (uint)*(ushort *)(param_1 + 0xc6) * 2,
                         uVar12 << 1);
          }
          sVar2 = *(short *)(param_1 + 0xc6);
          *(uint *)(iVar10 + 0x78) = *(int *)(iVar10 + 0x78) + uVar12;
          sVar5 = *(short *)(param_1 + 0xc4) - (short)uVar12;
          *(short *)(param_1 + 0xc4) = sVar5;
          *(short *)(param_1 + 0xc6) = (short)uVar12 + sVar2;
          if (sVar5 == 0) {
            *(undefined2 *)(param_1 + 0xc6) = 0;
          }
        }
        iVar3 = FUN_101309b2(param_1,&local_48,
                             *(int *)(param_1 + 0xb8) - (uint)*(ushort *)(param_1 + 0xc0));
        if (0 < iVar3) {
          *(short *)(param_1 + 0xc0) = *(short *)(param_1 + 0xc0) + (short)iVar3;
          *(short *)(param_1 + 0xc2) = (short)iVar3 + *(short *)(param_1 + 0xc2);
        }
        if ((uint)*(ushort *)(param_1 + 0xc0) == *(uint *)(param_1 + 0xb8)) {
          iVar8 = FUN_1012f5ae(*(undefined4 *)(param_1 + 0xa4),*(undefined1 *)(param_1 + 0x9d),
                               param_1 + 0xb0,param_1 + 0xa8,(uint)*(ushort *)(param_1 + 0xc0));
          if (0 < iVar8) {
            *(short *)(param_1 + 0xc4) = (short)iVar8 + *(short *)(param_1 + 0xc4);
          }
          *(undefined4 *)(param_1 + 0xc0) = 0;
        }
        while (uVar12 = (uint)*(ushort *)(param_1 + 0xc4), uVar12 != 0) {
          iVar8 = *(int *)(iVar10 + 0x78);
          uVar7 = iVar4 - iVar8;
          if ((int)uVar7 < 1) break;
          if ((int)uVar12 <= (int)uVar7) {
            uVar7 = uVar12;
          }
          iVar9 = *(int *)(iVar10 + 0x68);
          FUN_1011ea40(*(int *)(iVar10 + 100) + iVar8 * 2,
                       *(int *)(param_1 + 0xb0) + (uint)*(ushort *)(param_1 + 0xc6) * 2);
          if (1 < *(int *)(iVar10 + 0x74)) {
            FUN_1011ea40(iVar8 * 2 + iVar9,
                         *(int *)(param_1 + 0xb4) + (uint)*(ushort *)(param_1 + 0xc6) * 2,uVar7 << 1
                        );
          }
          sVar2 = *(short *)(param_1 + 0xc6);
          *(uint *)(iVar10 + 0x78) = *(int *)(iVar10 + 0x78) + uVar7;
          sVar5 = *(short *)(param_1 + 0xc4) - (short)uVar7;
          *(short *)(param_1 + 0xc4) = sVar5;
          *(short *)(param_1 + 0xc6) = (short)uVar7 + sVar2;
          if (sVar5 == 0) {
            *(undefined2 *)(param_1 + 0xc6) = 0;
          }
        }
      }
    }
    else {
      local_4c = uVar12;
      FUN_1011ea48(&local_48,uVar12);
      local_48 = FUN_1012d4d4(*(undefined4 *)(param_1 + 0x14),&local_4c);
      if (1 < *(int *)(iVar10 + 4)) {
        uVar12 = FUN_1012d4d4(*(undefined4 *)(param_1 + 0x18),uVar12);
      }
      local_38 = *(undefined4 *)(iVar10 + 4);
      local_30 = *(undefined4 *)(iVar10 + 0x7c);
      local_44 = uVar12;
      iVar3 = FUN_101309b2(param_1,&local_48,local_4c >> 1);
      if (0 < iVar3) {
        FUN_1012d4aa(*(undefined4 *)(param_1 + 0x14));
        if (1 < *(int *)(iVar10 + 4)) {
          FUN_1012d4aa(*(undefined4 *)(param_1 + 0x18),iVar3 * 2);
        }
      }
      FUN_1011dbf4(*(int *)(param_1 + 8) + 0x38,0xffffffff);
      while (((uint)((*(int **)(param_1 + 0x1c))[1] - **(int **)(param_1 + 0x1c)) <
              *(uint *)(iVar10 + 0x18) &&
             (iVar4 = FUN_10131070(*(undefined4 *)(param_1 + 0x10)), 0 < iVar4))) {
        iVar3 = iVar3 + iVar4;
      }
      thunk_FUN_10113e2c(*(int *)(param_1 + 8) + 0x38);
      *(uint *)(iVar10 + 0x78) =
           (uint)((*(int **)(param_1 + 0x1c))[1] - **(int **)(param_1 + 0x1c)) >> 1;
    }
LAB_10130c4c:
    iVar10 = FUN_10130958(param_1,iVar14);
    iVar10 = iVar10 + iVar3;
    if ((*(int *)(iVar11 + 0x9c) < 1) && (*(int *)(iVar11 + 0xb0) <= *(int *)(iVar11 + 0x78))) {
      *(int *)(iVar11 + 0x78) = *(int *)(iVar11 + 0xb0);
      iVar4 = *(int *)(param_1 + 8);
      *(int *)(iVar11 + 0x94) = iVar11 + 100;
      *(undefined4 *)(iVar11 + 0x98) = *(undefined4 *)(iVar11 + 0xbc);
      FUN_1011dbf4(iVar4 + 0x38,0xffffffff);
      (*pcVar6)(*(undefined4 *)(iVar11 + 0xac),2,iVar14);
      thunk_FUN_10113e2c(*(int *)(param_1 + 8) + 0x38);
      *(undefined4 *)(iVar11 + 0x78) = 0;
      iVar3 = *(int *)(iVar11 + 0x18);
      iVar4 = FUN_10130958(param_1,iVar14);
      iVar10 = iVar10 + iVar3 + iVar4;
      if (*(int *)(param_1 + 0x10) != 0) {
        FUN_1012d466(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(iVar11 + 0x18));
        FUN_1012d4f6(*(undefined4 *)(param_1 + 0x1c));
        if (1 < *(int *)(iVar11 + 4)) {
          FUN_1012d466(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(iVar11 + 0x18));
          FUN_1012d4f6(*(undefined4 *)(param_1 + 0x20));
        }
      }
    }
    if (iVar10 < 1) {
      if (iVar13 == 0) {
        return 0xffffff97;
      }
      return 0;
    }
    iVar13 = iVar13 + iVar10;
  } while( true );
}

