/* FUN_10100c00 @ 0x10100c00 */

int FUN_10100c00(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  ushort uVar12;
  undefined4 uVar13;
  ushort uVar14;
  uint uVar15;
  int *piVar16;
  int local_50;
  int local_4c;
  int local_48;
  ushort local_44;
  int local_3c;
  int local_38 [2];
  uint local_30;
  uint local_2c;
  
  uVar13 = *(undefined4 *)(param_2 + 0x1c);
  local_3c = FUN_100fadac(param_2);
  local_48 = FUN_100fb0bc(param_2,&local_50);
  if (local_50 != 0) {
    return local_50;
  }
  local_50 = FUN_100fb104(param_2,DAT_10100e6c,&local_48);
  if (local_50 != 0) {
    return local_50;
  }
  if (local_48 == DAT_10100e70) {
    uVar14 = local_44;
    if (local_44 != 0) {
LAB_10100c52:
      local_50 = 0;
      *(int *)(param_1 + 0x94) = local_48;
      *(ushort *)(param_1 + 0x98) = uVar14;
      uVar13 = FUN_100fb280(uVar13,0x10,0,uVar14,0,&local_50);
      *(undefined4 *)(param_1 + 0x9c) = uVar13;
      if (local_50 != 0) {
        return local_50;
      }
      local_50 = FUN_100fad58(param_2,local_3c + 0xc);
      if (local_50 != 0) {
        return local_50;
      }
      iVar5 = FUN_100faf14(param_2,(uint)local_44 << 4);
      iVar4 = DAT_10100e78;
      if (iVar5 != 0) {
        return iVar5;
      }
      uVar15 = 0;
      local_50 = 0;
      if (local_44 != 0) {
        uVar14 = 0;
        uVar15 = 0;
        do {
          iVar5 = FUN_100fb00c(param_2);
          iVar6 = FUN_100fb00c(param_2);
          uVar7 = FUN_100fb00c(param_2);
          uVar8 = FUN_100fb00c(param_2);
          if (uVar7 <= *(uint *)(param_2 + 4)) {
            uVar10 = *(uint *)(param_2 + 4) - uVar7;
            if (uVar10 < uVar8) {
              if ((iVar5 != iVar4) && (iVar5 != DAT_10100e74)) goto LAB_10100cc0;
              uVar8 = uVar10 & 0xfffffffc;
            }
            piVar16 = *(int **)(param_1 + 0x9c);
            if (uVar15 != 0) {
              piVar11 = piVar16;
              do {
                iVar9 = *piVar11;
                piVar11 = piVar11 + 4;
                if (iVar5 == iVar9) goto LAB_10100cc0;
              } while (piVar16 + (uVar15 - 1 & 0xffff) * 4 + 4 != piVar11);
            }
            piVar16[uVar15 * 4] = iVar5;
            piVar16[uVar15 * 4 + 1] = iVar6;
            piVar16[uVar15 * 4 + 2] = uVar7;
            piVar16[uVar15 * 4 + 3] = uVar8;
            uVar15 = uVar15 + 1 & 0xffff;
          }
LAB_10100cc0:
          uVar14 = uVar14 + 1;
        } while (uVar14 < local_44);
      }
      *(short *)(param_1 + 0x98) = (short)uVar15;
      FUN_100fafbc(param_2);
      return local_50;
    }
  }
  else {
    iVar6 = local_3c + 0xc;
    iVar5 = FUN_100fad58(param_2,iVar6);
    iVar4 = DAT_10100e88;
    if (iVar5 != 0) {
      return iVar5;
    }
    if (local_44 != 0) {
      uVar14 = 0;
      uVar12 = 0;
      bVar3 = false;
      bVar1 = false;
      bVar2 = false;
      local_4c = 0;
      do {
        local_4c = FUN_100fb104(param_2,DAT_10100e84,local_38);
        if (local_4c != 0) {
          local_44 = uVar12 - 1;
          break;
        }
        if ((local_30 <= *(uint *)(param_2 + 4)) &&
           (((local_2c <= *(uint *)(param_2 + 4) - local_30 || (local_38[0] == DAT_10100e78)) ||
            (local_38[0] == DAT_10100e78 + 0xe000000)))) {
          uVar14 = uVar14 + 1;
          if (local_38[0] == iVar4) {
            bVar1 = true;
          }
          else if (local_38[0] != DAT_10100e7c) {
            if (local_38[0] == DAT_10100e80) {
              bVar2 = true;
            }
            else if (local_38[0] == DAT_10100e80 + -0x603fa06) {
              bVar3 = true;
            }
            goto LAB_10100dae;
          }
          if (local_2c < 0x36) {
            return 0x8e;
          }
          local_4c = FUN_100fad58(param_2,local_30 + 0xc);
          if (local_4c != 0) {
            return local_4c;
          }
          FUN_100fb0bc(param_2,&local_4c);
          if (local_4c != 0) {
            return local_4c;
          }
          local_4c = FUN_100fad58(param_2,iVar6 + (uVar12 + 1) * 0x10);
          if (local_4c != 0) {
            return local_4c;
          }
        }
LAB_10100dae:
        uVar12 = uVar12 + 1;
      } while (uVar12 < local_44);
      if (uVar14 != 0) {
        if ((!bVar1) && ((!bVar2 || (!bVar3)))) {
          return 0x8e;
        }
        goto LAB_10100c52;
      }
    }
  }
  return 2;
}

