/* FUN_2c59cacc @ 0x2c59cacc */

int * FUN_2c59cacc(int *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  int *piVar21;
  int local_18;
  int local_14;
  
  puVar7 = DAT_2c59cfec;
  puVar19 = DAT_2c59cfdc;
  puVar6 = DAT_2c59cfd8;
  piVar5 = DAT_2c59cfd4;
  puVar4 = DAT_2c59cdb8;
  puVar3 = DAT_2c59cdb4;
  puVar20 = DAT_2c59cdb0;
  puVar18 = DAT_2c59cdac;
  puVar17 = DAT_2c59cda8;
  puVar8 = DAT_2c59cda4;
  puVar9 = DAT_2c59cda0;
  puVar11 = DAT_2c59cd9c;
  local_14 = *DAT_2c59cd98;
  switch(param_2) {
  case 0:
    iVar10 = *DAT_2c59cfd4;
    iVar13 = DAT_2c59cfd4[1];
    piVar21 = DAT_2c59cfd4 + 2;
    *param_1 = (int)(param_1 + 2);
    param_1[2] = iVar10;
    iVar10 = *piVar21;
    param_1[3] = iVar13;
    *(short *)(param_1 + 4) = (short)iVar10;
    uVar1 = *(undefined1 *)((int)piVar5 + 10);
    *(undefined1 *)((int)param_1 + 0x13) = 0;
    *(undefined1 *)((int)param_1 + 0x12) = uVar1;
    param_1[1] = 0xb;
    break;
  case 1:
    *param_1 = (int)(param_1 + 2);
    local_18 = 0x14;
    puVar9 = (undefined4 *)FUN_2c65e908(param_1,&local_18,0);
    puVar11 = DAT_2c59cfd0;
    *param_1 = (int)puVar9;
    param_1[2] = local_18;
    uVar14 = puVar11[1];
    uVar15 = puVar11[2];
    uVar16 = puVar11[3];
    *puVar9 = *puVar11;
    uVar12 = puVar11[4];
    puVar9[1] = uVar14;
    puVar9[2] = uVar15;
    puVar9[3] = uVar16;
    puVar9[4] = uVar12;
    param_1[1] = local_18;
    *(undefined1 *)(*param_1 + local_18) = 0;
    break;
  case 2:
    *param_1 = (int)(param_1 + 2);
    local_18 = 0x19;
    puVar11 = (undefined4 *)FUN_2c65e908(param_1,&local_18,0);
    puVar18 = DAT_2c59cdbc;
    goto LAB_2c59cc7e;
  case 3:
    *param_1 = (int)(param_1 + 2);
    local_18 = 0x24;
    puVar9 = (undefined4 *)FUN_2c65e908(param_1,&local_18,0);
    *param_1 = (int)puVar9;
    param_1[2] = local_18;
    puVar11 = puVar4;
    do {
      puVar18 = puVar9 + 4;
      puVar8 = puVar11 + 4;
      uVar12 = puVar11[1];
      uVar14 = puVar11[2];
      uVar15 = puVar11[3];
      puVar17 = puVar11 + 4;
      *puVar9 = *puVar11;
      puVar9[1] = uVar12;
      puVar9[2] = uVar14;
      puVar9[3] = uVar15;
      puVar11 = puVar8;
      puVar9 = puVar18;
    } while (puVar17 != puVar4 + 8);
    goto LAB_2c59cc58;
  case 4:
    *param_1 = (int)(param_1 + 2);
    local_18 = 0x1e;
    puVar11 = (undefined4 *)FUN_2c65e908(param_1,&local_18,0);
    goto LAB_2c59ce80;
  case 5:
    *param_1 = (int)(param_1 + 2);
    local_18 = 0x22;
    puVar9 = (undefined4 *)FUN_2c65e908(param_1,&local_18,0);
    *param_1 = (int)puVar9;
    param_1[2] = local_18;
    puVar11 = puVar6;
    do {
      puVar17 = puVar9 + 4;
      puVar8 = puVar11 + 4;
      uVar12 = puVar11[1];
      uVar14 = puVar11[2];
      uVar15 = puVar11[3];
      puVar18 = puVar11 + 4;
      *puVar9 = *puVar11;
      puVar9[1] = uVar12;
      puVar9[2] = uVar14;
      puVar9[3] = uVar15;
      puVar11 = puVar8;
      puVar9 = puVar17;
    } while (puVar18 != puVar6 + 8);
    *(undefined2 *)puVar17 = *(undefined2 *)puVar8;
    param_1[1] = local_18;
    *(undefined1 *)(*param_1 + local_18) = 0;
    break;
  case 6:
    *param_1 = (int)(param_1 + 2);
    local_18 = 0x15;
    puVar9 = (undefined4 *)FUN_2c65e908(param_1,&local_18,0);
    puVar11 = DAT_2c59cfe0;
    *param_1 = (int)puVar9;
    param_1[2] = local_18;
    uVar14 = puVar11[1];
    uVar15 = puVar11[2];
    uVar12 = puVar11[3];
    *puVar9 = *puVar11;
    puVar9[3] = uVar12;
    uVar12 = puVar11[4];
    uVar1 = *(undefined1 *)(puVar11 + 5);
    puVar9[1] = uVar14;
    puVar9[2] = uVar15;
    puVar9[4] = uVar12;
    *(undefined1 *)(puVar9 + 5) = uVar1;
    param_1[1] = local_18;
    *(undefined1 *)(*param_1 + local_18) = 0;
    break;
  case 7:
    *param_1 = (int)(param_1 + 2);
    local_18 = 0x19;
    puVar11 = (undefined4 *)FUN_2c65e908(param_1,&local_18,0);
LAB_2c59cc7e:
    *param_1 = (int)puVar11;
    param_1[2] = local_18;
    uVar12 = puVar18[1];
    uVar14 = puVar18[2];
    uVar15 = puVar18[3];
    *puVar11 = *puVar18;
    puVar11[1] = uVar12;
    puVar11[3] = uVar15;
    puVar11[2] = uVar14;
    uVar12 = puVar18[5];
    uVar1 = *(undefined1 *)(puVar18 + 6);
    puVar11[4] = puVar18[4];
    puVar11[5] = uVar12;
    *(undefined1 *)(puVar11 + 6) = uVar1;
    param_1[1] = local_18;
    *(undefined1 *)(*param_1 + local_18) = 0;
    break;
  case 8:
    *param_1 = (int)(param_1 + 2);
    local_18 = 0x1a;
    puVar11 = (undefined4 *)FUN_2c65e908(param_1,&local_18,0);
    puVar8 = DAT_2c59cff4;
    goto LAB_2c59cbd8;
  case 9:
    *param_1 = (int)(param_1 + 2);
    local_18 = 0x1a;
    puVar11 = (undefined4 *)FUN_2c65e908(param_1,&local_18,0);
    puVar8 = DAT_2c59cff0;
    goto LAB_2c59cbd8;
  case 10:
    *param_1 = (int)(param_1 + 2);
    local_18 = 0x25;
    puVar9 = (undefined4 *)FUN_2c65e908(param_1,&local_18,0);
    *param_1 = (int)puVar9;
    param_1[2] = local_18;
    puVar11 = puVar3;
    do {
      puVar18 = puVar9 + 4;
      puVar17 = puVar11 + 4;
      uVar12 = puVar11[1];
      uVar14 = puVar11[2];
      uVar15 = puVar11[3];
      puVar8 = puVar11 + 4;
      *puVar9 = *puVar11;
      puVar9[1] = uVar12;
      puVar9[2] = uVar14;
      puVar9[3] = uVar15;
      puVar11 = puVar17;
      puVar9 = puVar18;
    } while (puVar8 != puVar3 + 8);
    goto LAB_2c59cbac;
  case 0xb:
    *param_1 = (int)(param_1 + 2);
    local_18 = 0x21;
    puVar9 = (undefined4 *)FUN_2c65e908(param_1,&local_18,0);
    *param_1 = (int)puVar9;
    param_1[2] = local_18;
    puVar11 = puVar20;
    do {
      puVar17 = puVar9 + 4;
      puVar8 = puVar11 + 4;
      uVar12 = puVar11[1];
      uVar14 = puVar11[2];
      uVar15 = puVar11[3];
      puVar18 = puVar11 + 4;
      *puVar9 = *puVar11;
      puVar9[1] = uVar12;
      puVar9[2] = uVar14;
      puVar9[3] = uVar15;
      puVar11 = puVar8;
      puVar9 = puVar17;
    } while (puVar18 != puVar20 + 8);
    *(undefined1 *)puVar17 = *(undefined1 *)puVar8;
    param_1[1] = local_18;
    *(undefined1 *)(*param_1 + local_18) = 0;
    break;
  case 0xc:
    *param_1 = (int)(param_1 + 2);
    local_18 = 0x1e;
    puVar11 = (undefined4 *)FUN_2c65e908(param_1,&local_18,0);
    puVar19 = DAT_2c59cfe8;
LAB_2c59ce80:
    *param_1 = (int)puVar11;
    param_1[2] = local_18;
    uVar12 = puVar19[1];
    uVar14 = puVar19[2];
    uVar15 = puVar19[3];
    *puVar11 = *puVar19;
    puVar11[1] = uVar12;
    puVar11[2] = uVar14;
    puVar11[3] = uVar15;
    uVar12 = puVar19[5];
    uVar14 = puVar19[6];
    uVar2 = *(undefined2 *)(puVar19 + 7);
    puVar11[4] = puVar19[4];
    puVar11[5] = uVar12;
    puVar11[6] = uVar14;
    *(undefined2 *)(puVar11 + 7) = uVar2;
    param_1[1] = local_18;
    *(undefined1 *)(*param_1 + local_18) = 0;
    break;
  case 0xd:
    *param_1 = (int)(param_1 + 2);
    local_18 = 0x1f;
    puVar9 = (undefined4 *)FUN_2c65e908(param_1,&local_18,0);
    puVar11 = DAT_2c59cfe4;
    *param_1 = (int)puVar9;
    param_1[2] = local_18;
    uVar12 = puVar11[1];
    uVar14 = puVar11[2];
    uVar15 = puVar11[3];
    *puVar9 = *puVar11;
    puVar9[1] = uVar12;
    puVar9[2] = uVar14;
    puVar9[3] = uVar15;
    uVar12 = puVar11[5];
    uVar14 = puVar11[6];
    uVar2 = *(undefined2 *)(puVar11 + 7);
    puVar9[4] = puVar11[4];
    *(undefined2 *)(puVar9 + 7) = uVar2;
    uVar1 = *(undefined1 *)((int)puVar11 + 0x1e);
    puVar9[5] = uVar12;
    puVar9[6] = uVar14;
    *(undefined1 *)((int)puVar9 + 0x1e) = uVar1;
    param_1[1] = local_18;
    *(undefined1 *)(*param_1 + local_18) = 0;
    break;
  case 0xe:
    *param_1 = (int)(param_1 + 2);
    local_18 = 0x24;
    puVar9 = (undefined4 *)FUN_2c65e908(param_1,&local_18,0);
    *param_1 = (int)puVar9;
    param_1[2] = local_18;
    puVar11 = puVar7;
    do {
      puVar18 = puVar9 + 4;
      puVar8 = puVar11 + 4;
      uVar12 = puVar11[1];
      uVar14 = puVar11[2];
      uVar15 = puVar11[3];
      puVar17 = puVar11 + 4;
      *puVar9 = *puVar11;
      puVar9[1] = uVar12;
      puVar9[2] = uVar14;
      puVar9[3] = uVar15;
      puVar11 = puVar8;
      puVar9 = puVar18;
    } while (puVar17 != puVar7 + 8);
    goto LAB_2c59cc58;
  case 0xf:
    *param_1 = (int)(param_1 + 2);
    local_18 = 0x24;
    puVar9 = (undefined4 *)FUN_2c65e908(param_1,&local_18,0);
    *param_1 = (int)puVar9;
    param_1[2] = local_18;
    puVar11 = puVar17;
    do {
      puVar18 = puVar9 + 4;
      puVar8 = puVar11 + 4;
      uVar12 = puVar11[1];
      uVar14 = puVar11[2];
      uVar15 = puVar11[3];
      puVar20 = puVar11 + 4;
      *puVar9 = *puVar11;
      puVar9[1] = uVar12;
      puVar9[2] = uVar14;
      puVar9[3] = uVar15;
      puVar11 = puVar8;
      puVar9 = puVar18;
    } while (puVar20 != puVar17 + 8);
LAB_2c59cc58:
    *puVar18 = *puVar8;
    param_1[1] = local_18;
    *(undefined1 *)(*param_1 + local_18) = 0;
    break;
  case 0x10:
    *param_1 = (int)(param_1 + 2);
    local_18 = 0x1a;
    puVar11 = (undefined4 *)FUN_2c65e908(param_1,&local_18,0);
    goto LAB_2c59cbd8;
  case 0x11:
    *param_1 = (int)(param_1 + 2);
    local_18 = 0x25;
    puVar8 = (undefined4 *)FUN_2c65e908(param_1,&local_18,0);
    *param_1 = (int)puVar8;
    param_1[2] = local_18;
    puVar11 = puVar9;
    do {
      puVar18 = puVar8 + 4;
      puVar17 = puVar11 + 4;
      uVar12 = puVar11[1];
      uVar14 = puVar11[2];
      uVar15 = puVar11[3];
      puVar20 = puVar11 + 4;
      *puVar8 = *puVar11;
      puVar8[1] = uVar12;
      puVar8[2] = uVar14;
      puVar8[3] = uVar15;
      puVar11 = puVar17;
      puVar8 = puVar18;
    } while (puVar20 != puVar9 + 8);
LAB_2c59cbac:
    uVar12 = *puVar17;
    *(undefined1 *)(puVar18 + 1) = *(undefined1 *)(puVar17 + 1);
    *puVar18 = uVar12;
    param_1[1] = local_18;
    *(undefined1 *)(*param_1 + local_18) = 0;
    break;
  case 0x12:
    *param_1 = (int)(param_1 + 2);
    local_18 = 0x2e;
    puVar8 = (undefined4 *)FUN_2c65e908(param_1,&local_18,0);
    *param_1 = (int)puVar8;
    param_1[2] = local_18;
    puVar9 = puVar11;
    do {
      puVar18 = puVar8;
      puVar17 = puVar9;
      uVar12 = puVar17[1];
      uVar14 = puVar17[2];
      uVar15 = puVar17[3];
      *puVar18 = *puVar17;
      puVar18[1] = uVar12;
      puVar18[2] = uVar14;
      puVar18[3] = uVar15;
      puVar9 = puVar17 + 4;
      puVar8 = puVar18 + 4;
    } while (puVar17 + 4 != puVar11 + 8);
    uVar12 = puVar17[5];
    uVar14 = puVar17[6];
    uVar2 = *(undefined2 *)(puVar17 + 7);
    puVar18[4] = puVar17[4];
    puVar18[5] = uVar12;
    puVar18[6] = uVar14;
    *(undefined2 *)(puVar18 + 7) = uVar2;
    param_1[1] = local_18;
    *(undefined1 *)(*param_1 + local_18) = 0;
    break;
  default:
    *param_1 = (int)(param_1 + 2);
    local_18 = 0x1a;
    puVar11 = (undefined4 *)FUN_2c65e908(param_1,&local_18,0);
    puVar8 = DAT_2c59cff8;
LAB_2c59cbd8:
    *param_1 = (int)puVar11;
    param_1[2] = local_18;
    uVar12 = puVar8[1];
    uVar14 = puVar8[2];
    uVar15 = puVar8[3];
    *puVar11 = *puVar8;
    puVar11[1] = uVar12;
    puVar11[3] = uVar15;
    puVar11[2] = uVar14;
    uVar12 = puVar8[5];
    uVar2 = *(undefined2 *)(puVar8 + 6);
    puVar11[4] = puVar8[4];
    puVar11[5] = uVar12;
    *(undefined2 *)(puVar11 + 6) = uVar2;
    param_1[1] = local_18;
    *(undefined1 *)(*param_1 + local_18) = 0;
  }
  if (*DAT_2c59cd98 != local_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return param_1;
}

