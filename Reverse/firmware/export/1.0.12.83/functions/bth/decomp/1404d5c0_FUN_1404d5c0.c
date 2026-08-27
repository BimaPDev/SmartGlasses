/* FUN_1404d5c0 @ 0x1404d5c0 */

void FUN_1404d5c0(int param_1,int param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  byte bVar9;
  undefined4 uVar10;
  byte bVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined1 uVar14;
  undefined1 *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  byte local_76;
  byte local_75;
  undefined1 auStack_74 [80];
  int local_24;
  
  local_24 = *DAT_1404d87c;
  if (param_1 == 0xff) {
    if (*param_3 == 8) {
      FUN_1402a6e8(4,0x96d,DAT_1404d88c,DAT_1404d888,DAT_1404d898,param_3[6]);
      goto LAB_1404d682;
    }
    FUN_1404a1b4();
LAB_1404d5e0:
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_1404d880);
  }
  iVar6 = FUN_1404a1b4();
  if ((param_1 != 0) || (*(int *)(*(int *)(iVar6 + 0x34) + 4) != param_2)) goto LAB_1404d5e0;
  if (((*param_3 != 0x12) &&
      (FUN_1402a6e8(4,0x97a,DAT_1404d88c,DAT_1404d888,DAT_1404d894,0,DAT_1404d890,*param_3),
      *param_3 - 0xb < 2)) && ((int)((uint)*(byte *)(iVar6 + 0x110) << 0x1f) < 0)) {
    *(byte *)(iVar6 + 0x110) = *(byte *)(iVar6 + 0x110) & 0xfe;
  }
  puVar7 = (undefined1 *)FUN_14092f9c(param_2);
  uVar18 = (uint)*param_3;
  switch(uVar18) {
  case 1:
    uVar20 = 1;
    uVar19 = 0xa78;
    uVar10 = DAT_1404d888;
    uVar21 = DAT_1404d8bc;
    goto LAB_1404d86a;
  case 2:
    *(undefined1 *)(iVar6 + 0x5d) = 0;
  case 0x1f:
    FUN_1402a6e8(4,0x99d,DAT_1404d88c,DAT_1404d888,DAT_1404d89c,0,*puVar7,
                 **(undefined1 **)(*(int *)(param_3 + 0xc) + 2));
    iVar8 = FUN_1404a114(0);
    if (iVar8 != 0) {
      *(undefined1 *)(iVar6 + 0xb) = 1;
    }
    *(undefined1 *)(iVar6 + 0x49) = 0;
    *(undefined1 *)(iVar6 + 0x44) = 1;
    FUN_14046d1c(1);
    *(undefined1 *)(iVar6 + 0x5e) = 0;
    *(undefined1 *)(iVar6 + 0x5c) = 0;
    FUN_1404b138(0);
    FUN_14092f94(param_2);
    FUN_140959a4();
    puVar3 = DAT_1404d8a0;
    *DAT_1404d8a0 = 0;
    *(undefined4 *)(puVar3 + 2) = 0;
    puVar3[4] = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
    *DAT_1404d8a4 = 0;
    *DAT_1404d8a8 = 0;
    FUN_1409e6a8();
    puVar7 = *(undefined1 **)(*(char **)(param_3 + 0xc) + 2);
    if (**(char **)(param_3 + 0xc) == '\x02') {
      uVar18 = (uint)(byte)puVar7[1];
      FUN_1402a6e8(4,0x9e6,DAT_1404e1ec,DAT_1404e1e8,DAT_1404e1f4,0,uVar18);
      *(undefined1 *)(iVar6 + 0x4a) = 2;
      *(undefined1 *)(iVar6 + 0x41) = 0x10;
      bVar9 = *(byte *)(*(int *)(*(int *)(param_3 + 0xc) + 2) + 1);
      bVar11 = bVar9 & 1;
      if ((bVar9 & 1) == 0) {
        if (*(char *)(*(int *)(*(int *)(param_3 + 0xc) + 2) + 2) < '\0') {
          FUN_1402a6e8(4,0x9ef,DAT_1404e1ec,DAT_1404e1e8,DAT_1404e20c,bVar11,uVar18);
          *(undefined1 *)(iVar6 + 0x40) = 0x10;
        }
        else {
          FUN_1402a6e8(4,0x9f3,DAT_1404e1ec,DAT_1404e1e8,DAT_1404e1f0,bVar11,uVar18);
          *(undefined1 *)(iVar6 + 0x40) = 0x20;
        }
      }
      else {
        FUN_1402a6e8(4,0x9eb,DAT_1404e1ec,DAT_1404e1e8,DAT_1404e208,0,uVar18);
        *(undefined1 *)(iVar6 + 0x40) = 0x20;
      }
      if (-1 < (int)((uint)*(byte *)(*(int *)(*(int *)(param_3 + 0xc) + 2) + 2) << 0x1c))
      goto LAB_1404d7bc;
      *(undefined1 *)(iVar6 + 0x43) = 1;
    }
    else {
      FUN_1402a6e8(4,0xa3e,DAT_1404d88c,DAT_1404d888,DAT_1404d8ac,0,*puVar7,puVar7[2],puVar7[3],
                   puVar7[2],puVar7[3]);
      *(undefined1 *)(iVar6 + 0x4a) = 0;
      *(undefined1 *)(iVar6 + 0x41) = 0x10;
      *(byte *)(iVar6 + 0x40) = **(byte **)(*(int *)(param_3 + 0xc) + 2) & 0xf0;
      if ((int)((uint)**(byte **)(*(int *)(param_3 + 0xc) + 2) << 0x1c) < 0) {
        *(undefined1 *)(iVar6 + 0x43) = 1;
      }
      else {
LAB_1404d7bc:
        *(undefined1 *)(iVar6 + 0x43) = 2;
      }
    }
    if ((*param_3 == 2) && (*(char *)(DAT_1404e1f8 + 0x2a) == '\0')) {
      FUN_1404a204(iVar6);
    }
    uVar10 = 8;
LAB_1404d7d0:
    FUN_1403cbf0(0,uVar10,0);
LAB_1404d66e:
    FUN_1404c4f8(0,param_2,param_3);
    uVar18 = (uint)*param_3;
    break;
  case 3:
    uVar10 = 3;
    FUN_1402a6e8(4,0xb81,DAT_1404db70,DAT_1404db74,DAT_1404dba0,0,3);
    if ((*(char *)(DAT_1404dba4 + 0xb) == '\0') && (iVar6 = FUN_14093000(param_2), iVar6 != 0)) {
      FUN_14093008(0,0x96);
    }
    puVar7 = DAT_1404dba8;
    puVar15 = *(undefined1 **)(param_3 + 0xc);
    uVar5 = puVar15[10];
    *DAT_1404dba8 = *puVar15;
    puVar4 = DAT_1404dbac;
    uVar14 = puVar15[1];
    puVar7[10] = uVar5;
    *puVar4 = 0;
    puVar4[1] = 0;
    *(undefined2 *)(puVar4 + 2) = 0;
    puVar7[1] = uVar14;
    uVar21 = DAT_1404dbb0;
    *(undefined4 **)(puVar7 + 2) = puVar4;
    FUN_1402a9fc(uVar21,1,8);
    pbVar17 = DAT_1404def0;
    puVar15 = DAT_1404dbb4;
    cVar1 = **(char **)(param_3 + 0xc);
    if (cVar1 == '\0') {
      pbVar16 = *(byte **)(puVar7 + 2);
      *pbVar16 = **(byte **)(*(char **)(param_3 + 0xc) + 2) & *DAT_1404def0;
      pbVar16[1] = *(byte *)(*(int *)(*(int *)(param_3 + 0xc) + 2) + 1) & pbVar17[1];
      bVar9 = *(byte *)(*(int *)(*(int *)(param_3 + 0xc) + 2) + 2);
      if (bVar9 < pbVar17[2]) {
        bVar9 = pbVar17[2];
      }
      pbVar16[2] = bVar9;
      bVar11 = *(byte *)(*(int *)(*(int *)(param_3 + 0xc) + 2) + 3);
      if (pbVar17[3] <= bVar11) {
        bVar11 = pbVar17[3];
      }
      pbVar16[3] = bVar11;
      if (bVar11 < pbVar17[2]) {
        pbVar16[2] = pbVar17[2];
        bVar11 = pbVar17[3];
        pbVar16[3] = bVar11;
      }
      else {
        bVar2 = pbVar17[3];
        if (bVar2 < bVar9) {
          pbVar16[2] = bVar2;
          pbVar16[3] = bVar2;
          bVar11 = bVar2;
        }
      }
      FUN_1402a6e8(4,0xba3,DAT_1404dee8,DAT_1404deec,DAT_1404def4,0,pbVar16[2],bVar11);
      pbVar17 = *(byte **)(puVar7 + 2);
      uVar12 = (uint)*pbVar17;
      FUN_1404d3e8(0xf0,&local_76,&local_75);
      for (uVar18 = (uint)local_76; uVar18 <= local_75; uVar18 = uVar18 + 1 & 0xff) {
        if (((int)uVar12 >> uVar18) << 0x1f < 0) {
          uVar12 = uVar12 & 0xf | 1 << uVar18 & 0xffU;
          break;
        }
      }
      *pbVar17 = (byte)uVar12;
      FUN_1404d3e8(0xf,&local_76,&local_75);
      for (uVar18 = (uint)local_76; uVar18 <= local_75; uVar18 = uVar18 + 1 & 0xff) {
        if (((int)uVar12 >> uVar18) << 0x1f < 0) {
          uVar12 = uVar12 & 0xfffffff0 | 1 << uVar18 & 0xffU;
          break;
        }
      }
      *pbVar17 = (byte)uVar12;
      uVar12 = (uint)pbVar17[1];
      FUN_1404d3e8(0xf0,&local_76,&local_75);
      for (uVar18 = (uint)local_76; uVar18 <= local_75; uVar18 = uVar18 + 1 & 0xff) {
        if (((int)uVar12 >> uVar18) << 0x1f < 0) {
          uVar12 = uVar12 & 0xf | 1 << uVar18 & 0xffU;
          break;
        }
      }
      pbVar17[1] = (byte)uVar12;
      FUN_1404d3e8(0xc,&local_76,&local_75);
      for (uVar18 = (uint)local_76; uVar18 <= local_75; uVar18 = uVar18 + 1 & 0xff) {
        if (((int)uVar12 >> uVar18) << 0x1f < 0) {
          uVar12 = uVar12 & 0xfffffff3 | 1 << uVar18 & 0xffU;
          break;
        }
      }
      pbVar17[1] = (byte)uVar12;
      FUN_1404d3e8(3,&local_76,&local_75);
      for (uVar18 = (uint)local_76; uVar18 <= local_75; uVar18 = uVar18 + 1 & 0xff) {
        if (((int)uVar12 >> uVar18) << 0x1f < 0) {
          uVar12 = uVar12 & 0xfffffffc | 1 << uVar18 & 0xffU;
          break;
        }
      }
      pbVar17[1] = (byte)uVar12;
      uVar18 = (uint)*param_3;
    }
    else {
      if (cVar1 != '\x02') goto LAB_1404d994;
      puVar13 = *(undefined1 **)(puVar7 + 2);
      *puVar13 = *DAT_1404dbb4;
      iVar6 = *(int *)(*(int *)(param_3 + 0xc) + 2);
      if ((int)((uint)*(byte *)(iVar6 + 1) << 0x1f) < 0) {
        puVar13[1] = puVar13[1] | 1;
        iVar6 = *(int *)(*(int *)(param_3 + 0xc) + 2);
        uVar18 = (uint)*(byte *)(iVar6 + 2);
      }
      else {
        uVar18 = (uint)*(byte *)(iVar6 + 2);
        if (*(char *)(iVar6 + 2) < '\0') {
          puVar13[2] = puVar13[2] | 0x80;
          iVar6 = *(int *)(*(int *)(param_3 + 0xc) + 2);
          uVar18 = (uint)*(byte *)(iVar6 + 2);
        }
      }
      if ((int)(uVar18 << 0x1d) < 0) {
        puVar13[2] = puVar13[2] | 4;
        iVar6 = *(int *)(*(int *)(param_3 + 0xc) + 2);
      }
      else if ((int)(uVar18 << 0x1c) < 0) {
        puVar13[2] = puVar13[2] | 8;
        iVar6 = *(int *)(*(int *)(param_3 + 0xc) + 2);
      }
      puVar13[3] = *(byte *)(iVar6 + 3) & 0x80;
      uVar20 = DAT_1404e218;
      uVar19 = DAT_1404e1ec;
      uVar21 = DAT_1404e1e8;
      iVar6 = *(int *)(*(int *)(param_3 + 0xc) + 2);
      uVar18 = (uint)*(byte *)(iVar6 + 3);
      if ((*(char *)(iVar6 + 3) < '\0') && (-1 < (char)puVar15[3])) {
        param_3[5] = 0xd3;
        FUN_1402a6e8(4,0xbbf,uVar19,uVar21,uVar20,0,uVar10);
        iVar6 = *(int *)(*(int *)(param_3 + 0xc) + 2);
        uVar18 = (uint)*(byte *)(iVar6 + 3);
      }
      uVar18 = (*(ushort *)(iVar6 + 4) & 0xff) << 8 | (uint)(*(ushort *)(iVar6 + 4) >> 8) |
               (uVar18 & 0x7f) << 0x10;
      FUN_1402a6e8(4,0xbc6,DAT_1404db70,DAT_1404db74,DAT_1404dbb8,0,uVar18);
      if (uVar18 == 0) {
        uVar14 = 0xb6;
        uVar5 = 9;
        bVar9 = 4;
      }
      else {
        if (DAT_1404dbbc <= uVar18) {
          uVar18 = DAT_1404dbbc;
        }
        bVar9 = (byte)(uVar18 >> 0x10);
        uVar5 = (undefined1)(uVar18 >> 8);
        uVar14 = (undefined1)uVar18;
      }
      iVar6 = *(int *)(puVar7 + 2);
      *(undefined1 *)(iVar6 + 5) = uVar14;
      *(undefined1 *)(iVar6 + 4) = uVar5;
      *(byte *)(iVar6 + 3) = *(byte *)(iVar6 + 3) | bVar9;
      uVar18 = (uint)*param_3;
    }
    break;
  case 6:
    uVar20 = 6;
    uVar19 = 0xcde;
    uVar10 = DAT_1404db74;
    uVar21 = DAT_1404dbc4;
LAB_1404d86a:
    FUN_1402a6e8(4,uVar19,DAT_1404d88c,uVar10,uVar21,0,uVar20);
    uVar18 = (uint)*param_3;
    break;
  case 8:
    uVar18 = (uint)*(byte *)(iVar6 + 0x5c);
    uVar12 = (uint)param_3[6];
    FUN_1402a6e8(4,0xb4f,DAT_1404db70,DAT_1404db74,DAT_1404db88,0,uVar12,uVar18);
    FUN_14046d1c(0);
    iVar8 = FUN_14093034(param_2);
    if (iVar8 != 0) {
      *(undefined1 *)(iVar6 + 0x44) = 0;
      *(undefined1 *)(iVar6 + 0x49) = 0;
      if ((*(char *)(iVar6 + 0x5e) == '\0') && (*(char *)(iVar6 + 0x5c) == '\0')) {
        if (param_3[7] == 0) {
          FUN_1404a210(*(undefined4 *)(iVar6 + 0x78));
        }
        else {
          FUN_1402a6e8(4,0xb62,DAT_1404db70,DAT_1404db74,DAT_1404db90,DAT_1404db8c,uVar12,uVar18);
        }
      }
      else {
        FUN_1402a6e8(4,0xb5e,DAT_1404e1ec,DAT_1404e1e8,DAT_1404e200,DAT_1404e1fc,
                     *(char *)(iVar6 + 0x5e),uVar18);
      }
      *(undefined1 *)(iVar6 + 0x5e) = 0;
      *(undefined1 *)(iVar6 + 0x5c) = 0;
    }
    puVar7 = DAT_1404db98;
    puVar3 = DAT_1404db94;
    *DAT_1404db94 = 0;
    *(undefined4 *)(puVar3 + 2) = 0;
    puVar3[4] = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
    puVar15 = DAT_1404db9c;
    *puVar7 = 0;
    uVar10 = 9;
    *(undefined1 *)(iVar6 + 0x45) = 0;
    *(undefined1 *)(iVar6 + 0x47) = 0;
    *puVar15 = 0;
    goto LAB_1404d7d0;
  case 9:
    FUN_1402a6e8(4,0xacf,DAT_1404d88c,DAT_1404d888,DAT_1404d8b0,0);
  case 0xc:
    *(undefined1 *)(iVar6 + 0x11c) = 0;
    uVar10 = FUN_1404a510();
    FUN_1402a6e8(4,0xad6,DAT_1404d88c,DAT_1404d888,DAT_1404d8b4,0,uVar10);
    if (*(char *)(iVar6 + 0x45) == '\0') {
      iVar8 = thunk_FUN_140e5848();
      uVar18 = FUN_140e5548(iVar8 - *(int *)(iVar6 + 0x6c));
      FUN_1402a6e8(4,0xadc,DAT_1404d88c,DAT_1404d888,DAT_1404d8b8,0,uVar18,
                   *(undefined4 *)(iVar6 + 0x74));
      *(int *)(iVar6 + 0x6c) = iVar8;
      if (499 < uVar18) {
        if (3 < *(uint *)(iVar6 + 0x74)) goto LAB_1404d682;
        goto LAB_1404dc66;
      }
      uVar18 = *(uint *)(iVar6 + 0x74) + 1;
      *(uint *)(iVar6 + 0x74) = uVar18;
      if (3 < uVar18) goto LAB_1404d682;
    }
    else {
LAB_1404dc66:
      uVar10 = thunk_FUN_140e5848();
      *(undefined4 *)(iVar6 + 0x6c) = uVar10;
      *(undefined4 *)(iVar6 + 0x74) = 0;
    }
    *(undefined1 *)(iVar6 + 0x45) = 0;
    FUN_1404d18c(0,1,0);
    puVar3 = DAT_1404ded8;
    *DAT_1404ded4 = 0;
    *DAT_1404dedc = 0;
    *(undefined1 *)(iVar6 + 0x47) = 0;
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 2) = 0;
    puVar3[4] = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
    FUN_1403cbf0(0,0xc,0);
    thunk_FUN_1404348c(2,0);
    uVar18 = (uint)*param_3;
    break;
  case 10:
    uVar5 = *puVar7;
    uVar10 = FUN_1404a510();
    FUN_1402a6e8(4,0xac5,DAT_1404db70,DAT_1404db74,DAT_1404dbc0,0,uVar5,uVar10);
    *(undefined1 *)(iVar6 + 0x47) = 1;
    uVar18 = (uint)*param_3;
    break;
  case 0xb:
    if (*(char *)(iVar6 + 0x45) == '\0') {
LAB_1404dbd2:
      uVar10 = thunk_FUN_140e5848();
      *(undefined4 *)(iVar6 + 0x68) = uVar10;
      *(undefined4 *)(iVar6 + 0x70) = 0;
    }
    else {
      iVar8 = thunk_FUN_140e5848();
      uVar12 = FUN_140e5548(iVar8 - *(int *)(iVar6 + 0x68));
      FUN_1402a6e8(4,0xa81,DAT_1404dee8,DAT_1404deec,DAT_1404def8,0,uVar12,
                   *(undefined4 *)(iVar6 + 0x70));
      *(int *)(iVar6 + 0x68) = iVar8;
      if (499 < uVar12) {
        if (3 < *(uint *)(iVar6 + 0x70)) goto LAB_1404d682;
        goto LAB_1404dbd2;
      }
      uVar12 = *(uint *)(iVar6 + 0x70) + 1;
      *(uint *)(iVar6 + 0x70) = uVar12;
      if (3 < uVar12) goto LAB_1404d682;
    }
    FUN_1404d18c(1,1,0);
    if ((*(char *)(DAT_1404ded0 + 0xb) == '\0') && (iVar8 = FUN_14093000(param_2), iVar8 != 0)) {
      FUN_14093008(0,0x96);
    }
    puVar15 = DAT_1404ded4;
    *(undefined1 *)(iVar6 + 0x45) = 1;
    *puVar15 = 0;
    puVar3 = DAT_1404ded8;
    *(undefined1 *)(iVar6 + 0x47) = 1;
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 2) = 0;
    puVar3[4] = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
    puVar15 = DAT_1404dedc;
    *(undefined1 *)(iVar6 + 0xa4) = 1;
    *puVar15 = 0;
    uVar5 = *puVar7;
    *DAT_1404dee0 = 1;
    uVar10 = FUN_1404a510();
    FUN_1402a6e8(4,0xaae,DAT_1404dee8,DAT_1404deec,DAT_1404dee4,0,uVar5,uVar10);
    if (*param_3 == 0xb) {
      uVar18 = 10;
    }
    FUN_1403cbf0(0,uVar18,0);
    FUN_140aa254();
    thunk_FUN_1404348c(2,1);
    uVar18 = (uint)*param_3;
    break;
  case 0xd:
    if ((int)((uint)*(byte *)(iVar6 + 0x110) << 0x1d) < 0) {
      *(byte *)(iVar6 + 0x110) = *(byte *)(iVar6 + 0x110) & 0xfb;
      uVar18 = (uint)*param_3;
    }
    uVar12 = (uint)**(byte **)(param_3 + 0xc);
    FUN_1402a6e8(4,0xce5,DAT_1404db70,DAT_1404db74,DAT_1404db84,0,uVar18,uVar12);
    cVar1 = **(char **)(param_3 + 0xc);
    if (cVar1 == '\x02') {
      FUN_1402a6e8(4,0xd25,DAT_1404e1ec,DAT_1404e1e8,DAT_1404e1e4,0,uVar18,uVar12);
      uVar19 = DAT_1404e214;
      uVar21 = DAT_1404e1ec;
      uVar10 = DAT_1404e1e8;
      if ((*(char *)(*(int *)(*(int *)(param_3 + 0xc) + 2) + 3) < '\0') &&
         (-1 < *(char *)(DAT_1404e210 + 3))) {
        param_3[5] = 0xd3;
        FUN_1402a6e8(4,0xd2a,uVar21,uVar10,uVar19,0,uVar18,uVar12);
      }
      *(undefined1 *)(iVar6 + 0x4a) = 2;
      *(undefined1 *)(iVar6 + 0x41) = 0x10;
      bVar9 = *(byte *)(*(int *)(*(int *)(param_3 + 0xc) + 2) + 1);
      bVar11 = bVar9 & 1;
      if ((bVar9 & 1) == 0) {
        if (*(char *)(*(int *)(*(int *)(param_3 + 0xc) + 2) + 2) < '\0') {
          FUN_1402a6e8(4,0xd34,DAT_1404e1ec,DAT_1404e1e8,DAT_1404e20c,bVar11,uVar18,uVar12);
          *(undefined1 *)(iVar6 + 0x40) = 0x10;
        }
        else {
          FUN_1402a6e8(4,0xd38,DAT_1404e1ec,DAT_1404e1e8,DAT_1404e1f0,bVar11,uVar18,uVar12);
          *(undefined1 *)(iVar6 + 0x40) = 0x20;
        }
      }
      else {
        FUN_1402a6e8(4,0xd30,DAT_1404e1ec,DAT_1404e1e8,DAT_1404e21c,0,uVar18,uVar12);
        *(undefined1 *)(iVar6 + 0x40) = 0x20;
      }
      bVar9 = *(byte *)(*(int *)(*(int *)(param_3 + 0xc) + 2) + 2);
    }
    else {
      if (cVar1 != '\0') goto LAB_1404d994;
      puVar7 = *(undefined1 **)(*(char **)(param_3 + 0xc) + 2);
      FUN_1402a6e8(4,0xd4c,DAT_1404e1ec,DAT_1404e1e8,DAT_1404e204,0,*puVar7,puVar7[2],puVar7[3],
                   puVar7[2],puVar7[3]);
      *(undefined1 *)(iVar6 + 0x4a) = 0;
      *(undefined1 *)(iVar6 + 0x41) = 0x10;
      *(byte *)(iVar6 + 0x40) = **(byte **)(*(int *)(param_3 + 0xc) + 2) & 0xf0;
      bVar9 = **(byte **)(*(int *)(param_3 + 0xc) + 2);
    }
    if ((int)((uint)bVar9 << 0x1c) < 0) {
      *(undefined1 *)(iVar6 + 0x43) = 1;
      uVar18 = (uint)*param_3;
    }
    else {
      *(undefined1 *)(iVar6 + 0x43) = 2;
LAB_1404d994:
      uVar18 = (uint)*param_3;
    }
    break;
  case 0x12:
    FUN_14092f94(param_2);
    iVar6 = FUN_140959dc();
    if (iVar6 == 2) {
      FUN_1402a6e8(4,0xb0f,DAT_1404dee8,DAT_1404deec,DAT_1404defc,0);
      uVar18 = (uint)*param_3;
    }
    else {
      if (*DAT_1404db78 != '\0') {
        *DAT_1404db78 = '\0';
        iVar6 = FUN_1404a1b4();
        if (*(char *)(iVar6 + 0x7f) != '\0') {
          FUN_1409428c(*(undefined4 *)(iVar6 + 0x78));
        }
      }
      thunk_FUN_1405289c();
      iVar6 = FUN_1403cd80(5);
      if (((iVar6 != 0) || (iVar6 = FUN_1403cd80(4), iVar6 != 0xff)) ||
         (iVar6 = FUN_1409dbd0(), iVar6 != 0xff)) goto LAB_1404d994;
      iVar6 = FUN_140932dc(auStack_74,param_3,0);
      if ((code *)*DAT_1404db7c == (code *)0x0) {
        FUN_140abc90(0,auStack_74,iVar6 + *(int *)(param_3 + 0xc),
                     (uint)*(ushort *)(param_3 + 2) - iVar6);
        uVar18 = (uint)*param_3;
      }
      else {
        (*(code *)*DAT_1404db7c)
                  (*(int *)(param_3 + 0xc) + iVar6,(uint)*(ushort *)(param_3 + 2) - iVar6);
        uVar18 = (uint)*param_3;
      }
    }
    break;
  case 0x17:
    uVar19 = 0x17;
    uVar10 = 0x990;
    uVar21 = DAT_1404db80;
    goto LAB_1404d8d2;
  case 0x18:
    uVar19 = 0x18;
    uVar10 = 0x98d;
    uVar21 = DAT_1404db6c;
LAB_1404d8d2:
    FUN_1402a6e8(4,uVar10,DAT_1404db70,DAT_1404db74,uVar21,0,uVar19,param_2);
    uVar18 = (uint)*param_3;
    break;
  case 0x1e:
    FUN_1402a6e8(4,0x989,DAT_1404d88c,DAT_1404d888,DAT_1404d884,0,0x1e);
    goto LAB_1404d66e;
  }
  FUN_1404d564(0,uVar18);
LAB_1404d682:
  if (*DAT_1404d87c == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

