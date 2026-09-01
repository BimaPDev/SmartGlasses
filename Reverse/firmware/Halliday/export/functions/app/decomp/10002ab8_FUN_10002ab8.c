/* FUN_10002ab8 @ 0x10002ab8 */

uint FUN_10002ab8(int param_1,undefined4 param_2,int param_3,int param_4,byte *param_5)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined1 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  undefined4 uVar19;
  int local_58;
  undefined1 auStack_54 [8];
  undefined2 local_4c;
  ushort local_4a;
  int local_40;
  undefined4 local_3c;
  undefined2 local_34;
  ushort local_32;
  byte local_30;
  byte *local_2c;
  
  iVar13 = *(int *)(param_1 + 0x10);
  if (*(char *)(iVar13 + 10) == '\0') {
    uVar4 = FUN_10003148(*(undefined4 *)(param_4 + 4));
    uVar4 = (uVar4 & 0x7ff) >> 3;
    uVar14 = *(uint *)(param_4 + 8);
    if (uVar14 == 0) {
      uVar14 = uVar4 * *(int *)(param_4 + 0xc);
    }
    uVar5 = FUN_10003148(*(undefined4 *)(param_3 + 4));
    uVar15 = *(uint *)(param_3 + 8);
    uVar5 = (uVar5 & 0x7ff) >> 3;
    if (uVar15 == 0) {
      uVar15 = uVar5 * *(int *)(param_3 + 0xc);
    }
    uVar8 = *(uint *)(param_4 + 0x18);
    uVar16 = *(uint *)(param_4 + 0xc);
    if ((uVar8 < 0x30000000) &&
       (uVar10 = (uVar14 & 0xffff) * (*(ushort *)(param_4 + 0x10) - 1) + uVar16 * uVar4 + uVar8,
       uVar9 = DAT_10002d5c, 0x30000000 < uVar10)) {
LAB_10002b2a:
      FUN_10003108(uVar9,uVar8,uVar10);
    }
    else {
      uVar8 = *(uint *)(param_3 + 0x18);
      uVar18 = *(uint *)(param_3 + 0xc);
      uVar2 = *(ushort *)(param_3 + 0x10);
      uVar10 = (uVar15 & 0xffff) * (uVar2 - 1) + uVar18 * uVar5 + uVar8;
      if (uVar8 < 0x30000000) {
        if (uVar10 < 0x30000001) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
      else {
        bVar3 = false;
      }
      uVar5 = *(uint *)(param_4 + 4);
      if ((uVar5 & 0xa8) != 0) {
        bVar1 = *param_5;
        if ((bVar1 & 1) == 0) {
          if (((((bVar1 & 2) != 0) || (bVar3)) || (uVar5 != *(uint *)(param_3 + 4))) ||
             ((uVar5 != 0x20 || ((uVar16 & 1) != 0 || ((uVar8 & 3) != 0 || (uVar18 & 1) != 0))))) {
            FUN_10003208(auStack_54,0,0x28);
            local_3c = *(undefined4 *)(param_5 + 4);
            local_4c = (undefined2)uVar18;
            local_2c = param_5 + 8;
            if ((bVar1 & 2) == 0) {
              uVar9 = 1;
              uVar19 = 3;
              piVar17 = &local_40;
            }
            else {
              uVar9 = 2;
              uVar19 = 4;
              piVar17 = &local_58;
            }
            local_58 = param_3;
            local_4a = uVar2;
            local_40 = param_4;
            local_34 = local_4c;
            local_32 = uVar2;
            local_30 = bVar1 & 2;
            uVar4 = FUN_10002640(param_1,param_2,param_3,piVar17,uVar9,uVar19);
            return uVar4;
          }
        }
        else {
          uVar9 = DAT_10002d64;
          if (((bVar3) || (uVar9 = DAT_10002d68, uVar8 = uVar16, uVar10 = uVar5, uVar5 != 0x20)) ||
             ((int)(uVar16 << 0x1f) < 0)) goto LAB_10002b2a;
          uVar9 = DAT_10002d6c;
          if ((((*(int *)(param_3 + 4) != 0x20) || (uVar16 != uVar18)) ||
              (uVar16 != *(ushort *)(param_4 + 0x10))) ||
             (uVar9 = DAT_10002d70, uVar16 < (uint)uVar2 + (uint)*(ushort *)(param_5 + 0x20))) {
            FUN_10003108(uVar9);
            goto LAB_10002b78;
          }
        }
        iVar6 = FUN_10001956(param_2);
        if (iVar6 != 0) {
          uVar5 = *(uint *)(param_4 + 0xc);
          bVar1 = *param_5 & 1;
          if ((*param_5 & 1) == 0) {
            *(byte *)(iVar6 + 0x1c) = bVar1;
            *(byte *)(iVar6 + 0x1d) = bVar1;
            *(byte *)(iVar6 + 0x1e) = bVar1;
            *(byte *)(iVar6 + 0x1f) = bVar1;
            *(uint *)(iVar6 + 0x40) = uVar5 | (uint)*(ushort *)(param_4 + 0x10) << 0x10;
            uVar12 = 0x11;
          }
          else {
            uVar2 = *(ushort *)(param_5 + 0x20);
            uVar5 = uVar5 - 1 & 0xffff;
            *(uint *)(iVar6 + 0x1c) = (uint)uVar2;
            iVar7 = (uint)uVar2 * -2 + uVar5;
            *(undefined4 *)(iVar6 + 0x34) = *(undefined4 *)(param_5 + 0x24);
            uVar9 = *(undefined4 *)(param_5 + 0x28);
            *(uint *)(iVar6 + 0x30) = uVar5 * uVar5 + iVar7 * iVar7;
            uVar12 = 0x10;
            *(undefined4 *)(iVar6 + 0x38) = uVar9;
          }
          *(undefined1 *)(iVar6 + 4) = uVar12;
          *(undefined1 *)(iVar6 + 5) = 1;
          *(undefined1 *)(iVar6 + 6) = 2;
          uVar2 = *(ushort *)(param_3 + 0x10);
          *(undefined1 *)(iVar6 + 7) = 0x80;
          iVar7 = *(int *)(param_4 + 0x18);
          *(uint *)(iVar6 + 8) =
               *(uint *)(param_3 + 0xc) & 0x1ff | ((uint)uVar2 + *(int *)(iVar6 + 0x1c)) * 0x10000;
          iVar11 = *(int *)(param_5 + 0x14);
          *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(param_5 + 0x10);
          *(undefined4 *)(iVar6 + 0x2c) = *(undefined4 *)(param_5 + 0x1c);
          *(uint *)(iVar6 + 0x20) = (uint)*(ushort *)(param_5 + 8) | iVar11 << 0x10;
          *(uint *)(iVar6 + 0x24) =
               (uint)*(ushort *)(param_5 + 0xc) | *(int *)(param_5 + 0x18) << 0x10;
          *(uint *)(iVar6 + 0x10) = uVar14 & 0xffff;
          if (iVar7 + 0xf0000000U < 0x4000000) {
            iVar7 = FUN_100030f8(iVar7,3);
          }
          else {
            iVar7 = FUN_10003178();
          }
          *(uint *)(iVar6 + 0xc) =
               iVar7 + *(int *)(iVar6 + 0x10) * (*(int *)(iVar6 + 0x2c) >> 0xc) +
                       (*(int *)(iVar6 + 0x28) >> 0xc) * uVar4;
          *(uint *)(iVar6 + 0x18) = uVar15 & 0xffff;
          uVar9 = FUN_10003178(*(undefined4 *)(param_3 + 0x18));
          *(uint *)(iVar6 + 0x3c) = *(uint *)(param_5 + 4) & 0xffffff;
          iVar7 = *(int *)(param_4 + 4);
          *(undefined4 *)(iVar6 + 0x14) = uVar9;
          if (iVar7 == 0x20) {
            uVar4 = *(uint *)(iVar6 + 4) | 0x10000000;
          }
          else {
            uVar4 = *(uint *)(iVar6 + 4) | 0x20000000;
          }
          *(uint *)(iVar6 + 4) = uVar4 | 4;
          *(byte *)(iVar6 + 1) = (*param_5 & 1) + 8;
          uVar9 = FUN_100031a8(param_2,1);
          FUN_1000257c(iVar13,iVar6,uVar9);
          return (uint)*(ushort *)(iVar6 + 2);
        }
        goto LAB_10002ad6;
      }
      FUN_10003108(DAT_10002d60,uVar5);
    }
LAB_10002b78:
    uVar4 = 0xffffffea;
  }
  else {
    FUN_10003108(DAT_10002d58);
LAB_10002ad6:
    uVar4 = 0xfffffff0;
  }
  return uVar4;
}

