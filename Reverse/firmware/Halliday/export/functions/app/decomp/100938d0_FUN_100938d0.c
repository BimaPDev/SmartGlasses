/* FUN_100938d0 @ 0x100938d0 */

void FUN_100938d0(int param_1,int param_2,uint param_3,uint param_4,int param_5,ushort param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint local_54;
  uint local_4c;
  uint local_48;
  uint local_38;
  uint local_34 [2];
  
  local_38 = 0;
  uVar9 = (uint)param_6;
  local_54 = param_4;
  if (param_4 == 2) {
    local_54 = FUN_100938a8();
  }
  uVar14 = param_3;
  if (local_54 != 1) {
    uVar9 = 0;
    uVar14 = uVar9;
  }
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + param_3) = 0;
  }
  puVar1 = DAT_10093b9c;
  uVar11 = 0;
  *DAT_10093b98 = 0;
  do {
    if (param_3 <= local_38) break;
    uVar2 = (*(code *)*puVar1)(param_1,&local_38);
    iVar3 = FUN_100935d0();
    uVar11 = uVar11 + 1 & 0xffff;
    if (iVar3 == 0x20) {
      iVar3 = FUN_10093628(param_1,local_38,param_3,uVar2,local_54);
    }
  } while ((iVar3 - 0x20U & 0xff) < 2);
  if ((local_38 != 0) && (*(char *)(param_1 + local_38) != '\0')) {
    (*(code *)*DAT_10093ba0)(param_1,&local_38);
    uVar11 = uVar11 - 1 & 0xffff;
  }
  if (local_38 != 0) {
    if (local_54 == 0) {
      if (param_2 != 0) {
        thunk_FUN_1011ea40(param_2 + uVar14,param_1);
        uVar14 = uVar14 + local_38;
      }
      if (param_5 != 0) {
        FUN_1012adbe(param_5 + uVar9 * 2,uVar11,0);
        uVar9 = uVar9 + uVar11 & 0xffff;
      }
    }
    else {
      uVar14 = uVar14 - local_38;
      uVar9 = uVar9 - uVar11 & 0xffff;
      if (param_2 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = param_2 + uVar14;
      }
      if (param_5 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = param_5 + uVar9 * 2;
      }
      FUN_10093728(iVar3,param_1,local_38,iVar8,0,uVar11);
    }
  }
LAB_10093992:
  if ((param_3 <= local_38) || (iVar3 = param_1 + local_38, *(char *)(param_1 + local_38) == '\0'))
  {
    return;
  }
  uVar6 = param_3 - local_38;
  local_34[0] = 0;
  uVar2 = (*(code *)*DAT_10093b9c)(iVar3,0);
  uVar4 = FUN_100935d0();
  if (uVar4 == 0x20) {
    uVar4 = FUN_10093628(iVar3,0,uVar6,uVar2,local_54);
  }
  uVar12 = 0;
  do {
    uVar10 = local_54;
    if (1 < (uVar4 - 0x20 & 0xff)) {
LAB_10093a26:
      local_4c = local_34[0];
      local_48 = uVar12;
      goto LAB_10093a2e;
    }
    uVar2 = (*(code *)*DAT_10093b9c)(iVar3,local_34);
    uVar4 = FUN_100935d0();
    uVar12 = uVar12 + 1 & 0xffff;
    if (uVar4 == 0x20) {
      uVar4 = FUN_10093628(iVar3,local_34[0],uVar6,uVar2,local_54);
    }
    if (uVar4 < 2) goto LAB_10093a26;
  } while ((local_34[0] < uVar6) &&
          ((0xd < *(byte *)(iVar3 + local_34[0]) ||
           (-1 < (int)((0x2401U >> (uint)*(byte *)(iVar3 + local_34[0])) << 0x1f)))));
  uVar13 = local_34[0];
  if (local_54 == 0) goto LAB_10093b4e;
  goto LAB_10093a92;
LAB_10093a2e:
  uVar13 = local_34[0];
  if ((local_34[0] < uVar6) &&
     ((0xd < *(byte *)(iVar3 + local_34[0]) ||
      (-1 < (int)((0x2401U >> (uint)*(byte *)(iVar3 + local_34[0])) << 0x1f))))) {
    uVar2 = (*(code *)*DAT_10093b9c)(iVar3,local_34);
    uVar7 = uVar12 + 1 & 0xffff;
    uVar5 = FUN_100935d0();
    if (uVar5 == 0x20) {
      uVar5 = FUN_10093628(iVar3,local_34[0],uVar6,uVar2,local_54);
    }
    if (uVar5 == 0x21) {
      if ((uVar4 != 1) || (local_54 != 1)) goto LAB_10093b84;
      goto LAB_10093a92;
    }
    if (1 < uVar5) goto LAB_10093b80;
    if (uVar5 == uVar4) goto LAB_10093b84;
  }
  if (local_54 != uVar4) {
    uVar13 = local_4c;
    uVar12 = local_48;
  }
  uVar10 = uVar4;
  if (local_54 == 0) {
    if (uVar4 == 0) {
LAB_10093b4e:
      if (param_2 != 0) {
        thunk_FUN_1011ea40(param_2 + uVar14,local_38 + param_1,uVar13);
      }
      if (param_5 != 0) {
        FUN_1012adbe(param_5 + uVar9 * 2,uVar12,uVar11);
      }
    }
    else {
      if (param_2 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = param_2 + uVar14;
      }
      if (param_5 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = param_5 + uVar9 * 2;
      }
      FUN_10093728(iVar3,local_38 + param_1,uVar13,iVar8,uVar11,uVar12);
    }
    uVar14 = uVar14 + uVar13;
    uVar9 = uVar9 + uVar12 & 0xffff;
  }
  else {
LAB_10093a92:
    uVar14 = uVar14 - uVar13;
    uVar9 = uVar9 - uVar12 & 0xffff;
    if (uVar10 == 0) {
      if (param_2 != 0) {
        thunk_FUN_1011ea40(param_2 + uVar14,local_38 + param_1,uVar13);
      }
      if (param_5 != 0) {
        FUN_1012adbe(param_5 + uVar9 * 2,uVar12,uVar11);
      }
    }
    else {
      if (param_2 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = param_2 + uVar14;
      }
      if (param_5 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = param_5 + uVar9 * 2;
      }
      FUN_10093728(iVar3,local_38 + param_1,uVar13,iVar8,uVar11,uVar12);
    }
  }
  local_38 = local_38 + uVar13;
  uVar11 = uVar11 + uVar12 & 0xffff;
  goto LAB_10093992;
LAB_10093b80:
  uVar12 = uVar7;
  if (uVar5 != 0x20) {
LAB_10093b84:
    local_4c = local_34[0];
    uVar12 = uVar7;
    local_48 = uVar7;
  }
  goto LAB_10093a2e;
}

