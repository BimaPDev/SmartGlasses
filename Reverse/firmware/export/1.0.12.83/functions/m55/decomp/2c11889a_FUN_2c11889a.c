/* FUN_2c11889a @ 0x2c11889a */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c11889a(uint *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  short sVar3;
  bool bVar4;
  uint *puVar5;
  int iVar6;
  int extraout_r1;
  uint extraout_r2;
  int extraout_r3;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int unaff_r5;
  int *piVar10;
  undefined4 *puVar11;
  uint uVar12;
  int unaff_r9;
  uint unaff_lr;
  bool bVar13;
  int *piVar14;
  undefined4 in_cr1;
  undefined4 in_cr3;
  undefined4 in_cr5;
  undefined4 in_cr8;
  undefined4 uVar15;
  undefined8 in_d0;
  undefined4 extraout_s1;
  int in_stack_00000038;
  uint in_stack_000000ec;
  
  uVar12 = *(uint *)(param_4 + 0xc);
  piVar14 = (int *)(param_4 + 0x10);
  iVar6 = *(int *)(param_4 + 8) << 8;
LAB_2c1188a0:
  param_3 = param_3 + 0x6a;
  do {
    uVar7 = unaff_r5 << 1;
    sVar3 = *(short *)(uVar12 + param_3);
    unaff_r5 = (int)sVar3;
    if (iVar6 == 0) {
      in_d0 = VectorFloatToSignedRound(in_d0,0,4);
      param_1 = (uint *)((int)param_1 >> 0x18);
LAB_2c1188ea:
      bVar4 = (param_3 & 0x2000) != 0;
      piVar10 = (int *)(param_3 << 0x13);
      uVar9 = (uint)bVar4;
      uVar1 = unaff_lr + 0xe1e1e1e1;
      bVar2 = 0x1e1e1e1e < unaff_lr;
      bVar13 = SCARRY4(unaff_lr,-0x1e1e1e1f) != SCARRY4(uVar1,uVar9);
      unaff_lr = unaff_lr + 0xe1e1e1e1 + (uint)bVar4;
      if ((bVar2 || CARRY4(uVar1,uVar9)) && unaff_lr != 0) goto LAB_2c1188a0;
      *(int *)iVar6 = iVar6;
      *(uint *)(iVar6 + 4) = param_3;
      *(int **)(iVar6 + 8) = piVar14;
      *(uint *)(iVar6 + 0xc) = uVar7;
      *(int *)(iVar6 + 0x10) = unaff_r5;
      *(char *)(param_1 + 6) = (char)param_3;
LAB_2c11891e:
      uVar9 = uVar7;
      puVar5 = param_1;
      if (((uint)piVar10 >> 8 & 1) == 0 || (uint)piVar10 >> 9 == 0) {
        *(short *)(uVar12 + 0xc) = (short)piVar10;
        puVar11 = (undefined4 *)piVar14[3];
        uVar15 = *puVar11;
        iVar6 = puVar11[4];
        iVar8 = puVar11[5];
        piVar14 = (int *)(piVar14[1] >> 0x1f);
        *piVar14 = iVar6;
        piVar14[1] = (int)(puVar11 + 6);
        piVar14[2] = iVar8;
        *(undefined4 *)(iVar6 * 2) = uVar15;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      unaff_lr = 0x2c1188b3;
      uVar15 = func_0x2ca34ab8(*(undefined2 *)((int)piVar14 + 0x36));
      in_d0 = CONCAT44(extraout_s1,uVar15);
      coprocessor_movefromRt(0xc,6,0,in_cr8,in_cr5);
      iVar8 = extraout_r1 >> 8;
      coprocessor_function2(3,0xc,7,in_cr3,in_cr8,in_cr1);
      param_1 = (uint *)(uVar12 + iVar8);
      uVar7 = (uint)*(byte *)(uVar12 + iVar8 + 0x1b);
      *(short *)(uVar7 + 8) = sVar3;
      piVar14 = (int *)(extraout_r3 << 0xd);
      piVar10 = (int *)&stack0x00000290;
      iVar6 = _DAT_2c118a94;
      param_3 = extraout_r2;
      if (SCARRY4(uVar12,iVar8)) goto LAB_2c1188ea;
      *(int **)(_DAT_2c118a94 + 0x5c) = piVar14;
      uVar9 = _NMI;
      puVar5 = _MasterStackPointer;
      bVar13 = false;
      param_3 = in_stack_000000ec;
      if (in_stack_000000ec != 0) goto LAB_2c11891e;
      piVar14 = (int *)((int)param_1 * 0x1000000 >> 7);
      bVar13 = false;
      *piVar14 = (int)param_1 * 0x1000000;
      piVar14[1] = 0;
      piVar14[2] = -0x4f69f2c9;
      piVar14 = piVar14 + 3;
      piVar10 = piVar14;
    }
    *(int **)(unaff_r5 + 0x3c) = piVar10;
    *puVar5 = uVar9;
    puVar5[1] = uVar12;
    if (puVar5 != (uint *)0xfffffff8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar11 = (undefined4 *)(uVar12 * 0x10);
    if (((int)puVar11 >> 0x16 & 1U) != 0 && (int)puVar11 >> 0x17 != 0) {
      *puVar11 = 0;
      puVar11[1] = param_3;
      puVar11[2] = 0;
      puVar11[3] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (-1 < (int)puVar11 >> 0x17) {
      coprocessor_load(5,in_cr8,unaff_r9 + -0x3f8);
      *(undefined4 *)(in_stack_00000038 + 4) = 0;
      halt_baddata();
    }
    puVar11[7] = param_3;
    *(undefined2 *)((int)piVar14 + 10) = 0;
    piVar14 = (int *)(uint)*(byte *)((int)piVar14 + 0x1f);
    param_1 = (uint *)0x0;
    iVar6 = iRam2c118a4c;
    if (!bVar13) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while( true );
}

