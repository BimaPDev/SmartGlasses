/* FUN_2c0bde14 @ 0x2c0bde14 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c089a4a) */
/* WARNING: Removing unreachable block (ram,0x2c089a7a) */
/* WARNING: Removing unreachable block (ram,0x2c089a50) */
/* WARNING: Removing unreachable block (ram,0x2c089a6a) */
/* WARNING: Removing unreachable block (ram,0x2c089af0) */
/* WARNING: Removing unreachable block (ram,0x2c08a022) */
/* WARNING: Removing unreachable block (ram,0x2c08a066) */
/* WARNING: Removing unreachable block (ram,0x2c08a024) */
/* WARNING: Removing unreachable block (ram,0x2c08a02e) */
/* WARNING: Removing unreachable block (ram,0x2c089f66) */
/* WARNING: Removing unreachable block (ram,0x2c089c72) */
/* WARNING: Removing unreachable block (ram,0x2c089c8c) */
/* WARNING: Removing unreachable block (ram,0x2c089c8e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_2c0bde14(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *extraout_r1;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint extraout_r2;
  undefined4 extraout_r2_00;
  int *piVar7;
  undefined4 *puVar8;
  int extraout_r3;
  undefined4 *extraout_r3_00;
  uint uVar9;
  int iVar10;
  int unaff_r5;
  int *piVar11;
  undefined4 *puVar12;
  code *pcVar13;
  uint uVar14;
  int *unaff_r7;
  int unaff_r8;
  undefined4 *puVar15;
  undefined4 *unaff_r9;
  code *unaff_r10;
  code *unaff_r11;
  uint in_r12;
  undefined4 *puVar16;
  bool bVar17;
  bool bVar18;
  char cVar19;
  bool bVar20;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr7;
  undefined4 in_cr14;
  undefined4 in_cr15;
  ulonglong uVar21;
  undefined8 uVar22;
  
  if (param_1 == 0) {
    if (param_4 == 0) {
      return ZEXT48(param_2) << 0x20;
    }
    return ZEXT48(param_2) << 0x20;
  }
  piVar4 = (int *)0x2c0be210;
  bVar20 = SBORROW4(unaff_r5 + -0x69,0x68);
  piVar11 = (int *)(unaff_r5 + -0xd1);
  puVar16 = (undefined4 *)(in_r12 & 0xeaeaeaea);
  puVar12 = (undefined4 *)(param_3 + 0x378);
  coprocessor_store(4,in_cr0,puVar12);
  bVar18 = ((uint)param_2 >> 0x13 & 1) != 0;
  piVar7 = (int *)((uint)param_2 >> 0x14);
  bVar17 = piVar7 == (int *)0x0;
  if (bVar18 && !bVar17) {
    *(short *)(param_1 + 0x18) = (short)param_2;
    iVar5 = param_1;
    if (bVar18 && !bVar17) {
      *piVar11 = param_1;
      *(int **)(unaff_r5 + -0xcd) = piVar7;
      *(int **)(unaff_r5 + -0xc9) = piVar11;
      *(int **)(unaff_r5 + -0xc5) = unaff_r7;
      if (bVar17 || bVar20) {
        *(int *)((int)param_2 + param_1) = param_1;
        unaff_r7 = (int *)0xb02f8840;
        param_1 = 0x17c42000;
        iVar5 = (int)(puVar16 + 0xfc) + (int)unaff_r9;
        goto LAB_2c089778;
      }
      puVar12 = puVar16 + 0xcb;
      *(short *)(param_1 + (int)param_2) = (short)piVar11;
      goto LAB_2c0896fe;
    }
  }
  else {
    piVar4 = (int *)*puVar16;
    piVar11 = puVar16 + 1;
    piVar7 = (int *)puVar16[2];
    uVar9 = puVar16[3];
    unaff_r7 = (int *)puVar16[5];
    puVar16 = puVar16 + 6;
    bVar18 = 0x32 < uVar9;
    bVar20 = SBORROW4(uVar9,0x33);
    param_2 = (undefined4 *)(uVar9 - 0x33);
    bVar17 = param_2 == (undefined4 *)0x0;
    iVar5 = *piVar11;
    if (!bVar18 || bVar17) {
      coprocessor_load(7,in_cr7,unaff_r9 + 0x6e);
      coprocessor_load(2,in_cr2,in_r12 + 0x2c8);
      *(short *)((int)unaff_r7 * 0x400000 + (int)*(short *)(param_1 * 2)) = *(short *)(param_1 * 2);
      software_bkpt(200);
                    /* WARNING: Does not return */
      pcVar13 = (code *)software_udf(0x89,0x2c0896e4);
      (*pcVar13)();
    }
