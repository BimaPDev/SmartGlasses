/* FUN_1012270e @ 0x1012270e */

uint FUN_1012270e(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  bool bVar9;
  
  if (param_2 < 2) {
    return 1;
  }
  pbVar8 = (byte *)*param_1;
  if (*(uint *)(pbVar8 + 0x34) <= param_2) {
    return 1;
  }
  iVar5 = *pbVar8 - 1;
  switch(*pbVar8) {
  case 1:
    uVar4 = param_2 + (param_2 >> 1);
    iVar5 = FUN_10122662(pbVar8,*(int *)(pbVar8 + 0x40) + (uVar4 >> 9),iVar5,param_1,param_4);
    if (iVar5 == 0) {
      bVar2 = pbVar8[(uVar4 & 0x1ff) + 0x50];
      iVar5 = FUN_10122662(pbVar8,*(int *)(pbVar8 + 0x40) + (uVar4 + 1 >> 9));
      if (iVar5 == 0) {
        bVar9 = (int)(param_2 << 0x1f) < 0;
        uVar3 = CONCAT11(pbVar8[(uVar4 + 1 & 0x1ff) + 0x50],bVar2);
        if (bVar9) {
          uVar3 = uVar3 >> 4;
        }
        if (!bVar9) {
          return uVar3 & 0xfff;
        }
        return (uint)uVar3;
      }
    }
    break;
  case 2:
    iVar5 = FUN_10122662(pbVar8,*(int *)(pbVar8 + 0x40) + (param_2 >> 8),iVar5,param_1,param_4);
    if (iVar5 == 0) {
      iVar5 = (param_2 & 0xff) * 2;
      return (uint)CONCAT11(pbVar8[iVar5 + 0x51],pbVar8[iVar5 + 0x50]);
    }
    break;
  case 3:
    iVar5 = FUN_10122662(pbVar8,*(int *)(pbVar8 + 0x40) + (param_2 >> 7),iVar5,param_1,param_4);
    if (iVar5 == 0) {
      uVar4 = FUN_1012227a(pbVar8 + (param_2 & 0x7f) * 4 + 0x50);
      return uVar4 & 0xfffffff;
    }
    break;
  case 4:
    iVar5 = param_1[4];
    cVar1 = *(char *)((int)param_1 + 7);
    if (((iVar5 != 0 || param_1[5] != 0) && (param_1[2] != 0)) || (cVar1 == '\0')) {
      puVar6 = (undefined4 *)(param_2 - param_1[2]);
      if (cVar1 == '\x02') {
        puVar7 = (undefined4 *)
                 ((iVar5 - 1U >> 9 | (param_1[5] + -1 + (uint)(iVar5 != 0)) * 0x800000) /
                 (uint)*(ushort *)(pbVar8 + 10));
        if (puVar7 <= puVar6 && puVar6 != puVar7) {
          return 1;
        }
        if (puVar6 == puVar7) {
          return 0x7fffffff;
        }
      }
      else if ((cVar1 != '\x03') || (param_1 = (undefined4 *)param_1[6], param_1 <= puVar6)) {
        iVar5 = FUN_10122662(pbVar8,*(int *)(pbVar8 + 0x40) + (param_2 >> 7),puVar6,param_1,param_4)
        ;
        if (iVar5 != 0) {
          return 0xffffffff;
        }
        uVar4 = FUN_1012227a(pbVar8 + (param_2 & 0x7f) * 4 + 0x50);
        return uVar4 & 0x7fffffff;
      }
      return param_2 + 1;
    }
  default:
    return 1;
  }
  return 0xffffffff;
}

