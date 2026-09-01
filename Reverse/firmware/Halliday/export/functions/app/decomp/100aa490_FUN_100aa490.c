/* FUN_100aa490 @ 0x100aa490 */

int FUN_100aa490(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  short sVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  iVar4 = (int)*(short *)(param_1 + 0x24);
  iVar9 = param_1 + 0x38;
  if (iVar4 == 0) {
    iVar4 = FUN_1012e1d0(*(undefined4 *)(param_1 + 0x250),1,4,iVar9);
    if (iVar4 < 0) {
      return iVar4 + -1000;
    }
    if (iVar4 < 4) {
      return 1;
    }
  }
  else {
    if (*(int *)(param_1 + 0x44) == *(int *)(param_1 + 0x48)) {
      return 2;
    }
    puVar5 = *(undefined1 **)(param_1 + 0x250);
    *puVar5 = puVar5[iVar4];
    *(undefined1 *)(*(int *)(param_1 + 0x250) + 1) = puVar5[iVar4 + 1];
    *(undefined1 *)(*(int *)(param_1 + 0x250) + 2) = puVar5[iVar4 + 2];
    *(undefined1 *)(*(int *)(param_1 + 0x250) + 3) = puVar5[iVar4 + 3];
  }
  uVar3 = DAT_100aa764;
  pbVar7 = *(byte **)(param_1 + 0x250);
  uVar10 = (uint)pbVar7[1] * 0x10000 + (uint)*pbVar7 * 0x1000000 + (uint)pbVar7[3] +
           (uint)pbVar7[2] * 0x100;
  if ((uVar10 & 0xffffff00) == DAT_100aa764) {
    return 3;
  }
  iVar4 = FUN_100aa1fc(uVar10,auStack_2c,auStack_30,auStack_38,auStack_34);
  iVar1 = FUN_1012e1d0(*(int *)(param_1 + 0x250) + 4,1,iVar4,iVar9);
  if (iVar1 < iVar4) {
    if (iVar1 < 0) {
      return iVar1 + -2000;
    }
    if (iVar1 < iVar4 + -3) {
      return 4;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x250) + iVar4;
    uVar8 = (uint)*(byte *)(iVar1 + 1) * 0x10000 +
            (uint)*(byte *)(*(int *)(param_1 + 0x250) + iVar4) * 0x1000000 +
            (uint)*(byte *)(iVar1 + 3) + (uint)*(byte *)(iVar1 + 2) * 0x100;
    iVar4 = FUN_100aa1fc(uVar10,auStack_2c,auStack_30,auStack_38,auStack_34);
    if (((uVar8 & 0xffffff00) != uVar3) &&
       (((uVar8 == 0xffffffff || ((uVar8 & 0xffe00000) != 0xffe00000)) ||
        (0x5fb < (iVar4 - 5U & 0xffff))))) {
      iVar4 = FUN_1012e3ce(iVar9,-3 - iVar4,1);
      uVar3 = DAT_100aa768;
      if (iVar4 != 0) {
        return DAT_100aa760;
      }
      iVar1 = *(int *)(param_1 + 0x44);
LAB_100aa5c8:
      pbVar7 = *(byte **)(param_1 + 0x250);
      iVar4 = FUN_1012e1d0(pbVar7,1,1,iVar9);
      if (iVar4 < 1) {
        if (iVar4 == 0) {
          return 5;
        }
        return iVar4 + -4000;
      }
      if (*pbVar7 != 0xff) {
        iVar2 = 0;
        goto LAB_100aa6ba;
      }
LAB_100aa638:
      iVar4 = 3;
LAB_100aa612:
      do {
        iVar2 = FUN_1012e1d0(pbVar7 + (4 - iVar4),1,iVar4,iVar9);
        if (iVar2 < iVar4) {
          if (-1 < iVar2) {
            return 5;
          }
          return iVar2 + -5000;
        }
        iVar2 = 3;
        uVar10 = (uint)pbVar7[1] * 0x10000 + (uint)*pbVar7 * 0x1000000 + (uint)pbVar7[3] +
                 (uint)pbVar7[2] * 0x100;
        if (((uVar10 != 0xffffffff) && ((uVar10 & uVar3) == 0xffe00000)) &&
           (iVar4 = FUN_100aa1fc(uVar10,auStack_2c,auStack_30,auStack_38,auStack_34),
           (iVar4 - 5U & 0xffff) < 0x5fb)) {
          iVar2 = FUN_1012e1d0(*(int *)(param_1 + 0x250) + 4,1,iVar4,iVar9);
          if (iVar2 < iVar4) {
            if (-1 < iVar2) {
              return 5;
            }
            return iVar2 + -6000;
          }
          pbVar7 = (byte *)(*(int *)(param_1 + 0x250) + iVar4);
          uVar10 = (uint)pbVar7[1] * 0x10000 +
                   (uint)*(byte *)(*(int *)(param_1 + 0x250) + iVar4) * 0x1000000 + (uint)pbVar7[3]
                   + (uint)pbVar7[2] * 0x100;
          if ((uVar10 != 0xffffffff) && ((uVar10 & 0xffe00000) == 0xffe00000)) break;
          iVar4 = FUN_1012e3ce(iVar9,-3 - iVar4,1);
          iVar2 = 0;
          if (iVar4 != 0) {
            return DAT_100aa75c;
          }
        }
LAB_100aa6ba:
        while( true ) {
          while( true ) {
            while( true ) {
              if (0x4b000 < *(int *)(param_1 + 0x44) - iVar1) {
                return 5;
              }
              if (iVar2 == 0) goto LAB_100aa5c8;
              if (iVar2 != 3) break;
              if (pbVar7[1] == 0xff) {
                iVar4 = 1;
                *pbVar7 = 0xff;
                pbVar7[1] = pbVar7[2];
                pbVar7[2] = pbVar7[3];
                goto LAB_100aa612;
              }
              iVar2 = 2;
            }
            if (iVar2 == 2) break;
            if (pbVar7[3] == 0xff) {
              *pbVar7 = 0xff;
              goto LAB_100aa638;
            }
            iVar2 = 0;
          }
          if (pbVar7[2] == 0xff) break;
          iVar2 = 1;
        }
        *pbVar7 = 0xff;
        pbVar7[1] = pbVar7[3];
        iVar4 = 2;
      } while( true );
    }
  }
  *(short *)(param_1 + 0x24) = (short)iVar4;
  if (0 < param_3) {
    FUN_1011ea40(*param_2,*(undefined4 *)(param_1 + 0x250));
  }
  sVar6 = *(short *)(param_1 + 0x24);
  uVar3 = *(uint *)(param_1 + 0x28);
  *(short *)(param_2 + 1) = sVar6;
  sVar6 = sVar6 + 4;
  iVar4 = *(int *)(param_1 + 0x44) - (int)sVar6;
  *(short *)(param_1 + 0x26) = sVar6;
  uVar10 = *(uint *)(param_1 + 0x30) + uVar3;
  iVar9 = *(int *)(param_1 + 0x34) +
          ((int)uVar3 >> 0x1f) + (uint)CARRY4(*(uint *)(param_1 + 0x30),uVar3);
  uVar3 = uVar10 >> 0xc | iVar9 * 0x100000;
  *(uint *)(param_1 + 0x30) = uVar10;
  *(int *)(param_1 + 0x34) = iVar9;
  *(int *)(param_1 + 0x1c) = iVar4;
  *(uint *)(param_1 + 0x20) = uVar3;
  param_2[2] = uVar3;
  param_2[3] = iVar4;
  return 0;
}

