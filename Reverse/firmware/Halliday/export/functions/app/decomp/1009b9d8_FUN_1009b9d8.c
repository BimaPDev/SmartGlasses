/* FUN_1009b9d8 @ 0x1009b9d8 */

int FUN_1009b9d8(int *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint local_44 [2];
  int local_3c;
  int local_38;
  int local_34;
  short local_30;
  int local_2c;
  
  iVar2 = FUN_1012c654();
  if ((iVar2 != 0) || (*(char *)((int)param_2 + 0x19) != '\0')) {
    return 0;
  }
  iVar2 = param_2[3];
  iVar4 = 0;
  if (iVar2 != 0) {
    if ((char)param_2[4] == '\0') {
      return 1;
    }
    if ((char)param_2[4] == '\x01') {
      iVar2 = 0;
    }
    else if (param_2[1] != 0) {
      return 0;
    }
  }
  iVar3 = FUN_1012a896(&local_38,*param_2,param_1[2]);
  if (iVar3 == 0) {
    return 1;
  }
  if (param_2[1] == 0) {
    if (iVar2 == 0) {
      local_3c = 0;
    }
    else {
      piVar10 = (int *)param_2[5];
      uVar6 = (piVar10[2] + 1) - *piVar10;
      local_44[0] = DAT_1009bbcc & uVar6 * 0x400 | 0xe | ((local_2c + 1) - local_34) * 0x200000 |
                    local_44[0] & 0x3e0;
      local_3c = (uVar6 & 0x7ff) * (local_34 - piVar10[1]) + (local_38 - *piVar10) + iVar2;
    }
  }
  else {
    piVar10 = (int *)*param_2;
    uVar6 = (piVar10[2] + 1) - *piVar10;
    local_44[0] = DAT_1009bbcc & uVar6 * 0x400 | 4 | ((local_2c + 1) - local_34) * 0x200000 |
                  local_44[0] & 0x3e0;
    local_3c = param_2[1] + ((uVar6 & 0x7ff) * (local_34 - piVar10[1]) + (local_38 - *piVar10)) * 2;
  }
  iVar3 = param_1[2];
  param_1[2] = (int)&local_38;
  bVar1 = *(byte *)(param_2 + 6);
  if (local_3c == 0) {
    uVar6 = FUN_1012c618((short)param_2[2]);
    iVar2 = DAT_1009bbd0;
    iVar7 = (int)(short)(((short)local_2c + 1) - (short)local_34);
    iVar8 = (int)(short)((local_30 + 1) - (short)local_38);
    if (0x1f < (uint)(iVar7 * iVar8)) {
      piVar10 = (int *)param_1[1];
      iVar9 = *param_1 +
              ((local_38 - *piVar10) +
              (piVar10[2] - *piVar10) * (local_34 - piVar10[1]) + (local_34 - piVar10[1])) * 2;
      if (bVar1 < 0xfd) {
        uVar5 = 8;
      }
      else {
        uVar5 = 1;
      }
      *(undefined2 *)(DAT_1009bbd0 + 0x18) = uVar5;
      FUN_1013d9b0(iVar2);
      FUN_1009af58(param_1,1,param_1[2]);
      if (bVar1 < 0xfd) {
        *(int *)(iVar2 + 0x20) = iVar8;
        *(int *)(iVar2 + 0x24) = iVar7;
        FUN_1013d9f0(iVar2,0);
        iVar2 = FUN_1013da20(iVar2,uVar6 & 0xffffff | (uint)bVar1 << 0x18,iVar9,iVar9,iVar8,iVar7);
      }
      else {
        iVar2 = FUN_1013da10(iVar2,uVar6,iVar9,iVar8,iVar7);
      }
      if (-1 < iVar2) {
        FUN_1009b254(param_1,param_1[2]);
        iVar4 = 1;
        FUN_1009af48();
      }
    }
  }
  else {
    iVar4 = FUN_1009b34c(param_1,local_44,0,(short)param_2[2],bVar1,0);
    if ((iVar4 == 1) && (iVar2 != 0)) {
      FUN_1011deaa(DAT_1009bbd0,0xffffffff);
    }
  }
  param_1[2] = iVar3;
  return iVar4;
}

