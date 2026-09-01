/* FUN_1006dbb8 @ 0x1006dbb8 */

undefined4 FUN_1006dbb8(int param_1,uint param_2,ushort *param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  uVar7 = *(uint *)(param_3 + 10);
  uVar4 = uVar7 & 0xffff;
  iVar13 = *(int *)(param_1 + 4);
  if ((uVar4 == 0) || (*(ushort *)(iVar13 + 8) < uVar4)) {
    uVar4 = ((int)PTR_DAT_1006ddf8 - (int)PTR_DAT_1006ddf4) * 0x20 & 0xff00U | 0x1580000;
    puVar5 = PTR_s_task__d__length__d_error__1006ddfc;
    goto LAB_1006dbee;
  }
  iVar6 = *(int *)(param_1 + 0x10);
  uVar2 = param_3[0xc];
  iVar11 = iVar6 + param_2 * 4;
  uVar9 = *(uint *)(iVar11 + 0x60);
  iVar12 = *(int *)(param_3 + 8);
  if (uVar9 == 0) {
LAB_1006dc3c:
    if (param_2 == 3) {
      uVar4 = (uint)*(ushort *)(iVar13 + 8);
    }
    else if (uVar4 < 0x10) {
      uVar4 = 0x10;
    }
    iVar3 = FUN_10068cf4(DAT_1006de04,uVar4,1);
    if (iVar3 == 0) {
      uVar4 = ((int)PTR_DAT_1006ddf8 - (int)PTR_DAT_1006ddf4) * 0x20 & 0xff00U | 0x1760000;
      puVar5 = DAT_1006de08;
LAB_1006dbee:
      FUN_100a5b78(uVar4 | 0x12,PTR_s_i2cmt_task_buf_start_1006de00,puVar5,param_2,uVar7 & 0xffff);
      return 0xffffffff;
    }
    uVar9 = iVar3 + 0x10;
    *(uint *)(iVar11 + 0x60) = uVar9;
    *(uint *)(iVar11 + 0x70) = uVar4;
    if (((uVar2 & 1) != 0) || (iVar12 == 0)) {
      if (uVar9 == 0) {
        return 0xffffffff;
      }
      goto LAB_1006dc82;
    }
    if (uVar9 == 0) {
      return 0xffffffff;
    }
  }
  else {
    if (*(uint *)(iVar11 + 0x70) < (uVar7 & 0xffff)) {
      FUN_1011ec66(uVar9 - 0x10);
      *(undefined4 *)(iVar11 + 0x60) = 0;
      *(undefined4 *)(iVar11 + 0x70) = 0;
      goto LAB_1006dc3c;
    }
    if (((uVar2 & 1) != 0) || (iVar12 == 0)) goto LAB_1006dc82;
  }
  FUN_1011ea40(uVar9,iVar12,uVar7 & 0xffff);
LAB_1006dc82:
  *(ushort **)(iVar11 + 0x50) = param_3;
  bVar1 = *(byte *)((int)param_3 + 0xb);
  iVar13 = (uint)*(byte *)(iVar13 + 10) * 0x4000;
  puVar8 = (uint *)(iVar13 + 0x40088000);
  *(undefined4 *)(iVar13 + 0x40088014) = *(undefined4 *)(iVar13 + 0x40088014);
  *puVar8 = *puVar8 | 0x40;
  uVar4 = *(uint *)(param_3 + 4);
  uVar7 = *(uint *)(param_3 + 0xc);
  if (((bVar1 & 0x20) == 0) || ((int)((uint)(byte)param_3[0xc] << 0x1f) < 0)) {
    uVar10 = *(uint *)(param_3 + 10);
    puVar8[param_2 * 0x10 + 0x42] = uVar9;
    puVar8[param_2 * 0x10 + 0x43] = uVar10;
    if (uVar10 != 0) {
      puVar8[(param_2 + 4) * 0x10 + 1] = (byte)param_3[6] & 2 | 1;
    }
  }
  else {
    puVar8[param_2 * 0x10 + 0x41] = puVar8[param_2 * 0x10 + 0x41] & 0xfffffffe;
  }
  uVar10 = *(uint *)(param_3 + 2);
  uVar9 = 1 << (param_2 & 0xff);
  if ((uVar10 & 1) == 0) {
    uVar9 = *(uint *)(iVar13 + 0x40088010) & ~uVar9;
  }
  else {
    uVar9 = uVar9 | *(uint *)(iVar13 + 0x40088010);
  }
  *(uint *)(iVar13 + 0x40088010) = uVar9;
  uVar9 = 1 << (param_2 + 4 & 0xff);
  if ((uVar10 & 2) == 0) {
    uVar9 = *(uint *)(iVar13 + 0x40088010) & ~uVar9;
  }
  else {
    uVar9 = uVar9 | *(uint *)(iVar13 + 0x40088010);
  }
  *(uint *)(iVar13 + 0x40088010) = uVar9;
  uVar9 = 1 << (param_2 + 8 & 0xff);
  if ((uVar10 & 4) == 0) {
    uVar9 = *(uint *)(iVar13 + 0x40088010) & ~uVar9;
  }
  else {
    uVar9 = uVar9 | *(uint *)(iVar13 + 0x40088010);
  }
  *(uint *)(iVar13 + 0x40088010) = uVar9;
  uVar9 = 1 << (param_2 + 0xc & 0xff);
  if ((int)(uVar10 << 0x1c) < 0) {
    uVar9 = uVar9 | *(uint *)(iVar13 + 0x40088010);
  }
  else {
    uVar9 = *(uint *)(iVar13 + 0x40088010) & ~uVar9;
  }
  *(uint *)(iVar13 + 0x40088010) = uVar9;
  puVar8[param_2 * 0x10 + 0x40] = uVar4 & 0x7fffffff;
  puVar8[param_2 * 0x10 + 0x45] = uVar7;
  if ((int)((uint)bVar1 << 0x18) < 0) {
    *(undefined1 *)(iVar6 + 0x2e) = 1;
    puVar8[param_2 * 0x10 + 0x40] = puVar8[param_2 * 0x10 + 0x40] & 0x7fffffff;
    puVar8[param_2 * 0x10 + 0x40] = puVar8[param_2 * 0x10 + 0x40] | 0x80000000;
  }
  else {
    FUN_10056aa0(*(byte *)((int)param_3 + 1) >> 2,0);
    FUN_1013d9a0(*(byte *)((int)param_3 + 1) >> 2);
    FUN_1011aa34(((byte)*param_3 & 0x1f) >> 1,(*param_3 & 0x3ff) >> 5,
                 *(byte *)((int)param_3 + 1) >> 2);
    FUN_10056aa0(*(byte *)((int)param_3 + 1) >> 2,(byte)*param_3 & 1);
  }
  return 0;
}

