/* FUN_1402dc78 @ 0x1402dc78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1402dc78(uint param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_lr;
  
  pbVar5 = DAT_1402dea0;
  uVar6 = DAT_1402de90;
  puVar3 = DAT_1402de8c;
  if (0x12 < param_1) {
    return 1;
  }
  switch(param_1) {
  case 0:
    uVar10 = 0xc000;
    _DAT_40000064 = 0x1de0;
    _DAT_40000060 = 0x200;
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    if (param_1 == 3) {
      uVar10 = 0;
      _DAT_40000064 = 0x1c60;
      _DAT_40000060 = 0x300;
    }
    else if (param_1 == 4) {
      uVar10 = 0x4000;
      _DAT_40000064 = 0x1c60;
      _DAT_40000060 = 0x300;
    }
    else {
      if (param_1 == 5) {
        uVar10 = 0x8000;
      }
      else {
        uVar10 = 0xc000;
      }
      _DAT_40000064 = 0x1c60;
      _DAT_40000060 = 0x300;
    }
    break;
  case 7:
  case 8:
  case 9:
  case 10:
    if (param_1 == 7) {
      uVar10 = 0;
      _DAT_40000064 = 0x1820;
      _DAT_40000060 = 0x700;
    }
    else if (param_1 == 8) {
      uVar10 = 0x4000;
      _DAT_40000064 = 0x1820;
      _DAT_40000060 = 0x700;
    }
    else {
      if (param_1 == 9) {
        uVar10 = 0x8000;
      }
      else {
        uVar10 = 0xc000;
      }
      _DAT_40000064 = 0x1820;
      _DAT_40000060 = 0x700;
    }
    break;
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    if (param_1 == 0xb) {
      uVar10 = 0;
      _DAT_40000064 = 0x1a20;
      _DAT_40000060 = 0x500;
    }
    else if (param_1 == 0xc) {
      uVar10 = 0x4000;
      _DAT_40000064 = 0x1a20;
      _DAT_40000060 = 0x500;
    }
    else {
      if (param_1 == 0xd) {
        uVar10 = 0x8000;
      }
      else {
        uVar10 = 0xc000;
      }
      _DAT_40000064 = 0x1a20;
      _DAT_40000060 = 0x500;
    }
    break;
  default:
    if (param_1 == 0xf) {
      uVar10 = 0;
      _DAT_40000064 = 0x20;
      _DAT_40000060 = 0x1b00;
    }
    else if (param_1 == 0x10) {
      uVar10 = 0x4000;
      _DAT_40000064 = 0x20;
      _DAT_40000060 = 0x1b00;
    }
    else {
      if (param_1 == 0x11) {
        uVar10 = 0x8000;
      }
      else {
        uVar10 = 0xc000;
      }
      _DAT_40000064 = 0x20;
      _DAT_40000060 = 0x1b00;
    }
  }
  uVar8 = (uint)*DAT_1402de88;
  if (uVar8 == 0) {
    uVar8 = 0xffffffff;
  }
  else if (uVar8 == 1) {
    uVar8 = 0xffffffff;
    _DAT_40000060 = _DAT_40000060 & 0xffffefdf | 0x1000;
    _DAT_40000064 = _DAT_40000064 & 0xffffefdf | 0x20;
  }
  else {
    uVar8 = uVar8 - 2;
    _DAT_40000060 = _DAT_40000060 & 0xffffefdf | 0x20;
    _DAT_40000064 = _DAT_40000064 & 0xffffefdf | 0x1000;
  }
  iVar7 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar7 = getBasePriority();
  }
  if (iVar7 != 0x40) {
    bVar1 = *DAT_1402dea0;
    *DAT_1402de8c = 0x1402dcec;
    puVar3[1] = unaff_lr;
    iVar4 = DAT_1402de94;
    uVar9 = bVar1 + 1;
    *pbVar5 = (char)uVar9 + (char)(uint)((ulonglong)uVar6 * (ulonglong)uVar9 >> 0x23) * -10;
    *(undefined4 *)(iVar4 + (uint)bVar1 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  uVar6 = _DAT_40000068 & 0xffff3fff | uVar10;
  if (uVar8 != 0xffffffff) {
    uVar6 = uVar8 & 3 | _DAT_40000068 & 0xffff3ffc | uVar10;
  }
  _DAT_40000068 = uVar6;
  if (iVar7 == 0) {
    *DAT_1402de8c = 0xffffffff;
  }
  pbVar5 = DAT_1402de98;
  uVar6 = DAT_1402de90;
  bVar1 = *DAT_1402de98;
  *(undefined4 *)(DAT_1402de9c + (uint)bVar1 * 4) = unaff_lr;
  uVar10 = bVar1 + 1;
  *pbVar5 = (char)uVar10 + (char)(uint)((ulonglong)uVar6 * (ulonglong)uVar10 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar7);
  }
  if ((_DAT_40000060 & 0x800) == 0) {
    _DAT_40000064 = 0x20;
    return 0;
  }
  return 0;
}