LAB_2c0896fe:
    if (!bVar18 || bVar17) goto LAB_2c089710;
    param_2 = (undefined4 *)(int)*(short *)((int)unaff_r7 + (int)piVar7);
    iVar5 = *piVar4;
    iVar10 = piVar4[1];
    piVar4 = piVar4 + 2;
    if (!bVar18 || bVar17) {
      if (bVar20) {
        while( true ) {
          iVar5 = (int)param_2 * 0x80000;
          if (((uint)param_2 & 0x2000) == 0 || iVar5 == 0) break;
          iVar5 = (int)unaff_r7 << 1;
          piVar4 = (int *)(param_1 << 0xc);
LAB_2c089778:
          uVar9 = param_1 >> 8;
          iVar10 = *(int *)(param_1 + 4);
          param_1 = param_1 + 8;
          *param_2 = piVar4;
          param_2[1] = iVar5;
          param_2 = param_2 + 2;
          piVar4 = (int *)(param_1 + (uint)((uVar9 & 1) != 0));
        }
        *piVar7 = iVar5;
        piVar7[1] = (int)param_2;
        piVar7[2] = iVar10;
        *(char *)(param_1 + (int)unaff_r7) = (char)iVar10;
        *(short *)(iVar5 + 0x24) = (short)((int)piVar4 << 0xd);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_2c089718;
    }
  }
  piVar7 = (int *)piVar4[0x1b];
  *unaff_r7 = param_1;
  unaff_r7[1] = (int)piVar7;
  unaff_r7 = unaff_r7 + 2;
  if (!bVar18 || bVar17) {
LAB_2c089718:
                    /* WARNING: Does not return */
    pcVar13 = (code *)software_udf(0xe0,0x2c08971e);
    (*pcVar13)();
  }
  *(short *)((int)piVar4 + 0x16) = (short)piVar7;
  param_2 = (undefined4 *)((int)param_2 << 0xd);
