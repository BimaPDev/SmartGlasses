/* FUN_100a39e4 @ 0x100a39e4 */

void FUN_100a39e4(undefined4 param_1,ushort *param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  byte *pbVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  byte bVar8;
  undefined4 uVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  
  pbVar4 = DAT_100a3cf4;
  uVar11 = (uint)*param_2;
  uVar14 = (DAT_100a3ce4 - DAT_100a3ce8) * 0x20 & 0xff00;
  if (uVar11 != 1) {
    uVar14 = uVar14 | 0xb50011;
    uVar7 = DAT_100a3cf0;
    uVar9 = DAT_100a3cec;
    goto LAB_100a3a0c;
  }
  if ((uint)*DAT_100a3cf4 != *(uint *)(param_2 + 2)) {
    FUN_100a36ac(*(uint *)(param_2 + 2) == 1);
    *pbVar4 = (byte)*(undefined4 *)(param_2 + 2);
  }
  FUN_100a5b78(uVar14 | 0xbe0033,DAT_100a3cf0,DAT_100a3cf8,*param_2,param_2[1],
               *(undefined4 *)(param_2 + 2),param_3,param_4);
  piVar5 = DAT_100a3cfc;
  if (*(int *)(param_2 + 2) == 0) {
    iVar6 = *DAT_100a3cfc;
    uVar1 = param_2[1];
    bVar10 = *(byte *)(iVar6 + 0xb4);
    if ((bVar10 & 0x40) == 0) {
      *(ushort *)(iVar6 + 0x9a) = uVar1;
      *(ushort *)(iVar6 + 0x98) = bVar10 & 0x40;
    }
    else {
      if (*(byte *)(iVar6 + 0x98) == uVar1) {
        *(byte *)(iVar6 + 0xb4) = bVar10 & 0x7f;
      }
      else if (uVar1 == *(ushort *)(iVar6 + 0x98) >> 8) {
        *(byte *)(iVar6 + 0xb5) = *(byte *)(iVar6 + 0xb5) & 0xfe;
      }
      *(ushort *)(iVar6 + 0x9a) = *(ushort *)(iVar6 + 0x98);
      if ((*(byte *)(iVar6 + 0xb5) & 1) != *(byte *)(iVar6 + 0xb4) >> 7) {
        return;
      }
      if (*(char *)(iVar6 + 0xb4) < '\0') {
        return;
      }
      *(byte *)(iVar6 + 0xb4) = *(byte *)(iVar6 + 0xb4) & 0xbf;
      *(undefined2 *)(iVar6 + 0x98) = 0;
    }
    *(byte *)(iVar6 + 0xb4) = *(byte *)(iVar6 + 0xb4) & 0xef;
    iVar12 = *(int *)(iVar6 + 0x94);
    if ((iVar12 == 0x10000000) || (iVar12 == 0x200000)) {
      uVar7 = 0x2000000;
      goto LAB_100a3b18;
    }
    if (iVar12 == 0x400000) {
      uVar7 = 0x800000;
      goto LAB_100a3b18;
    }
    iVar6 = FUN_100a3970(*(undefined2 *)(iVar6 + 0x9a));
    if (iVar6 == 0) {
      iVar6 = *piVar5;
switchD_100a3c0e_caseD_1:
      uVar7 = 0x4000000;
      goto LAB_100a3b18;
    }
    iVar6 = *piVar5;
    if (*(uint *)(iVar6 + 0xa0) == ((uint)*(ushort *)(iVar6 + 0x9a) | *(uint *)(iVar6 + 0x94))) {
      if ((*(byte *)(iVar6 + 0xb4) & 0xf) != 0) {
        FUN_1013cb84();
      }
      iVar6 = *piVar5;
      bVar10 = *(byte *)(iVar6 + 0xb4);
      bVar8 = bVar10 + 1;
    }
    else {
      if ((*(byte *)(iVar6 + 0xb4) & 0xf) != 0) {
        FUN_1013cb84();
      }
      iVar6 = *piVar5;
      bVar8 = 1;
      bVar10 = *(byte *)(iVar6 + 0xb4);
    }
    *(byte *)(iVar6 + 0xb4) = bVar10 & 0xf0 | bVar8 & 0xf;
    uVar15 = thunk_FUN_10115958();
    *(undefined8 *)(iVar6 + 0xa8) = uVar15;
    iVar6 = *piVar5;
    switch(*(byte *)(iVar6 + 0xb4) & 0xf) {
    case 1:
      goto switchD_100a3c0e_caseD_1;
    case 2:
      uVar7 = 0x40000000;
      break;
    case 3:
      uVar7 = 0x100000;
      break;
    case 4:
      uVar7 = 0x80000;
      break;
    case 5:
      uVar7 = 0x40000;
      break;
    default:
      goto switchD_100a3c0e_default;
    }
LAB_100a3b18:
    *(undefined4 *)(iVar6 + 0x94) = uVar7;
switchD_100a3c0e_default:
    uVar11 = FUN_10061948();
    if (uVar11 < 0xfffffff0) {
      uVar11 = uVar11 + 0x10 >> 5;
    }
    else {
      uVar11 = 0x8000000;
    }
    *(uint *)(*piVar5 + 0xb0) = uVar11 / 1000;
LAB_100a3b52:
    bVar3 = true;
  }
  else {
    if (*(int *)(param_2 + 2) == 1) {
      iVar6 = *DAT_100a3cfc;
      uVar1 = param_2[1];
      uVar2 = *(ushort *)(iVar6 + 0x98);
      if ((uVar1 == *(byte *)(iVar6 + 0x98)) || (uVar1 == uVar2 >> 8)) {
        uVar11 = FUN_10061948();
        if (uVar11 < 0xfffffff0) {
          uVar11 = uVar11 + 0x10 >> 5;
        }
        else {
          uVar11 = 0x8000000;
        }
        iVar6 = *piVar5;
        iVar12 = uVar11 / 1000 - *(int *)(iVar6 + 0xb0);
        if (iVar12 < (int)(uint)*(ushort *)(iVar6 + 200)) {
          if (iVar12 < (int)(uint)*(ushort *)(iVar6 + 0xc6)) {
            if (((int)(uint)*(ushort *)(iVar6 + 0xc4) <= iVar12) &&
               (*(int *)(iVar6 + 0x94) != 0x10000000)) {
              *(undefined4 *)(iVar6 + 0x94) = 0x10000000;
              *(short *)(iVar6 + 0x9a) = *(short *)(iVar6 + 0x98);
              if (*(short *)(iVar6 + 0x98) == 0) {
                *(byte *)(iVar6 + 0xb4) = *(byte *)(iVar6 + 0xb4) | 0x10;
                FUN_1011dc0a(iVar6 + 0x30,*(undefined2 *)(iVar6 + 0xce));
              }
              goto LAB_100a3b52;
            }
          }
          else if (*(int *)(iVar6 + 0x94) != 0x200000) {
            *(undefined2 *)(iVar6 + 0x9a) = *(undefined2 *)(iVar6 + 0x98);
            uVar7 = 0x200000;
            goto LAB_100a3d5e;
          }
        }
        else if (*(int *)(iVar6 + 0x94) != 0x400000) {
          *(undefined2 *)(iVar6 + 0x9a) = *(undefined2 *)(iVar6 + 0x98);
          uVar7 = 0x400000;
LAB_100a3d5e:
          *(undefined4 *)(iVar6 + 0x94) = uVar7;
          goto LAB_100a3b52;
        }
        goto LAB_100a3a56;
      }
      if (*(byte *)(iVar6 + 0x98) == 0) {
        *(ushort *)(iVar6 + 0x98) = uVar1;
        *(byte *)(iVar6 + 0xb4) = *(byte *)(iVar6 + 0xb4) & 0x3f | 0x80;
      }
      else if (uVar2 >> 8 == 0) {
        *(ushort *)(iVar6 + 0x98) = uVar2 | uVar1 << 8;
        *(ushort *)(iVar6 + 0xb4) = *(ushort *)(iVar6 + 0xb4) | 0x140;
      }
      uVar11 = FUN_10061948();
      uVar13 = uVar11 + 0x10;
      if (0xffffffef < uVar11) {
        uVar13 = 0x8000000;
      }
      iVar6 = *piVar5;
      if (0xffffffef >= uVar11) {
        uVar13 = uVar13 >> 5;
      }
      *(uint *)(iVar6 + 0xb0) = uVar13 / 1000;
      *(byte *)(iVar6 + 0xb4) = *(byte *)(iVar6 + 0xb4) & 0xdf;
      *(undefined2 *)(iVar6 + 0x9a) = *(undefined2 *)(iVar6 + 0x98);
      *(undefined4 *)(iVar6 + 0x94) = 0x20000000;
      goto LAB_100a3b52;
    }
LAB_100a3a56:
    bVar3 = false;
  }
  iVar6 = *piVar5;
  if (*(int *)(iVar6 + 0x90) != 0) {
    *(uint *)(iVar6 + 0xa4) = (uint)param_2[1] | *(int *)(param_2 + 2) << 0x1f;
    FUN_1011dc0a(iVar6 + 0x60,0);
  }
  if ((*(int *)(param_2 + 2) == 1) && ((*(byte *)(*piVar5 + 0xb4) & 0xf) != 0)) {
    FUN_1013cb84();
    iVar6 = *piVar5;
    FUN_1011dc0a(iVar6,(uint)*(ushort *)(iVar6 + 0xca) + (uint)*(ushort *)(iVar6 + 0xcc));
  }
  if (bVar3) {
    iVar6 = *piVar5;
    uVar11 = (uint)*(ushort *)(iVar6 + 0x9a) | *(uint *)(iVar6 + 0x94);
    *(uint *)(iVar6 + 0x9c) = uVar11;
    *(uint *)(iVar6 + 0xa0) = uVar11;
    if (*(code **)(iVar6 + 0x90) != (code *)0x0) {
      (**(code **)(iVar6 + 0x90))(uVar11,1);
    }
    iVar6 = FUN_100a365c();
    if (iVar6 == 0) {
      iVar6 = FUN_10063c70();
      if (0x11 < iVar6) {
        iVar6 = FUN_100a3970(*(undefined2 *)(*piVar5 + 0x9a));
        if (iVar6 == 0) {
          iVar6 = *piVar5;
          uVar7 = 0;
        }
        else {
          iVar12 = *piVar5;
          uVar15 = thunk_FUN_10115958(iVar6,iVar6);
          *(undefined8 *)(iVar12 + 0xa8) = uVar15;
          iVar6 = *piVar5;
          iVar12 = *(int *)(iVar6 + 0x94);
          if (((iVar12 == 0x10000000) || (iVar12 == 0x200000)) || (iVar12 == 0x400000)) {
            uVar7 = 0;
          }
          else {
            uVar7 = 0x15e;
          }
        }
        FUN_1011dc0a(iVar6,uVar7);
        return;
      }
      uVar11 = FUN_10063c70();
      uVar14 = uVar14 | 0x15c0031;
      uVar7 = DAT_100a3e30;
      uVar9 = DAT_100a3e2c;
LAB_100a3a0c:
      FUN_100a5b78(uVar14,uVar7,uVar9,uVar11);
      return;
    }
    FUN_100a5b78(uVar14 | 0x1560031,DAT_100a3cf0,DAT_100a3d00);
    *(byte *)(*piVar5 + 0xb4) = *(byte *)(*piVar5 + 0xb4) & 0xf0;
  }
  return;
}

