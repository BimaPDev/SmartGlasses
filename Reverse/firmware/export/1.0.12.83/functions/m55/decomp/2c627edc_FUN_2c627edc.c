/* FUN_2c627edc @ 0x2c627edc */

/* WARNING: Instruction at (ram,0x2c63801c) overlaps instruction at (ram,0x2c63801a)
    */

int FUN_2c627edc(uint param_1,int param_2,int param_3,uint param_4,undefined4 *param_5,
                short *param_6,short *param_7,byte param_8)

{
  short sVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  short sVar10;
  undefined1 *puVar11;
  int unaff_r6;
  undefined4 *puVar12;
  int unaff_r7;
  short *psVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  short *psVar18;
  bool bVar19;
  bool bVar20;
  undefined4 in_cr4;
  
  puVar12 = DAT_2c638198;
  puVar15 = (undefined4 *)(uint)param_8;
  sVar1 = (short)param_1;
  if (param_2 != 0) {
LAB_2c627f34:
    sVar10 = (short)param_4;
    iVar17 = 0;
    *param_7 = 0;
    sVar4 = 0;
    goto LAB_2c627f3c;
  }
  if (param_3 - 4U < 3) {
    uVar7 = 0;
    param_4 = uVar7;
    if (param_5 != (undefined4 *)0x1) goto LAB_2c627efa;
    param_3 = 1;
LAB_2c627f00:
    sVar10 = (short)param_4;
    puVar12 = (undefined4 *)0x0;
    psVar13 = param_6 + -1;
    sVar5 = 0;
    do {
      psVar13 = psVar13 + 1;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
      sVar4 = sVar5 + *psVar13;
      sVar3 = (short)uVar7;
      sVar5 = sVar3 + sVar4;
    } while (puVar12 < param_5);
    switch(param_3) {
    case 0:
      goto LAB_2c627f34;
    case 1:
      iVar16 = param_1 - (int)sVar4;
      if (iVar16 < 0) {
        iVar16 = iVar16 + 1;
      }
      iVar17 = (iVar16 << 0xf) >> 0x10;
      sVar4 = (short)((uint)(iVar16 << 0xf) >> 0x10);
      *param_7 = (short)((uint)(iVar16 << 0xf) >> 0x10);
      break;
    case 2:
      sVar4 = (sVar3 + sVar1) - sVar5;
      iVar17 = (int)sVar4;
      *param_7 = sVar4;
      break;
    default:
      iVar17 = (int)*param_7;
      sVar4 = *param_7;
      break;
    case 4:
      sVar10 = (short)((sVar3 + sVar1) - sVar5) / (short)((short)param_5 + 1);
      iVar17 = (int)sVar10;
      *param_7 = sVar10;
      sVar4 = sVar10;
      break;
    case 5:
      sVar10 = (short)((sVar3 + sVar1) - sVar5) / (short)param_5;
      iVar17 = (int)sVar10;
      if (iVar17 < 0) {
        iVar17 = iVar17 + 1;
      }
      iVar17 = iVar17 >> 1;
      *param_7 = (short)iVar17;
      sVar4 = (short)iVar17;
      break;
    case 6:
      iVar16 = 0;
      sVar4 = 0;
      iVar17 = 0;
      *param_7 = 0;
      sVar10 = (short)((sVar3 + sVar1) - sVar5) / (short)((int)param_5 + -1);
      if ((int)param_5 + -1 == 0) goto LAB_2c627fd4;
      goto LAB_2c627f40;
    }
LAB_2c627f3c:
    iVar16 = iVar17;
    if (param_5 == (undefined4 *)0x1) {
LAB_2c627fd4:
      iVar16 = (int)(short)((*param_7 + *param_6) - sVar4);
      puVar12 = puVar15;
    }
    else {
LAB_2c627f40:
      uVar7 = (int)param_5 - 1;
LAB_2c627f42:
      psVar13 = param_6 + -1;
      uVar8 = 0;
      psVar18 = param_7;
      do {
        psVar13 = psVar13 + 1;
        uVar8 = uVar8 + 1;
        sVar5 = *psVar13 + (short)iVar16 + sVar10;
        iVar16 = (int)sVar5;
        psVar18 = psVar18 + 1;
        *psVar18 = sVar5;
      } while (uVar8 < uVar7);
      iVar17 = (int)*param_7;
      iVar16 = (int)(short)((param_7[(int)param_5 + 0x7fffffff] + param_6[(int)param_5 + 0x7fffffff]
                            ) - *param_7);
      puVar12 = param_5;
      if (puVar15 == (undefined4 *)0x0) {
        return iVar16;
      }
    }
    if (puVar12 != (undefined4 *)0x0) {
      param_6 = param_6 + -1;
      puVar15 = (undefined4 *)0x0;
      while( true ) {
        param_6 = param_6 + 1;
        puVar15 = (undefined4 *)((int)puVar15 + 1);
        *param_7 = sVar1 - (*param_6 + (short)iVar17);
        if (param_5 <= puVar15) break;
        iVar17 = (int)param_7[1];
        param_7 = param_7 + 1;
      }
    }
    return iVar16;
  }
  uVar7 = param_4 & 0xffff;
LAB_2c627efa:
  sVar10 = (short)uVar7;
  if (param_5 != (undefined4 *)0x0) goto LAB_2c627f00;
  bVar20 = SBORROW4(param_3,6);
  iVar17 = param_3 + -6;
  bVar19 = param_3 == 6;
  switch(param_3) {
  case 0:
    uVar8 = (uint)((ulonglong)((longlong)(int)param_4 * 0x2c62808c) >> 0x20) & 0xffff;
    iVar16 = unaff_r7 + 0x20;
    FUN_2c62e7b4(iVar16,uVar7,(int)((longlong)(int)param_4 * 0x2c62808c));
    *(undefined4 *)(unaff_r7 + 0x54) = 300;
    *(undefined4 *)(unaff_r7 + 0x5c) = 300;
    *(undefined2 *)(unaff_r7 + 0x60) = 0xffff;
    *(short **)(unaff_r7 + 0x20) = param_7;
    uVar6 = DAT_2c637e80;
    iVar17 = (int)(short)((*(short *)(unaff_r7 + 0x1c) + 1) - *(short *)(unaff_r7 + 0x18));
    if (*(short *)(unaff_r7 + 0x10) <= iVar17) {
      FUN_2c62e838(param_7,DAT_2c638184);
      sVar1 = *(short *)(unaff_r7 + 0x1e);
      sVar10 = *(short *)(unaff_r7 + 0x1a);
      sVar5 = *(short *)(unaff_r7 + 0x12);
      param_7[0x27] = 0;
      iVar17 = (int)(short)((sVar1 + 1) - sVar10);
      if (sVar5 <= iVar17) break;
      sVar1 = *(short *)(unaff_r6 + 8);
      *(undefined4 *)(unaff_r7 + 0x24) = DAT_2c638188;
      *(int *)(unaff_r7 + 0x48) = (iVar17 - sVar5) - (int)sVar1;
      *(undefined4 *)(unaff_r7 + 0x40) = 0;
      *(undefined4 *)(unaff_r7 + 0x44) = 0;
      iVar17 = FUN_2c62e994(param_7);
      if (iVar17 == 0) {
        if (*(int *)(unaff_r7 + 0x4c) < 1) goto LAB_2c638290;
        uVar6 = *(undefined4 *)(unaff_r7 + 0x40);
        uVar9 = *(undefined4 *)(unaff_r7 + 0x48);
        *(undefined4 *)(unaff_r7 + 0x50) = 0;
        *(byte *)(unaff_r7 + 0x62) = *(byte *)(unaff_r7 + 0x62) & 0xfe;
      }
      else {
        if (*(int *)(iVar17 + 0x30) < *(int *)(unaff_r7 + 0x4c)) {
          bVar2 = *(byte *)(iVar17 + 0x42);
          *(int *)(unaff_r7 + 0x50) = *(int *)(iVar17 + 0x30);
          *(byte *)(unaff_r7 + 0x62) = *(byte *)(unaff_r7 + 0x62) & 0xfe;
          if ((int)((uint)bVar2 << 0x1e) < 0) {
            uVar9 = *(undefined4 *)(unaff_r7 + 0x40);
            uVar6 = *(undefined4 *)(unaff_r7 + 0x48);
            *(undefined4 *)(unaff_r7 + 0x48) = uVar9;
            *(undefined4 *)(unaff_r7 + 0x40) = uVar6;
            *(byte *)(unaff_r7 + 0x62) = *(byte *)(unaff_r7 + 0x62) | 2;
            goto LAB_2c637f02;
          }
        }
LAB_2c638290:
        uVar6 = *(undefined4 *)(unaff_r7 + 0x40);
        uVar9 = *(undefined4 *)(unaff_r7 + 0x48);
      }
LAB_2c637f02:
      uVar6 = FUN_2c62e9d4(uVar8,uVar6,uVar9);
      *(undefined4 *)(unaff_r7 + 0x4c) = uVar6;
      *(undefined4 *)(unaff_r7 + 0x58) = uVar6;
      FUN_2c62e8ec(iVar16);
      goto LAB_2c637c04;
    }
    *(int *)(unaff_r7 + 0x48) = iVar17 - *(short *)(unaff_r7 + 0x10);
    *(undefined4 *)(unaff_r7 + 0x24) = uVar6;
    *(undefined4 *)(unaff_r7 + 0x40) = 0;
    *(undefined4 *)(unaff_r7 + 0x44) = 0;
    iVar17 = FUN_2c62e994(param_7);
    if (iVar17 == 0) {
      if (*(int *)(unaff_r7 + 0x4c) < 1) goto LAB_2c637e44;
      uVar6 = *(undefined4 *)(unaff_r7 + 0x40);
      uVar9 = *(undefined4 *)(unaff_r7 + 0x48);
      *(undefined4 *)(unaff_r7 + 0x50) = 0;
      *(byte *)(unaff_r7 + 0x62) = *(byte *)(unaff_r7 + 0x62) & 0xfe;
    }
    else {
      if (*(int *)(iVar17 + 0x30) < *(int *)(unaff_r7 + 0x4c)) {
        bVar2 = *(byte *)(iVar17 + 0x42);
        *(int *)(unaff_r7 + 0x50) = *(int *)(iVar17 + 0x30);
        *(byte *)(unaff_r7 + 0x62) = *(byte *)(unaff_r7 + 0x62) & 0xfe;
        if ((int)((uint)bVar2 << 0x1e) < 0) {
          uVar9 = *(undefined4 *)(unaff_r7 + 0x40);
          uVar6 = *(undefined4 *)(unaff_r7 + 0x48);
          *(undefined4 *)(unaff_r7 + 0x48) = uVar9;
          *(undefined4 *)(unaff_r7 + 0x40) = uVar6;
          *(byte *)(unaff_r7 + 0x62) = *(byte *)(unaff_r7 + 0x62) | 2;
          goto LAB_2c637e48;
        }
      }
LAB_2c637e44:
      uVar6 = *(undefined4 *)(unaff_r7 + 0x40);
      uVar9 = *(undefined4 *)(unaff_r7 + 0x48);
    }
LAB_2c637e48:
    uVar6 = FUN_2c62e9d4(uVar8,uVar6,uVar9);
    *(undefined4 *)(unaff_r7 + 0x4c) = uVar6;
    *(undefined4 *)(unaff_r7 + 0x58) = uVar6;
    FUN_2c62e8ec(iVar16);
    break;
  case 1:
    goto code_r0x2c6380a8;
  case 2:
    goto code_r0x2c63803e;
  case 3:
    goto code_r0x2c6380ae;
  case 4:
    goto code_r0x2c638010;
  case 5:
    if (((param_3 <= (short)param_4) || (param_3 <= *(short *)(unaff_r6 + 8))) ||
       (uVar7 = (*(code *)*DAT_2c638198)(*(undefined4 *)(param_7 + 0x12)), puVar15 = puVar12,
       uVar7 < 4)) {
      param_7[0x1a] = -1;
      param_7[0x1b] = -1;
      goto LAB_2c637c04;
    }
code_r0x2c638010:
    sVar10 = *(short *)(unaff_r7 + 0x1c);
    sVar1 = *(short *)(unaff_r7 + 0x18);
    sVar5 = FUN_2c6298c0();
    iVar17 = (int)(short)(sVar5 * -3 + ((sVar10 + 1) - sVar1));
    bVar19 = iVar17 == 0;
    bVar20 = false;
    *(int *)(unaff_r7 + 8) = iVar17;
code_r0x2c63803e:
    if (bVar19 || iVar17 < 0 != bVar20) goto LAB_2c637c04;
    iVar17 = (*(code *)*puVar15)(*(undefined4 *)(param_7 + 0x12));
    iVar16 = lv_mem_alloc(iVar17 << 2);
    *(int *)(unaff_r7 + 0xc) = iVar16;
    *(undefined4 *)(unaff_r7 + 0x14) = 0;
    puVar15 = DAT_2c638190;
    if (iVar17 == 0) {
      puVar15 = (undefined4 *)0xfffffffe;
      param_1 = FUN_2c6298c0();
code_r0x2c6380a8:
      *(short **)(unaff_r7 + 4) = param_7;
code_r0x2c6380ae:
      uVar7 = *(uint *)(unaff_r7 + 8);
      do {
        iVar17 = FUN_2c6298c0();
        param_1 = param_1 + iVar17;
        if (uVar7 == param_1) {
          param_7 = *(short **)(unaff_r7 + 4);
          goto LAB_2c6380e0;
        }
        if (uVar7 < param_1) {
          param_7 = *(short **)(unaff_r7 + 4);
          puVar15 = (undefined4 *)((int)puVar15 + 1);
          goto LAB_2c6380e0;
        }
        puVar15 = (undefined4 *)((int)puVar15 + -1);
      } while (puVar15 != (undefined4 *)0x0);
      param_7 = *(short **)(unaff_r7 + 4);
    }
    else {
      puVar12 = (undefined4 *)(iVar16 + -4);
      iVar16 = 0;
      do {
        iVar14 = iVar16;
        uVar6 = (*(code *)*puVar15)(*(undefined4 *)(param_7 + 0x12),unaff_r7 + 0x14);
        iVar16 = iVar14 + 1;
        puVar12 = puVar12 + 1;
        *puVar12 = uVar6;
      } while (iVar17 != iVar16);
      param_1 = FUN_2c6298c0();
      puVar15 = (undefined4 *)(iVar14 + -1);
      if (puVar15 != (undefined4 *)0x0) goto code_r0x2c6380a8;
    }
    puVar15 = (undefined4 *)0x0;
LAB_2c6380e0:
    FUN_2c62bea8(*(undefined4 *)(unaff_r7 + 0xc));
    uVar6 = *(undefined4 *)(param_7 + 0x12);
    uVar7 = FUN_2c66c4ec(uVar6);
    iVar17 = (*(code *)*DAT_2c638194)(uVar6,puVar15);
    *(int *)(unaff_r7 + 0x20) = iVar17;
    puVar15 = DAT_2c63819c;
    if (uVar7 < iVar17 + 3U) {
      do {
        (*(code *)*puVar15)(*(undefined4 *)(param_7 + 0x12),unaff_r7 + 0x20);
      } while (uVar7 < *(int *)(unaff_r7 + 0x20) + 3U);
    }
    uVar6 = FUN_2c637ab8(*(undefined4 *)(param_7 + 0x12));
    uVar6 = FUN_2c62bebc(*(undefined4 *)(param_7 + 0x14),uVar6);
    *(undefined4 *)(param_7 + 0x14) = uVar6;
    FUN_2c6435c4(uVar6,*(undefined4 *)(param_7 + 0x12));
    puVar11 = *(undefined1 **)(param_7 + 0x12);
    iVar16 = *(int *)(unaff_r7 + 0x20);
    iVar17 = FUN_2c66c4ec(puVar11);
    uVar6 = FUN_2c6435c4(&stack0xffffffec + -(iVar17 + 7U & 0xfffffff8),puVar11 + iVar16);
    *puVar11 = 0x2e;
    *(undefined1 *)(*(int *)(param_7 + 0x12) + 1) = 0x2e;
    *(undefined1 *)(*(int *)(param_7 + 0x12) + 2) = 0x2e;
    *(undefined1 *)(*(int *)(param_7 + 0x12) + 3) = 0;
    FUN_2c66b5ec(*(undefined4 *)(param_7 + 0x12),uVar6);
    param_7[0x1a] = -2;
    param_7[0x1b] = -1;
    goto LAB_2c637c04;
  case 6:
    coprocessor_load(6,in_cr4,0x2c628080);
    *(uint *)(unaff_r7 + 0x4c) = param_4;
    iVar16 = FUN_2c62e994(param_7);
    iVar17 = 0;
    if (iVar16 != 0) {
      iVar17 = *(int *)(iVar16 + 0x30);
    }
    if (param_6 == (short *)0x0) {
      if (iVar17 < *(int *)(unaff_r7 + 0x4c)) {
        *(int *)(unaff_r7 + 0x50) = iVar17;
        *(byte *)(unaff_r7 + 0x62) = *(byte *)(unaff_r7 + 0x62) & 0xfe;
      }
    }
    else {
      *(undefined4 *)(unaff_r7 + 0x50) = *(undefined4 *)(param_6 + 0x18);
      *(undefined4 *)(unaff_r7 + 0x5c) = *(undefined4 *)(param_6 + 0x1e);
    }
    FUN_2c62e8ec(0);
    break;
  default:
    iVar16 = (int)*param_7;
    uVar7 = 0xffffffff;
    goto LAB_2c627f42;
  }
  FUN_2c62e838(param_7,DAT_2c637e84);
  param_7[0x28] = 0;
LAB_2c637c04:
  iVar17 = FUN_2c607df0(param_7);
  if (*DAT_2c637e6c == *(int *)(unaff_r7 + 100)) {
    return iVar17;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

