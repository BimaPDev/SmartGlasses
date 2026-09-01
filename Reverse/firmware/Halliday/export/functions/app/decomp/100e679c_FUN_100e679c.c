/* FUN_100e679c @ 0x100e679c */

undefined4 FUN_100e679c(char *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  undefined1 local_54;
  undefined1 uStack_53;
  undefined2 local_52;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined4 *local_38;
  
  piVar3 = DAT_100e6a28;
  if ((*(int *)(param_1 + 4) == 0) || (param_1[1] == '\0')) {
    return 0xffffffea;
  }
  FUN_100e6120(0xffffffff,0xffffffff);
  if ((*(int *)(param_1 + 4) != *piVar3) || ((char)piVar3[3] != param_1[1])) {
    if ((*(int *)(param_1 + 4) == piVar3[0x87]) && ((char)piVar3[0x8a] == param_1[1])) {
      iVar11 = 1;
      goto LAB_100e67e6;
    }
    uVar4 = DAT_100e6a38 | (DAT_100e6a2c - DAT_100e6a30) * 0x20 & 0xff00U;
LAB_100e6826:
    FUN_100a5b78(uVar4,DAT_100e6a34);
    uVar8 = 0xfffffffb;
    goto LAB_100e682e;
  }
  iVar11 = 0;
LAB_100e67e6:
  piVar10 = piVar3 + iVar11 * 0x87;
  if (6 < *(byte *)((int)piVar10 + 0xd) - 3) {
    uVar4 = (DAT_100e6a2c - DAT_100e6a30) * 0x20 & 0xff00U | 0x3dc0021;
    goto LAB_100e6826;
  }
  iVar5 = FUN_10138aea(piVar10);
  if (iVar5 != 0) {
    if (*param_1 != '\x06') {
      FUN_100a5b78(DAT_100e6a3c | (DAT_100e6a2c - DAT_100e6a30) * 0x20 & 0xff00U,DAT_100e6a40);
      uVar8 = 0xfffffff0;
      goto LAB_100e682e;
    }
switchD_100e686c_caseD_6:
    iVar5 = iVar11 * 0x21c;
    if (*(byte *)((int)piVar3 + iVar5 + 0xd) - 4 < 5) {
      iVar6 = FUN_10138aea(piVar10);
      if (iVar6 == 0) {
        *(undefined1 *)((int)piVar3 + iVar5 + 0xd) = 9;
        FUN_10138b22(piVar10);
        FUN_100e0754(piVar3[iVar11 * 0x87],(char)piVar3[iVar11 * 0x87 + 2],0);
        uVar8 = 0;
        goto LAB_100e682e;
      }
      *(byte *)((int)piVar3 + iVar5 + 0xe) = *(byte *)((int)piVar3 + iVar5 + 0xe) | 0x20;
      goto switchD_100e686c_default;
    }
    FUN_10138ace(piVar10,6);
    goto LAB_100e6b42;
  }
  switch(*param_1) {
  case '\0':
    if (*(int *)(param_1 + 0x10) != 0) {
      piVar3[iVar11 * 0x87 + 1] = *(int *)(param_1 + 0x10);
      *(undefined1 *)((int)piVar3 + iVar11 * 0x21c + 0xd) = 4;
      FUN_10138b22(piVar10);
      local_4c._0_2_ = 2;
      local_4c._2_2_ = FUN_1011ea10(piVar3[iVar11 * 0x87 + 1]);
      local_48 = piVar3[iVar11 * 0x87 + 1];
      local_44 = DAT_100e6a44;
      local_40 = DAT_100e6a48;
      local_3c = 8;
      local_64 = 0x204;
      local_38 = &local_64;
      uVar1 = (undefined1)piVar3[iVar11 * 0x87 + 2];
      local_3a = 4;
      puVar7 = &local_4c;
      goto LAB_100e68d8;
    }
    break;
  case '\x01':
    if (*(int *)(param_1 + 0x10) != 0) {
      piVar12 = piVar3 + iVar11 * 0x87;
      piVar12[1] = *(int *)(param_1 + 0x10);
      *(undefined1 *)((int)piVar12 + 0xd) = 5;
      piVar12[6] = 0;
      FUN_10138b22(piVar10);
      local_4c._0_2_ = 2;
      uVar4 = *(uint *)(param_1 + 8);
      local_4c._2_2_ = FUN_1011ea10(piVar12[1]);
      local_48 = piVar12[1];
      local_44 = DAT_100e6a44;
      local_40 = DAT_100e6a48;
      local_64 = DAT_100e6a4c;
      local_60 = DAT_100e6a50;
      local_5c = 8;
      local_58 = ((uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) << 8;
      local_54 = (undefined1)uVar4;
      local_3a = 0x11;
LAB_100e694a:
      local_3c = 8;
      local_38 = &local_64;
      puVar9 = (undefined4 *)&DAT_0000000f;
      uVar13 = 3;
      uVar1 = (undefined1)piVar12[2];
      puVar7 = &local_4c;
LAB_100e695e:
      uVar8 = 0;
      FUN_100e057c(piVar3[iVar11 * 0x87],uVar1,puVar9,puVar7,uVar13);
      goto LAB_100e682e;
    }
    break;
  case '\x02':
    iVar5 = *(int *)(param_1 + 0x10);
    if (iVar5 != 0) {
      *(undefined1 *)((int)piVar3 + iVar11 * 0x21c + 0xd) = 6;
      piVar3[iVar11 * 0x87 + 1] = iVar5;
      FUN_10138b22(piVar10);
      *(byte *)((int)piVar3 + iVar11 * 0x21c + 0xe) =
           *(byte *)((int)piVar3 + iVar11 * 0x21c + 0xe) & 0xf0;
      FUN_100e5de0(piVar10,0);
      goto switchD_100e686c_default;
    }
    break;
  case '\x03':
    if (*(int *)(param_1 + 0x10) != 0) {
      piVar12 = piVar3 + iVar11 * 0x87;
      *(undefined1 *)((int)piVar12 + 0xd) = 7;
      piVar12[6] = 0;
      FUN_10138b22(piVar10);
      local_48 = *(int *)(param_1 + 0x10);
      local_44 = DAT_100e6a54;
      local_40 = DAT_100e6a58;
      uVar4 = *(uint *)(param_1 + 8);
      local_4c._2_2_ = (ushort)(byte)param_1[0xc];
      local_64 = DAT_100e6a50;
      local_60 = 8;
      local_4c._0_2_ = 2;
      local_5c = ((uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) << 8;
      local_58._0_1_ = (undefined1)uVar4;
      local_3a = 0xd;
      goto LAB_100e694a;
    }
    break;
  case '\x04':
    uVar4 = (uint)*(byte *)((int)piVar3 + iVar11 * 0x21c + 0xd);
    if ((uVar4 - 7 < 2) || (uVar4 == 5)) {
      FUN_10138b22(piVar10);
      puVar9 = (undefined4 *)0x0;
      uVar13 = 0;
      uVar1 = (undefined1)piVar3[iVar11 * 0x87 + 2];
      puVar7 = puVar9;
      goto LAB_100e695e;
    }
    break;
  case '\x05':
    *(undefined1 *)((int)piVar3 + iVar11 * 0x21c + 0xd) = 8;
    piVar3[iVar11 * 0x87 + 6] = 0;
    FUN_10138b22(piVar10);
    local_5c = DAT_100e6b7c;
    local_54 = 8;
    uStack_53 = 0;
    local_58 = DAT_100e6b80;
    local_4c._0_2_ = 0x101;
    uVar4 = (uint)(byte)param_1[0xc];
    local_64 = 2;
    local_60 = 0;
    bVar2 = (byte)(((uint)(byte)param_1[2] << 0x1c) >> 0x1c);
    local_4c._2_2_ = CONCAT11(local_4c._3_1_,bVar2);
    local_50 = &local_4c;
    if (uVar4 == 0) {
      iVar5 = 3;
    }
    else {
      local_4c._2_2_ = CONCAT11(2,bVar2);
      local_48 = CONCAT31(local_48._1_3_,param_1[0xc]);
      FUN_1013d03e((int)&local_48 + 1,*(undefined4 *)(param_1 + 0x10),uVar4,0x25);
      *(undefined1 *)((int)local_50 + uVar4 + 5) = 3;
      *(undefined1 *)((int)&local_48 + uVar4 + 2) = 1;
      iVar5 = uVar4 + 8;
      *(byte *)((int)&local_48 + uVar4 + 3) = (byte)param_1[2] >> 4;
    }
    *(undefined1 *)((int)local_50 + iVar5) = 4;
    *(undefined1 *)((int)&local_4c + iVar5 + 1) = 2;
    *(undefined1 *)((int)&local_4c + iVar5 + 2) = 0xff;
    *(undefined1 *)((int)&local_4c + iVar5 + 3) = 0xff;
    uVar4 = iVar5 + 4;
    if (0x2a < uVar4) {
      FUN_100a5b78((DAT_100e6b88 - DAT_100e6b84) * 0x20 & 0xff00U | 0x1a20012,DAT_100e6b8c,uVar4,
                   0x2a);
    }
    uVar1 = (undefined1)piVar3[iVar11 * 0x87 + 2];
    local_52 = (undefined2)uVar4;
    puVar7 = &local_64;
LAB_100e68d8:
    FUN_100e057c(piVar3[iVar11 * 0x87],uVar1,0xf,puVar7,3);
  default:
switchD_100e686c_default:
    uVar8 = 0;
    goto LAB_100e682e;
  case '\x06':
    goto switchD_100e686c_caseD_6;
  }
LAB_100e6b42:
  uVar8 = 0xffffffea;
LAB_100e682e:
  FUN_100e6114();
  return uVar8;
}

