/* FUN_100974b8 @ 0x100974b8 */

void FUN_100974b8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  uint local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_4c;
  int iStack_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined2 local_2c;
  byte local_2a;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  FUN_101257f6(param_1,&local_7c);
  iVar11 = (local_74 + 1) - local_7c;
  iVar4 = FUN_1012bea2(param_1);
  iVar5 = FUN_1012be8a(param_1);
  iVar6 = FUN_1012be96(param_1);
  uVar13 = (*(byte *)(param_1 + 0x54) & 0x1f) >> 4;
  if ((int)((uint)*(byte *)(param_1 + 0x54) << 0x1a) < 0) {
    uVar13 = uVar13 | 2;
  }
  iVar7 = FUN_1012beae(param_1);
  if ((iVar7 == DAT_100977d4) && (-1 < (int)((uint)*(byte *)(param_1 + 0x2b) << 0x1c))) {
    uVar13 = uVar13 | 4;
  }
  FUN_1009512c(&local_84,*(undefined4 *)(param_1 + 0x2c),iVar4,iVar6,iVar5,iVar11,uVar13);
  FUN_1008964c(param_1);
  bVar12 = *(byte *)(param_1 + 0x54) & 7;
  if (bVar12 == 2) {
    uVar3 = FUN_1012691c(param_1,0,0x66);
    uVar13 = (uint)uVar3;
    if (uVar13 == 0) {
      FUN_1008af34(param_1);
      iVar5 = FUN_10092f48();
      uVar13 = iVar5 / 3 & 0xffff;
    }
    FUN_10093284(&local_6c);
    local_2c = 0xffff;
    local_38 = 300;
    local_30 = 300;
    if ((local_74 + 1) - local_7c < local_84) {
      local_6c = param_1;
      iVar5 = FUN_1012be7c(param_1);
      if (iVar5 == 2) {
        iVar5 = FUN_100938a8(*(undefined4 *)(param_1 + 0x2c));
      }
      local_4c = ((local_74 + 1) - local_7c) - local_84;
      if (iVar5 == 1) {
        local_44 = 0;
      }
      else {
        local_44 = local_4c;
        local_4c = 0;
      }
      local_68 = DAT_100977d8;
      iStack_48 = local_4c;
      iVar6 = FUN_1009340c(param_1);
      iVar5 = local_4c;
      if (iVar6 == 0) {
        uVar8 = 0;
        iVar11 = 0;
      }
      else {
        iVar11 = *(int *)(iVar6 + 0x30);
        uVar8 = (*(byte *)(iVar6 + 0x42) & 3) >> 1;
      }
      if ((iVar11 < local_40) && (local_2a = local_2a & 0xfe, local_3c = iVar11, uVar8 != 0)) {
        local_2a = local_2a | 2;
        local_4c = local_44;
        local_44 = iVar5;
      }
      local_40 = FUN_1012a796(uVar13,local_4c,local_44);
      local_34 = local_40;
      FUN_1009331c(&local_6c);
      iVar5 = 1;
    }
    else {
      iVar5 = 0;
      local_6c = param_1;
      FUN_100932b0(param_1,DAT_100977d8);
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    local_78 = (local_70 + 1) - local_78;
    if ((local_80 <= local_78) || (iVar5 != 0)) {
LAB_100977f6:
      FUN_100932b0(param_1,DAT_10097974);
      *(undefined4 *)(param_1 + 0x50) = 0;
      goto LAB_10097688;
    }
    local_44 = (local_78 - local_80) - *(int *)(iVar4 + 8);
    local_68 = DAT_100977dc;
    local_4c = iVar5;
    iStack_48 = iVar5;
    iVar5 = FUN_1009340c(param_1);
    iVar4 = local_4c;
    if (iVar5 == 0) {
      iVar6 = 0;
      uVar8 = 0;
    }
    else {
      iVar6 = *(int *)(iVar5 + 0x30);
      uVar8 = (*(byte *)(iVar5 + 0x42) & 3) >> 1;
    }
    if ((iVar6 < local_40) && (local_2a = local_2a & 0xfe, local_3c = iVar6, uVar8 != 0)) {
      local_2a = local_2a | 2;
      local_4c = local_44;
      local_44 = iVar4;
    }
    local_40 = FUN_1012a796(uVar13,local_4c,local_44);
    local_34 = local_40;
  }
  else {
    if (bVar12 != 3) {
      if (bVar12 == 1) {
        if ((((local_70 + 1) - local_78 < local_80) && (*(int *)(iVar4 + 8) < local_80)) &&
           (uVar13 = (*(code *)*DAT_10097978)(*(undefined4 *)(param_1 + 0x2c)), 3 < uVar13)) {
          iVar7 = FUN_10092918(iVar4,0x2e);
          iVar11 = (iVar7 + iVar6) * 3;
          iVar9 = FUN_1012be7c(param_1);
          if (iVar9 == 2) {
            iVar9 = FUN_100938a8(*(undefined4 *)(param_1 + 0x2c));
          }
          if (iVar9 != 1) {
            iVar11 = ((local_74 + 1) - local_7c) + (iVar7 + iVar6) * -3;
          }
          iVar4 = *(int *)(iVar4 + 8);
          local_78 = (local_70 + 1) - local_78;
          local_68 = local_78 - (iVar5 + iVar4) * (local_78 / (iVar5 + iVar4));
          if (local_68 < iVar4) {
            iVar4 = -iVar5;
          }
          local_68 = (local_78 + iVar4) - local_68;
          local_6c = iVar11;
          iVar4 = FUN_100971e0(param_1,&local_6c);
          uVar13 = FUN_1011ea10(*(undefined4 *)(param_1 + 0x2c));
          local_88 = (*(code *)*DAT_1009797c)(*(undefined4 *)(param_1 + 0x2c),iVar4);
          puVar1 = DAT_10097980;
          while( true ) {
            uVar8 = local_88;
            puVar2 = DAT_10097994;
            uVar14 = local_88 + 3;
            if (uVar14 <= uVar13) break;
            (*(code *)*puVar1)(*(undefined4 *)(param_1 + 0x2c),&local_88);
            iVar4 = iVar4 + -1;
          }
          iVar5 = 4;
          uVar10 = 0;
          do {
            iVar6 = (*(code *)*DAT_10097984)(*(int *)(param_1 + 0x2c) + local_88);
            uVar10 = uVar10 + iVar6 & 0xff;
            (*(code *)*puVar2)(*(undefined4 *)(param_1 + 0x2c),&local_88);
            if ((3 < uVar10) || (uVar13 < local_88)) break;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          iVar5 = *(int *)(param_1 + 0x2c) + uVar8;
          FUN_10096e9c(param_1);
          if (uVar10 < 5) {
            *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) & 0xbf;
            thunk_FUN_1011ea40(param_1 + 0x30,iVar5,uVar10);
          }
          else {
            iVar6 = FUN_10094254(uVar10 + 1,DAT_10097988);
            *(int *)(param_1 + 0x30) = iVar6;
            if (iVar6 == 0) {
              FUN_10094174(3,DAT_10097990,0x4d4,DAT_10097988,DAT_1009798c);
              goto LAB_10097688;
            }
            thunk_FUN_1011ea40(iVar6,iVar5,uVar10);
            *(undefined1 *)(*(int *)(param_1 + 0x30) + uVar10) = 0;
            *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 0x40;
          }
          *(undefined1 *)(*(int *)(param_1 + 0x2c) + uVar8) = 0x2e;
          *(undefined1 *)(*(int *)(param_1 + 0x2c) + uVar8 + 1) = 0x2e;
          *(undefined1 *)(uVar8 + *(int *)(param_1 + 0x2c) + 2) = 0x2e;
          *(undefined1 *)(*(int *)(param_1 + 0x2c) + uVar14) = 0;
          *(int *)(param_1 + 0x34) = iVar4 + 3;
        }
        else {
          *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
        }
      }
      goto LAB_10097688;
    }
    iVar5 = FUN_1012691c(param_1,0,100);
    uVar3 = FUN_1012691c(param_1,0,0x66);
    uVar13 = (uint)uVar3;
    if (uVar13 == 0) {
      FUN_1008af34(param_1);
      iVar6 = FUN_10092f48();
      uVar13 = iVar6 / 3 & 0xffff;
    }
    FUN_10093284(&local_6c);
    local_2c = 0xffff;
    if ((local_74 + 1) - local_7c < local_84) {
      local_6c = param_1;
      iVar6 = FUN_1012be7c(param_1);
      if (iVar6 == 2) {
        iVar6 = FUN_100938a8(*(undefined4 *)(param_1 + 0x2c));
      }
      if (iVar6 == 1) {
        iVar6 = FUN_10092918(iVar4,0x20);
        local_44 = 0;
        local_4c = iVar6 * -3 - local_84;
      }
      else {
        iVar6 = FUN_10092918(iVar4,0x20);
        local_4c = 0;
        local_44 = iVar6 * -3 - local_84;
      }
      iVar6 = DAT_100977d8;
      local_68 = DAT_100977d8;
      iStack_48 = local_4c;
      local_40 = FUN_1012a796(uVar13);
      iVar11 = FUN_1009340c(param_1,iVar6);
      iVar6 = 0;
      if (iVar11 != 0) {
        iVar6 = *(int *)(iVar11 + 0x30);
      }
      if (iVar5 == 0) {
        if (iVar6 < local_40) {
          local_2a = local_2a & 0xfe;
          local_3c = iVar6;
        }
      }
      else {
        local_30 = *(undefined4 *)(iVar5 + 0x3c);
        local_3c = *(int *)(iVar5 + 0x30);
      }
      FUN_1009331c(&local_6c);
      iVar6 = 1;
    }
    else {
      iVar6 = 0;
      local_6c = param_1;
      FUN_100932b0(param_1,DAT_100977d8);
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    iVar11 = DAT_100977dc;
    if ((local_80 <= (local_70 + 1) - local_78) || (iVar6 != 0)) goto LAB_100977f6;
    local_44 = -(local_80 + *(int *)(iVar4 + 8));
    local_68 = DAT_100977dc;
    local_4c = iVar6;
    iStack_48 = iVar6;
    local_40 = FUN_1012a796(uVar13,0);
    iVar6 = FUN_1009340c(param_1,iVar11);
    iVar4 = 0;
    if (iVar6 != 0) {
      iVar4 = *(int *)(iVar6 + 0x30);
    }
    if (iVar5 == 0) {
      if (iVar4 < local_40) {
        local_2a = local_2a & 0xfe;
        local_3c = iVar4;
      }
    }
    else {
      local_30 = *(undefined4 *)(iVar5 + 0x3c);
      local_3c = *(int *)(iVar5 + 0x30);
    }
  }
  FUN_1009331c(&local_6c);
LAB_10097688:
  FUN_10125af4(param_1);
  return;
}

