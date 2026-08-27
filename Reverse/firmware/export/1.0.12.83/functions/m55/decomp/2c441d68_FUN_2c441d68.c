/* FUN_2c441d68 @ 0x2c441d68 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c4417e4) */
/* WARNING: Removing unreachable block (ram,0x2c441774) */
/* WARNING: Removing unreachable block (ram,0x2c4417e8) */
/* WARNING: Removing unreachable block (ram,0x2c44186e) */
/* WARNING: Removing unreachable block (ram,0x2c44188e) */
/* WARNING: Removing unreachable block (ram,0x2c4417a2) */
/* WARNING: Removing unreachable block (ram,0x2c4417ea) */
/* WARNING: Removing unreachable block (ram,0x2c441e06) */
/* WARNING: Removing unreachable block (ram,0x2c441940) */
/* WARNING: Removing unreachable block (ram,0x2c52b5fc) */
/* WARNING: Removing unreachable block (ram,0x2c441948) */
/* WARNING: Removing unreachable block (ram,0x2c441950) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c441d68(uint param_1,uint param_2,uint param_3,uint *param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  int *piVar12;
  uint unaff_r4;
  uint *puVar13;
  uint unaff_r5;
  int *piVar14;
  uint *unaff_r6;
  uint unaff_r7;
  int *piVar15;
  int unaff_r8;
  undefined4 unaff_r10;
  uint *puVar16;
  uint *puVar17;
  uint unaff_lr;
  bool bVar18;
  uint *puVar19;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr14;
  
  puVar16 = (uint *)register0x00000054;
  while( true ) {
    puVar17 = puVar16;
    puVar17[-1] = unaff_lr;
    puVar17[-2] = unaff_r7;
    puVar17[-3] = unaff_r4;
    puVar17[-4] = (uint)param_4;
    puVar16 = puVar17 + -5;
    *puVar16 = param_3;
    param_3 = param_3 + 0x69;
    *unaff_r6 = param_1;
    unaff_r6[1] = param_3;
    unaff_r6[2] = (uint)param_4;
    unaff_r6[3] = unaff_r4;
    unaff_r6[4] = unaff_r5;
    unaff_r6[5] = unaff_r7;
    puVar19 = unaff_r6 + 6;
    bVar18 = SBORROW4(param_1,0xe7);
    uVar4 = param_1 - 0xe7;
    if (unaff_r7 == 0) break;
    *param_4 = uVar4;
    param_4[1] = param_2;
    param_4[2] = (uint)param_4;
    param_4[3] = unaff_r4;
    param_4[4] = unaff_r5;
    param_4[5] = (uint)puVar19;
    param_4[6] = unaff_r7;
    software_hlt(0x3e);
    unaff_r6 = (uint *)((int)uVar4 >> 5);
    coprocessor_store(0,in_cr1,unaff_r8 + -0x88);
    unaff_r7 = (int)uVar4 >> 0x1a;
    param_3 = unaff_r7 >> 0x1a;
    unaff_r4 = (uint)*(ushort *)(param_1 - 0xb7);
    param_1 = uVar4;
    if (param_3 == 0) {
      puVar17[0xe0] = uVar4;
      uVar8 = *(uint *)((int)param_4 + unaff_r5);
      uRam2c441a74 = param_2;
      *(undefined4 *)(uVar8 + 0x40) = 0x2c441a74;
      if (bVar18) {
        coprocessor_loadlong(0,in_cr14,0);
        iVar3 = uVar4 * 0x8000000;
        *(undefined4 *)(unaff_r5 + 0x20) = 0x2c441bd0;
        puVar17[0x3c] = (uint)(puVar17 + 0x6a);
        *(uint *)(iVar3 + 0x20) = uVar8;
        uVar4 = (uint)bRamfffffdf4;
        puVar17[0xc3] = (uint)(puVar17 + 0x6a);
        iVar10 = *(int *)(iVar3 + 4);
        iVar3 = *(int *)(iVar3 + 0x10);
        *(undefined2 *)(uVar4 + 2) = 0x18;
        if (-1 < (int)(unaff_r5 - 5)) {
          iVar3 = *(int *)(iVar10 + 8);
        }
        *(uint *)(iVar3 + 0x20) = uVar4 + 0x78;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar17[0x35] = uVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  piVar15 = (int *)0xc4;
  if ((param_3 >> 0x1b & 1) != 0) {
    uVar4 = (uint)bRam000000d0;
    *(char *)(param_2 + 0x1a) = (char)unaff_r5;
    *(uint *)(param_2 + 0x34) = uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)((int)unaff_r6 + 0x2a) = (short)unaff_r4;
  uVar8 = puVar17[0xbd];
  _MasterStackPointer = (param_3 >> 0x1c) - 0xb3;
  *(int *)(_MasterStackPointer + param_2) = _MasterStackPointer;
  uVar4 = _SVCall;
  piVar14 = (int *)((int)unaff_r6 + 0x1d);
  puVar11 = (uint *)(uint)uRam2c441c68;
  if ((uint *)0xfffffffa < puVar19) {
    uVar8 = *puVar11;
    uVar9 = puVar11[1];
    puVar13 = (uint *)puVar11[2];
    puVar11 = puVar11 + 3;
    coprocessor_load(0xe,in_cr2,uVar9);
    *(char *)(uVar8 + 0x1f) = (char)uVar9 + -0x14;
    if (piVar14 == (int *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(short *)((int)puVar19 + (int)puVar13) = (short)puVar19;
    uVar2 = uRam2c441b6c;
    uVar7 = uVar9 + 0x24f;
    if (uVar4 != 0) {
      while( true ) {
        *puVar13 = uVar8;
        puVar13[1] = (uint)puVar13;
        puVar13[2] = uVar2;
        puVar11 = (uint *)((int)uVar8 >> 0x1a);
        piVar14 = *(int **)((int)puVar13 + uVar4);
        *(uint *)(uVar2 + 0x28) = uVar8;
        puVar13 = (uint *)(uint)*(ushort *)(uVar4 + 0x1e);
        if (uVar4 != 0) break;
        coprocessor_storelong(8,in_cr7,unaff_r10);
        uVar4 = uVar7 >> 0x11;
        if (uVar4 != 0 && !SBORROW4((int)piVar14,0x16)) {
          puVar17[-6] = uVar8 >> 10;
          puVar17[-7] = uVar2;
          puVar17[-8] = (uint)puVar13;
          puVar17[-9] = (uint)(puVar17 + 0x36);
          puVar17[-10] = (uint)puVar11;
          puVar17[-0xb] = uVar8;
          coprocessor_movefromRt(0xd,5,7,in_cr6,in_cr3);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      *puVar13 = uVar8;
      puVar13[1] = (uint)puVar13;
      puVar13[2] = uVar2;
      puVar13 = (uint *)(uint)*(byte *)(uVar9 + 0x265);
      piVar15 = (int *)(int)*(short *)((int)puVar11 + (int)puVar13);
      software_bkpt(0x9d);
    }
    *(char *)((int)puVar13 + 0xd) = (char)uVar2;
    puVar17[0x4e] = uVar8;
    while( true ) {
      piVar12 = piVar14;
      iVar5 = piVar15[1];
      *(short *)(*piVar15 + 0x18) = (short)piVar15 + 0x10;
      piVar14 = (int *)((int)puVar11 * 0x400000);
      coprocessor_store(1,in_cr8,puVar16 + 0x6e);
      iVar3 = uVar7 - 0x260;
      iVar10 = piVar14[iVar3 * 0x80];
      uVar7 = *(uint *)(iVar5 * -0x80000000 + 0x30);
      iVar5 = (int)(char)iVar10 + 0x1d;
      if (-1 < iVar5) {
        *(char *)(iVar3 * 0x200 + 0x16) = (char)puVar11 + '\x05';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar16[0x32] = (uint)(puVar16 + 0xcc);
      iVar6 = piVar12[0x94];
      if (0xffffffe2 < (uint)(int)(char)iVar10) break;
      piVar12[0x14] = iVar6;
      software_hlt(0x26);
      piVar15 = (int *)0x2c441474;
      if (iVar6 < 0xa3) {
        *piVar12 = iVar6;
        piVar12[1] = 0x2c441474;
        piVar14[3] = (int)(piVar12 + 2);
        *(short *)(iVar6 + 6) = (short)uVar7;
        piVar12[2] = (int)piVar14;
        piVar12[0xcc] = 0x2c441474;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *piVar14 = iVar3;
      piVar14[1] = uVar7;
      piVar14[2] = iVar5;
      puVar11 = (uint *)piVar12[2];
      piVar14 = piVar12 + 4;
      puVar16 = (uint *)piVar12;
    }
    *piVar12 = iVar6;
    piVar12[1] = iVar3 * 0x200;
    piVar12[2] = iVar5;
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0x4b,0x2c441354);
    (*pcVar1)();
  }
  *(short *)(uVar8 + (int)piVar14) = (short)unaff_r6[0x15];
  *(undefined2 *)(uVar4 + 0x3e) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

