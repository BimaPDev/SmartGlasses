/* FUN_1010cba0 @ 0x1010cba0 */

int FUN_1010cba0(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  iVar2 = DAT_1010cf10;
  if (param_1 == (uint *)0x0) {
    return 1;
  }
  iVar3 = FUN_1011ea30(*(undefined4 *)(DAT_1010cf10 + 0x720),param_1,0xbc,param_4,param_4);
  if (iVar3 == 0) {
    if ((*(int *)(iVar2 + 0x738) == 0 && *(int *)(iVar2 + 0x7b4) == 0) &&
        *(int *)(iVar2 + 0x7bc) == 0) {
      bVar1 = false;
      if (*(char *)(iVar2 + 0x784) == '\0') {
        return 0;
      }
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = true;
  }
  uVar4 = *(ushort *)((int)param_1 + 0xe) - 0x40d;
  if ((uVar4 & 0xffff) < 0xc) {
    if ((int)((0x905U >> (uVar4 & 0xff)) << 0x1f) < 0) {
      return 7;
    }
  }
  else if (*(ushort *)((int)param_1 + 0xe) - 0x42d < 4) {
    return 7;
  }
  iVar3 = FUN_1010bbe8(param_1);
  if (iVar3 != 0) {
    return iVar3;
  }
  FUN_1010cb38();
  uVar4 = (uint)*(ushort *)((int)param_1 + 0xe);
  if ((uVar4 - 0x40d < 3) || (uVar4 - 0x415 < 4)) {
    if (*(char *)((int)param_1 + 0x21) == '\x01') {
      uVar4 = 0x8000;
    }
    else {
      uVar4 = 0;
    }
    uVar9 = FUN_1013b106((char)param_1[8]);
  }
  else {
    uVar9 = (ulonglong)uVar4 << 0x20;
    uVar4 = 0;
  }
  iVar3 = (int)(uVar9 >> 0x20);
  uVar6 = 0;
  if (*(int *)(iVar2 + 0x76c) != 0) {
    uVar6 = 0x80;
  }
  if (*(int *)(iVar2 + 0x7b0) == 1) {
    uVar8 = 0x10000;
  }
  else {
    uVar8 = 0;
  }
  if (*(short *)((int)param_1 + 0xb2) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x100;
  }
  if (uVar9 < 0xca00000000) {
    if (uVar9 < 0xc000000000) {
      if (0x49ffffffff < uVar9) {
        if (9 < (iVar3 - 0x80U & 0xffff)) goto switchD_1010ccdc_caseD_6;
        switch(iVar3 - 0x80U) {
        case 0:
        case 7:
          goto switchD_1010ccdc_caseD_0;
        case 1:
        case 2:
        case 8:
        case 9:
          goto switchD_1010ccdc_caseD_1;
        case 3:
          goto switchD_1010ccdc_caseD_3;
        case 4:
          goto switchD_1010ccdc_caseD_4;
        case 5:
          goto switchD_1010ccdc_caseD_5;
        default:
          goto switchD_1010ccdc_caseD_6;
        }
      }
      switch(iVar3) {
      case 0:
      case 7:
      case 0xf:
      case 0x13:
        goto switchD_1010cd0e_caseD_0;
      case 1:
      case 2:
      case 8:
      case 9:
        goto switchD_1010cd0e_caseD_1;
      case 3:
      case 0x10:
      case 0x14:
      case 0x15:
        goto switchD_1010cd0e_caseD_3;
      case 4:
      case 0x11:
      case 0x16:
      case 0x17:
        goto switchD_1010cd0e_caseD_4;
      case 5:
      case 0x12:
      case 0x18:
      case 0x19:
        goto switchD_1010cd0e_caseD_5;
      case 6:
      case 10:
        goto switchD_1010cd0e_caseD_6;
      case 0xb:
        goto switchD_1010cd0e_caseD_b;
      default:
        goto switchD_1010ccdc_caseD_6;
      case 0x40:
      case 0x47:
        goto switchD_1010cd0e_caseD_40;
      case 0x41:
      case 0x42:
      case 0x48:
      case 0x49:
        goto switchD_1010cd0e_caseD_41;
      case 0x44:
        goto switchD_1010cd0e_caseD_44;
      case 0x45:
        goto switchD_1010cd0e_caseD_45;
      }
    }
    switch(iVar3) {
    case 0xc0:
    case 199:
      goto switchD_1010cca6_caseD_c0;
    case 0xc1:
    case 0xc2:
    case 200:
    case 0xc9:
switchD_1010cca6_caseD_c1:
      uVar5 = 0x23;
      goto LAB_1010ce3e;
    default:
      goto switchD_1010ccdc_caseD_6;
    case 0xc4:
switchD_1010cca6_caseD_c4:
      uVar5 = 0x25;
      goto LAB_1010ce3e;
    case 0xc5:
switchD_1010cca6_caseD_c5:
      uVar5 = 0x24;
      goto LAB_1010ce3e;
    }
  }
  if (0x30 < (iVar3 - 0x400U & 0xffff)) {
switchD_1010ccdc_caseD_6:
    FUN_101188d0(DAT_1010cf14);
    return 7;
  }
  switch(iVar3 - 0x400U) {
  case 0:
    goto switchD_1010cca6_caseD_c1;
  case 1:
switchD_1010cd0e_caseD_41:
    uVar5 = 3;
    break;
  case 2:
switchD_1010cca6_caseD_c0:
    uVar5 = 0x22;
    break;
  case 3:
switchD_1010cd0e_caseD_40:
    uVar5 = 2;
    break;
  case 4:
switchD_1010ccdc_caseD_3:
    uVar5 = 0x21;
    break;
  case 5:
switchD_1010cd0e_caseD_3:
    uVar5 = 1;
    break;
  case 6:
    goto switchD_1010cca6_caseD_c5;
  case 7:
switchD_1010cd0e_caseD_45:
    uVar5 = 4;
    break;
  case 8:
switchD_1010cd0e_caseD_44:
    uVar5 = 5;
    break;
  default:
    goto switchD_1010ccdc_caseD_6;
  case 10:
switchD_1010cd0e_caseD_b:
    uVar5 = 0;
    break;
  case 0xb:
switchD_1010cd0e_caseD_6:
    uVar5 = 6;
    break;
  case 0xc:
  case 0xd:
  case 0x15:
    uVar5 = 8;
    break;
  case 0xe:
  case 0x17:
    uVar5 = 0xe;
    break;
  case 0xf:
  case 0x18:
    uVar5 = 0xf;
    break;
  case 0x10:
  case 0x16:
    uVar5 = 0xb;
    break;
  case 0x19:
    uVar5 = 0x27;
    break;
  case 0x1a:
    uVar5 = 7;
    break;
  case 0x1b:
    uVar5 = 0x17;
    break;
  case 0x1c:
    uVar5 = 0x37;
    break;
  case 0x1d:
switchD_1010cd0e_caseD_5:
    uVar5 = 0x14;
    break;
  case 0x1e:
switchD_1010ccdc_caseD_5:
    uVar5 = 0x34;
    break;
  case 0x1f:
switchD_1010cd0e_caseD_1:
    uVar5 = 0x13;
    break;
  case 0x20:
switchD_1010ccdc_caseD_1:
    uVar5 = 0x33;
    break;
  case 0x21:
switchD_1010cd0e_caseD_4:
    uVar5 = 0x15;
    break;
  case 0x22:
    goto switchD_1010cca6_caseD_c4;
  case 0x23:
switchD_1010ccdc_caseD_4:
    uVar5 = 0x35;
    break;
  case 0x24:
switchD_1010cd0e_caseD_0:
    uVar5 = 0x12;
    break;
  case 0x25:
switchD_1010ccdc_caseD_0:
    uVar5 = 0x32;
    break;
  case 0x27:
    uVar5 = 0x29;
    break;
  case 0x28:
    uVar5 = 9;
    break;
  case 0x29:
    uVar5 = 0x1a;
    break;
  case 0x2a:
    uVar5 = 10;
    break;
  case 0x2b:
    uVar5 = 0x3a;
    break;
  case 0x2c:
    uVar5 = 0x2a;
    break;
  case 0x2d:
    uVar5 = 0x1c;
    break;
  case 0x2e:
    uVar5 = 0xc;
    break;
  case 0x2f:
    uVar5 = 0x3c;
    break;
  case 0x30:
    uVar5 = 0x2c;
  }
LAB_1010ce3e:
  iVar3 = FUN_1013b1e8(DAT_1010cf10,0xa10,
                       (uint)uVar9 | *(uint *)(iVar2 + 0x7b8) | (uint)(byte)param_1[0x2b] << 0x19 |
                       uVar4 | uVar6 | uVar8 | uVar7 | uVar5);
  if (iVar3 != 0) {
    return iVar3;
  }
  *(undefined4 *)(iVar2 + 0x7b4) = 0;
  *(undefined4 *)(iVar2 + 0x7bc) = 0;
  if (((*(char *)(iVar2 + 0x784) != '\0') && (*(int *)(iVar2 + 0x76c) == 0)) &&
     (*(int *)(iVar2 + 0x6f4) != 0)) {
    iVar3 = FUN_1013b1e8(DAT_1010cf10,0xac8,*(int *)(iVar2 + 0x6f4) + -0x40);
    if (iVar3 != 0) {
      return iVar3;
    }
    iVar3 = FUN_1013b1e8(DAT_1010cf10,0xac8,*(undefined4 *)(iVar2 + 0x6f4));
    if (iVar3 != 0) {
      return iVar3;
    }
    *(undefined1 *)(iVar2 + 0x784) = 0;
  }
  if ((param_1[9] != 0) && (iVar3 = FUN_1013b1e8(DAT_1010d104,0xa5c), iVar3 != 0)) {
    return iVar3;
  }
  if ((param_1[0xb] != 0) && (iVar3 = FUN_1013b1e8(DAT_1010d104,0xa5d), iVar3 != 0)) {
    return iVar3;
  }
  iVar3 = FUN_1013b1e8(DAT_1010cf10,0xa11,param_1[6]);
  if (iVar3 != 0) {
    return iVar3;
  }
  uVar4 = param_1[2];
  if ((char)param_1[3] == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x10000000;
  }
  if ((ushort)(*(short *)((int)param_1 + 0xe) - 0x427U) < 6) {
    uVar4 = (int)uVar4 / 3 << 2;
  }
  iVar3 = FUN_1013b1e8(DAT_1010cf10,0xa12,uVar6 | uVar4);
  if (iVar3 == 0) {
    if (*(int *)(iVar2 + 0x730) == 0) {
      uVar6 = *param_1;
      uVar4 = param_1[1];
    }
    else {
      uVar4 = *(uint *)(iVar2 + 0x748);
      uVar6 = *(uint *)(iVar2 + 0x744);
    }
    iVar3 = FUN_1013b1e8(DAT_1010d104,0xa13,uVar6 | uVar4 << 0x10);
    if (iVar3 == 0) {
      *(undefined4 *)(iVar2 + 0x738) = 0;
      if (bVar1) {
        FUN_1011ea40(*(undefined4 *)(iVar2 + 0x720),param_1,0xbc);
        return 0;
      }
      return 0;
    }
    return iVar3;
  }
  return iVar3;
}