LAB_2c089710:
  *(int *)(iVar5 + 0x7c) = iVar5;
  *(short *)((int)puVar12 + 0x32) = (short)unaff_r7;
  while( true ) {
    bVar18 = SCARRY4((int)param_2,(int)piVar7);
    *(undefined4 *)((int)param_2 + (int)piVar7) = piVar4;
    puVar12 = (undefined4 *)((int)param_2 + (int)piVar7) + 1;
    iVar5 = (int)puVar12 * 0x20;
    piVar7 = (int *)0x2c089e2c;
    if (param_1 < 0 != bVar18) break;
    puVar16[0xa6] = puVar12;
    param_1 = 0x2c089b40;
    if ((uint)(unaff_r8 << 4) < 0xffffffeb) {
      uRam2c089e3e = SUB42(puVar12,0);
      piVar4 = (int *)param_2[1];
      if (param_2 < (undefined4 *)0xfffffffc || param_2 + 1 == (int *)0x0) {
        *(int *)(iVar5 + 0x74) = piVar4[1];
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (SCARRY4((int)(piVar4 + 3),5)) {
        *(short *)(*piVar4 + 4) = (short)iVar5;
                    /* WARNING: Does not return */
        pcVar13 = (code *)software_udf(0x86,0x2c08a04c);
        (*pcVar13)();
      }
      iVar5 = *(int *)piVar4[2];
      *(short *)(*piVar4 + 8) = (short)((int *)piVar4[2])[1];
      coprocessor_function2(4,2,1,in_cr7,in_cr15,in_cr14);
      if (iVar5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return CONCAT44(0x6f,*puVar16);
    }
  }
  *(undefined4 **)(iVar5 + 0x48) = puVar12;
  iVar5 = (int)param_2 * 0x20 + puVar16[0xcc];
  piVar4 = (int *)(unaff_r8 * 4);
  puVar12 = puVar16 + 0xe0;
  bVar18 = SCARRY4(iVar5,(int)puVar12);
  iVar10 = -0x4fdd8190;
  *(undefined4 *)(iVar5 + 0x50) = _DAT_2c089fd4;
  iVar2 = 4;
LAB_2c089c94:
  puVar8 = puVar16 + 0x67;
  pcVar13 = (code *)((int)puVar12 >> 0xf);
  puVar16[0x5e] = piVar4;
  uVar6 = 0x2c089dfc;
  puVar15 = unaff_r9;
  if (bVar18) goto LAB_2c089cd0;
  *(short *)(iVar5 + 0x38) = (short)pcVar13;
  if (iVar2 == 0) {
    puVar8 = *(undefined4 **)(iVar10 + 4);
    puVar12 = *(undefined4 **)(iVar10 + 8);
    pcVar13 = (code *)(iVar5 >> 0x17);
    puVar3 = (undefined1 *)0x0;
  }
  else {
    puVar3 = *(undefined1 **)(iVar10 + 4);
    puVar12 = *(undefined4 **)(iVar10 + 8);
    piVar4 = *(int **)(iVar10 + 0xc);
  }
  *(char *)(iVar5 + 0x1f) = (char)pcVar13;
LAB_2c089ce8:
  do {
    iVar5 = *(int *)((int)puVar8 + (int)puVar12);
    uVar22 = CONCAT44(puVar3,(uint)*(ushort *)(iVar5 + 0x36));
    *(char *)((int)puVar8 + (int)puVar12) = (char)puVar8;
    while( true ) {
      uVar9 = (uint)uVar22;
      puVar3 = (undefined1 *)((longlong)uVar22 >> 0x38);
      *(undefined1 **)pcVar13 = puVar3;
      *(undefined4 **)(pcVar13 + 4) = puVar12;
      *(int *)(pcVar13 + 8) = iVar5;
      *(code **)(pcVar13 + 0xc) = pcVar13;
      *(int **)(pcVar13 + 0x10) = piVar4;
      puVar15 = unaff_r9;
      if ((code *)0xe8 < pcVar13) break;
      while( true ) {
        *(short *)(uVar9 + 4) = (short)uVar9;
        pcVar13 = (code *)puVar16[0xb6];
        (*pcVar13)();
        puVar12 = (undefined4 *)(iVar5 >> 0x1a);
        puVar3 = extraout_r1;
        uVar9 = extraout_r2;
        do {
          *(uint *)(puVar3 + 0x28) = uVar9;
          puVar8 = (undefined4 *)*puVar16;
          *(undefined4 **)(puVar3 + 0x28) = puVar12;
          *(undefined2 *)(pcVar13 + 0x14) = 0x82;
          puVar12 = (undefined4 *)puVar8[1];
          cVar19 = SCARRY4(uVar9,_DAT_2c08a090);
          uVar9 = (uint)*(ushort *)(uVar9 + _DAT_2c08a090 + 0x30);
          uVar14 = uVar9 * 0x400000;
          software_bkpt(0xfd);
          uVar21 = (*unaff_r10)(uVar9,*puVar8,(int)uVar14 >> 0x1a,puVar8 + 4);
          puVar8 = puRam2c089cd8;
          iVar2 = (int)(uVar21 >> 0x20);
          uVar9 = (uint)uVar21;
          if (cVar19 != '\0') {
            *(short *)(iVar5 + 0xc) = (short)uVar21;
            piVar4 = (int *)0x2c089f24;
            uVar6 = extraout_r2_00;
LAB_2c089cd0:
            puVar16[0xb] = puVar8;
            puVar16[0x1f] = puVar16[0xda];
            *piVar4 = (int)puVar8 >> 0x15;
            piVar4[1] = iVar2;
            piVar4[2] = (int)puVar12;
            puVar16[0xc] = uVar6;
            puVar3 = (undefined1 *)(iVar2 + (int)puVar8);
            puVar12 = (undefined4 *)((int)puVar8 >> 0x1d);
            unaff_r9 = puVar15;
            goto LAB_2c089ce4;
          }
          puVar3 = (undefined1 *)(uVar9 * 0x10000000);
          if ((uVar21 & 0x10) != 0 && puVar3 != (undefined1 *)0x0) {
            *(uint *)(extraout_r3 + 0x5c) = (uint)*(ushort *)(extraout_r3 + 0x36);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          pcVar13 = (code *)((int)uVar14 >> 0x14);
          cVar19 = SBORROW4(uVar14,0x47);
          unaff_r9 = puVar15;
          uVar1 = uVar14 - 0x47;
          if (0x47 < uVar14) goto LAB_2c089dca;
          *(uint *)(puVar3 + 0x20) = uVar14;
          puVar8 = (undefined4 *)((uint)puVar12 >> 0x10);
          uVar9 = (uint)*(ushort *)(puVar3 + 0x24);
          iVar10 = (int)_MasterStackPointer;
          *(undefined2 *)(uVar9 + 0x3c) = 0;
          iVar5 = (int)*(char *)(iVar5 + uVar9);
          software_bkpt(200);
          puVar16[0xf7] = uVar14;
        } while ((bool)cVar19);
        cVar19 = SBORROW4((int)pcVar13,0xda);
        pcVar13 = pcVar13 + -0xda;
        iVar5 = 0x2c08a000;
        unaff_r9 = puVar15 + 0x33;
        *puVar15 = unaff_r10;
        puVar15[1] = 0x2c08a000;
        piVar4 = (int *)0x2c08a0b0;
        puVar12 = puVar16 + 199;
        if (!(bool)cVar19) goto LAB_2c089ce8;
        uVar22 = (*unaff_r11)(iVar10);
        uVar9 = (uint)uVar22;
        piVar4 = (int *)((int)puVar12 * 0x800);
        puVar8 = extraout_r3_00;
        if ((int)piVar4 < 0 == (bool)cVar19) break;
        pcVar13 = (code *)(uVar9 >> 0xb);
        puVar16[0x5e] = piVar4;
        puVar12 = (undefined4 *)0x2c08a1a8;
        uVar1 = uVar9;
LAB_2c089dca:
        puVar15 = unaff_r9;
        if ((int)uVar1 < 0 != (bool)cVar19) {
          iVar2 = 0xd5;
          *(short *)(iVar5 + (int)puVar12) = (short)pcVar13;
          bVar18 = SBORROW4(iRam2c089fb0,0x5f);
          piVar4 = (int *)0x1aa;
          puVar12 = (undefined4 *)0x1;
          iVar10 = 0x21;
          iVar5 = iRam2c089fb0;
          goto LAB_2c089c94;
        }
      }
    }
LAB_2c089ce4:
    pcVar13 = (code *)puVar16[200];
    piVar4 = (int *)puVar16[0x58];
  } while( true );
}

