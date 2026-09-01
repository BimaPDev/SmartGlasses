/* FUN_100844c0 @ 0x100844c0 */

int FUN_100844c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  
  uVar9 = 0xff;
  uVar7 = 0xff;
  iVar5 = 4;
  pcVar8 = (char *)*param_1;
  do {
    if (param_1[0xe] == 0) {
      if (iVar5 == 0) {
        return 0;
      }
      break;
    }
    iVar5 = FUN_10122662(pcVar8);
    if (iVar5 != 0) break;
    pbVar2 = (byte *)param_1[0xf];
    uVar4 = (uint)*pbVar2;
    if (uVar4 == 0) {
      iVar5 = 4;
      break;
    }
    if (*pcVar8 == '\x04') {
      uVar3 = 4;
      if (uVar4 == 0x85) {
        param_1[0x13] = param_1[0xc];
        iVar5 = FUN_10122e2e(param_1);
        if (iVar5 == 0) {
          *(byte *)((int)param_1 + 6) = *(byte *)(*(int *)(pcVar8 + 0x10) + 4) & 0x3f;
          return 0;
        }
        break;
      }
    }
    else {
      bVar1 = pbVar2[0xb];
      uVar3 = bVar1 & 0x3f;
      *(char *)((int)param_1 + 6) = (char)uVar3;
      if (((uVar4 != 0xe5) && (uVar4 != 0x2e)) && ((bVar1 & 0x1f) != 8)) {
        if (uVar3 != 0xf) {
          if ((uVar7 == 0) && (uVar7 = FUN_10122306(), uVar7 == uVar9)) {
            return 0;
          }
          param_1[0x13] = 0xffffffff;
          return 0;
        }
        if ((int)(uVar4 << 0x19) < 0) {
          uVar7 = uVar4 & 0xbf;
          uVar9 = (uint)pbVar2[0xd];
          param_1[0x13] = param_1[0xc];
        }
        else if (uVar4 != uVar7) goto LAB_100845c8;
        uVar4 = (uint)pbVar2[0xd];
        if (uVar4 == uVar9) {
          uVar3 = (uint)pbVar2[0x1b];
          uVar4 = (uint)*(ushort *)(pbVar2 + 0x1a);
          iVar5 = (int)(short)*(ushort *)(pbVar2 + 0x1a);
          if (uVar4 == 0) {
            uVar11 = 1;
            iVar6 = *(int *)(pcVar8 + 0xc);
            uVar4 = ((*pbVar2 & 0x3f) - 1) * 0xd;
            pbVar10 = DAT_100845ec;
            do {
              uVar3 = (uint)CONCAT11(pbVar2[*pbVar10 + 1],pbVar2[*pbVar10]);
              if (uVar11 == 0) {
                if (uVar3 != 0xffff) goto LAB_100845c8;
              }
              else {
                if (0xfe < uVar4) goto LAB_100845c8;
                *(ushort *)(iVar6 + uVar4 * 2) = CONCAT11(pbVar2[*pbVar10 + 1],pbVar2[*pbVar10]);
                uVar4 = uVar4 + 1;
                uVar11 = uVar3;
              }
              iVar5 = iVar5 + 1;
              pbVar10 = pbVar10 + 1;
            } while (iVar5 != 0xd);
            uVar3 = (uint)*pbVar2 << 0x19;
            if ((int)uVar3 < 0) {
              if (0xfe < uVar4) goto LAB_100845c8;
              uVar3 = 0;
              *(undefined2 *)(iVar6 + uVar4 * 2) = 0;
            }
            uVar7 = uVar7 - 1 & 0xff;
            goto LAB_100845b0;
          }
        }
      }
LAB_100845c8:
      uVar7 = 0xff;
    }
LAB_100845b0:
    iVar5 = FUN_10122d32(param_1,0,uVar3,uVar4,param_4);
  } while (iVar5 == 0);
  param_1[0xe] = 0;
  return iVar5;
}

