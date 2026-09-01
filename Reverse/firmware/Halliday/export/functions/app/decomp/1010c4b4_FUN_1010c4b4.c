/* FUN_1010c4b4 @ 0x1010c4b4 */

int FUN_1010c4b4(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint in_fpscr;
  float fVar7;
  int local_74;
  uint local_70 [4];
  uint local_60;
  uint local_5c;
  uint local_54;
  uint local_50 [4];
  uint local_40;
  uint local_3c;
  uint local_34;
  int local_30 [3];
  undefined1 local_24;
  uint local_20;
  uint local_1c;
  uint local_14;
  
  uVar1 = (uint)*(ushort *)((int)param_1 + 0xe);
  if (uVar1 == 0x426) {
    if (((*param_1 & 3) != 0) || ((param_1[1] & 3) != 0)) {
      return 1;
    }
  }
  else if (uVar1 < 0x400) {
    return 1;
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)((int)param_1 + 0xb2) = 0;
  param_1[9] = 0;
  if ((uVar1 - 0x40d < 8) || (uVar1 == 0x431)) {
    param_1[1] = param_1[1] + 3 & 0xfffffffc;
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if ((uVar1 - 0x415 < 4) || (uVar1 == 0x432)) {
    param_1[1] = param_1[1] + 3 & 0xfffffffc;
    *(undefined1 *)(param_1 + 3) = 1;
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (uVar1 - 0x410 < 8) {
    if (uVar1 == 0x415) {
LAB_1010c53a:
      FUN_1010b7e8(uVar1,&local_74,local_70,local_50);
      local_70[0] = (*param_1 * local_74) / local_70[0];
      param_1[2] = local_70[0];
      fVar7 = (float)VectorSignedToFloat(local_70[0] * param_1[1],(byte)(in_fpscr >> 0x16) & 3);
      local_30[0] = (uint)(0.0 < fVar7) * (int)fVar7;
      local_30[1] = 1;
      local_24 = *(undefined1 *)(DAT_1010c71c + 0x724);
      iVar2 = FUN_10062a28(2,local_30);
      if (iVar2 != 0) {
        return iVar2;
      }
      param_1[4] = local_20;
      param_1[5] = local_1c;
      param_1[6] = local_14;
      *(undefined1 *)(param_1 + 7) = local_24;
      uVar1 = (uint)*(ushort *)((int)param_1 + 0xe);
      if (((uVar1 != 0x40f) && (uVar1 != 0x418)) && (3 < uVar1 - 0x42d)) {
        return 0;
      }
      local_30[0] = param_1[2] * param_1[1];
      iVar2 = FUN_10062a28(2,local_30);
      if (iVar2 == 0) {
        param_1[0xb] = local_14;
        return 0;
      }
      return iVar2;
    }
  }
  else if (1 < uVar1 - 0x431) goto LAB_1010c53a;
  uVar3 = *param_1 + 7 & 0xfffffff8;
  *param_1 = uVar3;
  uVar6 = param_1[1] + 7 & 0xfffffff8;
  uVar3 = uVar3 + 0x3f & 0xffffffc0;
  param_1[1] = uVar6;
  param_1[2] = uVar3;
  if (0x417 < uVar1) {
    if (1 < uVar1 - 0x431) {
      return 0;
    }
    param_1[0xc] = uVar3 << 1;
    goto LAB_1010c6b6;
  }
  if (uVar1 < 0x40e) {
    return 0;
  }
  if (9 < uVar1 - 0x40e) {
    return 0;
  }
  switch(uVar1) {
  default:
    param_1[0xc] = uVar3;
    param_1[0xe] = uVar3;
    goto LAB_1010c62a;
  case 0x40f:
  case 0x415:
    goto switchD_1010c604_caseD_40f;
  case 0x411:
    param_1[0xc] = (int)uVar3 >> 1;
    param_1[0xd] = (int)uVar3 >> 1;
    break;
  case 0x412:
    param_1[0xc] = uVar3;
    param_1[0xd] = uVar3;
    param_1[0x10] = uVar6;
    goto LAB_1010c6b6;
  case 0x413:
    param_1[0xc] = uVar3;
    param_1[0xd] = uVar3;
    break;
  case 0x414:
    param_1[0xc] = uVar3;
LAB_1010c6b6:
    param_1[0xf] = uVar6;
    goto LAB_1010c62c;
  }
  param_1[0x10] = (int)uVar6 >> 1;
LAB_1010c62a:
  param_1[0xf] = (int)uVar6 >> 1;
LAB_1010c62c:
  uVar1 = 1;
  local_70[1] = 1;
  local_70[0] = uVar3 * uVar6;
  iVar2 = FUN_10062a28(2,local_70);
  if (iVar2 == 0) {
    param_1[4] = local_60;
    param_1[5] = local_5c;
    param_1[6] = local_54;
    uVar4 = *(ushort *)((int)param_1 + 0xe) - 0x40e;
    uVar5 = uVar4 & 0xffff;
    if (uVar5 < 10) {
      uVar1 = ~(0x345U >> (uVar4 & 0xff));
    }
    if (uVar5 < 10) {
      uVar1 = uVar1 & 1;
    }
    local_50[0] = param_1[0xf] * param_1[0xc];
    if ((uVar1 == 0) || (*(ushort *)((int)param_1 + 0xe) == 0x431)) {
      iVar2 = FUN_10062a28(2,local_50);
      if (iVar2 == 0) {
        param_1[0x13] = local_40;
        param_1[0x11] = local_3c;
        param_1[9] = local_34;
        if (((*(short *)((int)param_1 + 0xe) == 0x40e) || (*(short *)((int)param_1 + 0xe) == 0x417))
           && (local_50[0] = uVar3 * uVar6, iVar2 = FUN_10062a28(2,local_50), iVar2 == 0)) {
          param_1[0xb] = local_34;
        }
      }
    }
    else {
      iVar2 = FUN_10062a28(2,local_50);
      if (iVar2 == 0) {
        param_1[0x13] = local_40;
        param_1[0x11] = local_3c;
        param_1[9] = local_34;
        local_30[0] = param_1[0xd] * param_1[0x10];
        iVar2 = FUN_10062a28(2,local_30);
        if (iVar2 == 0) {
          param_1[0x14] = local_20;
          param_1[0x12] = local_1c;
          param_1[10] = local_14;
        }
      }
    }
  }
switchD_1010c604_caseD_40f:
  return 0;
}

