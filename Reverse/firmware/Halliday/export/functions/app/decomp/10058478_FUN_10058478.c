/* FUN_10058478 @ 0x10058478 */

undefined4 FUN_10058478(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  int local_94;
  uint local_8c;
  int local_88;
  undefined1 auStack_84 [20];
  undefined4 local_70;
  int local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  int local_5c [14];
  
  local_8c = 0;
  local_88 = 0;
  local_94 = *(int *)(param_1 + 8) + 0x42;
  FUN_1011af24();
  iVar3 = FUN_1011aea4(param_1);
  if (iVar3 == 0) {
    FUN_1011ab66(*(undefined4 *)(param_1 + 0x14),DAT_10058718);
  }
  iVar3 = 0;
  iVar13 = -1;
  uVar14 = 0;
  bVar1 = false;
  puVar10 = (undefined4 *)0x0;
  puVar15 = (undefined4 *)0x0;
  FUN_1011ea48(*(int *)(param_1 + 8) + 8,0,0x14);
  FUN_10059644(param_1);
  FUN_1005a300(*(undefined4 *)(param_1 + 0xc),*(int *)(param_1 + 8) + 0x42,
               *(undefined2 *)(*(int *)(param_1 + 8) + 0x3c));
  FUN_1011b2f0(param_1);
  piVar12 = local_5c;
  bVar2 = false;
  while (local_88 != 1) {
    if (0xb < local_8c) goto LAB_100584e6;
    if (iVar13 == 0) goto LAB_1005864c;
    iVar4 = FUN_100593e4(&local_88,piVar12,local_94,2);
    local_94 = piVar12[1];
    if (local_88 == 0) {
      return 0xfffffff8;
    }
    if ((local_88 == 1) && (uVar5 = DAT_10058724, iVar4 != 0)) goto LAB_10058520;
    if (local_8c == 0) goto LAB_10058580;
    iVar4 = FUN_1005a05c(*piVar12);
    if (iVar4 != 0) {
      uVar5 = DAT_10058728;
      if (iVar3 == 0) goto LAB_10058552;
      iVar13 = *(int *)(param_1 + 8);
      goto LAB_1005853c;
    }
    if (local_8c == 0) {
LAB_10058580:
      if (!bVar1) {
        puVar10 = (undefined4 *)FUN_1011adac(puVar15,*piVar12,auStack_84);
      }
      piVar12 = piVar12 + 1;
      iVar13 = iVar13 + -1;
      if (puVar10 == (undefined4 *)0x0) {
        if ((local_8c == 0) &&
           ((iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x1c), iVar4 == 0 ||
            (*(int *)(iVar4 + 0xc) == 0)))) {
          FUN_10059990(param_1,2,DAT_10058734,local_5c[0],DAT_10058730);
        }
        bVar1 = true;
      }
      else {
        if ((bVar2) && (puVar10[3] != 0)) {
          FUN_1011af24(param_1);
          FUN_100596fc(param_1);
          uVar5 = DAT_1005872c;
LAB_10058552:
          FUN_10059990(param_1,2,uVar5);
          return 0xfffffff8;
        }
        if (puVar10[3] != 0) {
          iVar4 = *(int *)(param_1 + 8);
          uVar5 = puVar10[1];
          uVar6 = puVar10[2];
          uVar8 = puVar10[3];
          *(undefined4 *)(iVar4 + 8) = *puVar10;
          *(undefined4 *)(iVar4 + 0xc) = uVar5;
          *(undefined4 *)(iVar4 + 0x10) = uVar6;
          *(undefined4 *)(iVar4 + 0x14) = uVar8;
          *(undefined4 *)(iVar4 + 0x18) = puVar10[4];
          uVar14 = local_8c;
          if ((puVar10[2] == 0) && (*(char *)((int)puVar10 + 0x11) == -2)) {
            iVar13 = *(byte *)(puVar10 + 4) - 1;
            local_8c = local_8c + 1;
          }
        }
        puVar15 = puVar10;
        if (puVar10[1] != 0) {
          local_70 = *puVar10;
          local_6c = puVar10[1];
          uStack_68 = puVar10[2];
          uStack_64 = puVar10[3];
          local_60 = puVar10[4];
          iVar3 = puVar10[1];
        }
      }
      if ((iVar13 != 0) || (local_88 == 2)) {
        local_8c = local_8c + 1;
      }
    }
    else {
      iVar4 = FUN_1005a3fc(param_1,puVar10,*piVar12);
      if (iVar4 == 2) break;
      if (iVar4 == 3) goto LAB_10058580;
      local_8c = local_8c + 1;
      bVar2 = true;
    }
  }
  if (0xb < local_8c) {
LAB_100584e6:
    uVar5 = DAT_10058720;
    iVar4 = DAT_1005871c;
    if (local_88 == 2) {
LAB_10058520:
      FUN_10059990(param_1,2,uVar5,iVar4);
      return 0xfffffff8;
    }
  }
LAB_1005864c:
  if (bVar2) {
    FUN_1011b33a(param_1);
    FUN_100593e4(&local_8c,local_5c,*(int *)(param_1 + 8) + 0x42,0xc);
  }
  iVar13 = *(int *)(param_1 + 8);
  local_5c[local_8c] = 0;
  if (*(int *)(iVar13 + 0x14) != 0) {
    uVar9 = (uint)*(byte *)(iVar13 + 0x18);
    uVar11 = local_8c - uVar14;
    if (uVar9 != 0) {
      uVar7 = (uint)*(byte *)(iVar13 + 0x19);
      if (uVar7 == 0xff) {
        uVar7 = 0xffff;
      }
      if ((uVar11 < uVar9) || (uVar9 + uVar7 < uVar11)) {
        FUN_10059990(param_1,2,DAT_10058738,*(undefined4 *)(iVar13 + 8));
        FUN_100582d0(param_1);
        return 0xffffffea;
      }
    }
    FUN_1011aafc(iVar13 + 0x260,0x10000);
    thunk_FUN_10113e2c(*(int *)(param_1 + 8) + 0x2f4);
    uVar16 = (**(code **)(*(int *)(param_1 + 8) + 0x14))(param_1,uVar11,local_5c + uVar14);
    thunk_FUN_10113cfc(*(int *)(param_1 + 8) + 0x2f4,(int)((ulonglong)uVar16 >> 0x20),0xffffffff,
                       0xffffffff);
    FUN_1011ab12(*(int *)(param_1 + 8) + 0x260,0xfffeffff);
    return (int)uVar16;
  }
  if (iVar3 == 0) {
    return 0xfffffff8;
  }
  if (*(int *)(iVar13 + 0xc) != iVar3) {
LAB_1005853c:
    *(undefined4 *)(iVar13 + 8) = local_70;
    *(int *)(iVar13 + 0xc) = iVar3;
    *(undefined4 *)(iVar13 + 0x10) = uStack_68;
    *(undefined4 *)(iVar13 + 0x14) = uStack_64;
    *(undefined4 *)(iVar13 + 0x18) = local_60;
    local_6c = iVar3;
  }
  FUN_100582d0(param_1);
  return 1;
}

