/* FUN_2c5a8570 @ 0x2c5a8570 */

void FUN_2c5a8570(int *param_1,int param_2,int param_3)

{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 *local_44;
  uint local_40;
  uint local_30;
  int local_2c;
  
  piVar2 = DAT_2c5a87c4;
  iVar14 = *param_1;
  iVar12 = param_1[1];
  uVar7 = iVar12 - iVar14 >> 5;
  local_2c = *DAT_2c5a87b4;
  if (uVar7 == 0x3ffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(DAT_2c5a87cc,0x3ffffff,iVar12 - iVar14,0);
  }
  uVar6 = uVar7;
  if (uVar7 == 0) {
    uVar6 = 1;
  }
  local_40 = uVar7 + uVar6;
  if (CARRY4(uVar7,uVar6)) {
    local_40 = 0x3ffffff;
    iVar10 = param_2 - iVar14;
    iVar4 = DAT_2c5a87c0;
LAB_2c5a875a:
    if (*DAT_2c5a87c4 == 0) {
      FUN_2c4723c4();
      *piVar2 = 1;
    }
    local_44 = (undefined4 *)FUN_2c47245c(0,iVar4);
  }
  else {
    iVar10 = param_2 - iVar14;
    if (local_40 != 0) {
      if (0x3fffffe < local_40) {
        local_40 = 0x3ffffff;
      }
      iVar4 = local_40 << 5;
      goto LAB_2c5a875a;
    }
    local_44 = (undefined4 *)0x0;
  }
  uVar3 = DAT_2c5a87b8;
  uVar8 = *(undefined4 *)(param_3 + 4);
  iVar4 = (int)local_44 + iVar10 + 0x10;
  *(undefined4 *)((int)local_44 + iVar10) = DAT_2c5a87b8;
  *(undefined4 *)((int)local_44 + iVar10 + 4) = uVar8;
  *(int *)((int)local_44 + iVar10 + 8) = iVar4;
  puVar11 = *(undefined1 **)(param_3 + 8);
  uVar7 = *(uint *)(param_3 + 0xc);
  if ((puVar11 + uVar7 != (undefined1 *)0x0) && (puVar11 == (undefined1 *)0x0)) {
LAB_2c5a87a2:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c5a87c8);
  }
  local_30 = uVar7;
  if (uVar7 < 0x10) {
    if (uVar7 == 1) {
      *(undefined1 *)((int)local_44 + iVar10 + 0x10) = *puVar11;
      goto LAB_2c5a85f2;
    }
    if (uVar7 == 0) goto LAB_2c5a85f2;
  }
  else {
    iVar4 = FUN_2c5a83b0(&local_30,0);
    *(int *)((int)local_44 + iVar10 + 8) = iVar4;
    *(uint *)((int)local_44 + iVar10 + 0x10) = local_30;
  }
  FUN_2c674668(iVar4,puVar11,uVar7);
  iVar4 = *(int *)((int)local_44 + iVar10 + 8);
LAB_2c5a85f2:
  *(uint *)((int)local_44 + iVar10 + 0xc) = local_30;
  *(undefined1 *)(iVar4 + local_30) = 0;
  puVar9 = local_44;
  for (iVar4 = iVar14; pcVar1 = DAT_2c5a87bc, param_2 != iVar4; iVar4 = iVar4 + 0x20) {
    *puVar9 = uVar3;
    puVar5 = puVar9 + 4;
    uVar8 = *(undefined4 *)(iVar4 + 4);
    puVar9[2] = puVar5;
    puVar9[1] = uVar8;
    puVar11 = *(undefined1 **)(iVar4 + 8);
    uVar7 = *(uint *)(iVar4 + 0xc);
    if ((puVar11 + uVar7 != (undefined1 *)0x0) && (puVar11 == (undefined1 *)0x0)) goto LAB_2c5a87a2;
    local_30 = uVar7;
    if (uVar7 < 0x10) {
      if (uVar7 == 1) {
        *(undefined1 *)(puVar9 + 4) = *puVar11;
      }
      else if (uVar7 != 0) goto LAB_2c5a8660;
    }
    else {
      puVar5 = (undefined4 *)FUN_2c5a83b0(&local_30,0);
      puVar9[2] = puVar5;
      puVar9[4] = local_30;
LAB_2c5a8660:
      FUN_2c674668(puVar5,puVar11,uVar7);
      puVar5 = (undefined4 *)puVar9[2];
    }
    puVar9[3] = local_30;
    puVar9 = puVar9 + 8;
    *(undefined1 *)((int)puVar5 + local_30) = 0;
  }
  for (; puVar9 = puVar9 + 8, DAT_2c5a87bc = pcVar1, param_2 != iVar12; param_2 = param_2 + 0x20) {
    *puVar9 = uVar3;
    puVar5 = puVar9 + 4;
    puVar9[1] = *(undefined4 *)(param_2 + 4);
    puVar9[2] = puVar5;
    puVar11 = *(undefined1 **)(param_2 + 8);
    uVar7 = *(uint *)(param_2 + 0xc);
    if ((puVar11 + uVar7 != (undefined1 *)0x0) && (puVar11 == (undefined1 *)0x0)) goto LAB_2c5a87a2;
    local_30 = uVar7;
    if (uVar7 < 0x10) {
      if (uVar7 == 1) {
        *(undefined1 *)(puVar9 + 4) = *puVar11;
      }
      else if (uVar7 != 0) goto LAB_2c5a86d0;
    }
    else {
      puVar5 = (undefined4 *)FUN_2c5a83b0(&local_30,0);
      puVar9[2] = puVar5;
      puVar9[4] = local_30;
LAB_2c5a86d0:
      FUN_2c674668(puVar5,puVar11,uVar7);
      puVar5 = (undefined4 *)puVar9[2];
    }
    puVar9[3] = local_30;
    *(undefined1 *)((int)puVar5 + local_30) = 0;
    pcVar1 = DAT_2c5a87bc;
  }
  if (iVar14 != iVar12) {
    iVar10 = iVar14 + 0x10;
    iVar4 = iVar14;
    do {
      while ((code *)**(undefined4 **)(iVar10 + -0x10) == pcVar1) {
        *(undefined4 *)(iVar10 + -0x10) = uVar3;
        if (*(int *)(iVar4 + 8) != iVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        iVar4 = iVar4 + 0x20;
        iVar10 = iVar10 + 0x20;
        if (iVar4 == iVar12) goto LAB_2c5a8720;
      }
      iVar13 = iVar4 + 0x20;
      (*(code *)**(undefined4 **)(iVar10 + -0x10))(iVar4);
      iVar10 = iVar10 + 0x20;
      iVar4 = iVar13;
    } while (iVar13 != iVar12);
  }
LAB_2c5a8720:
  if (iVar14 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,iVar14);
  }
  param_1[2] = (int)(local_44 + local_40 * 8);
  piVar2 = DAT_2c5a87b4;
  *param_1 = (int)local_44;
  param_1[1] = (int)puVar9;
  if (*piVar2 != local_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

