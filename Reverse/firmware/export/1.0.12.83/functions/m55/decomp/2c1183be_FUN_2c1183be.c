/* FUN_2c1183be @ 0x2c1183be */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c1183be(undefined4 param_1,int param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  short sVar3;
  bool bVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  int extraout_r1;
  uint extraout_r2;
  int *piVar8;
  int extraout_r3;
  uint unaff_r4;
  uint uVar9;
  int unaff_r5;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint unaff_r7;
  int iVar13;
  int unaff_r9;
  uint unaff_lr;
  bool bVar14;
  undefined4 in_cr1;
  undefined4 in_cr3;
  undefined4 in_cr5;
  undefined4 in_cr8;
  undefined8 in_d0;
  undefined4 extraout_s1;
  int in_stack_00000030;
  uint in_stack_000000e4;
  
  puVar5 = (uint *)0xed;
  piVar8 = (int *)0x2c1184ac;
  *(int *)(unaff_r7 + unaff_r4) = param_2;
LAB_2c1188ea:
  bVar4 = (param_3 & 0x2000) != 0;
  piVar11 = (int *)(param_3 << 0x13);
  uVar9 = (uint)bVar4;
  uVar1 = unaff_lr + 0xe1e1e1e1;
  bVar2 = 0x1e1e1e1e < unaff_lr;
  bVar14 = SCARRY4(unaff_lr,-0x1e1e1e1f) != SCARRY4(uVar1,uVar9);
  unaff_lr = unaff_lr + 0xe1e1e1e1 + (uint)bVar4;
  if ((bVar2 || CARRY4(uVar1,uVar9)) && unaff_lr != 0) {
    param_3 = param_3 + 0x6a;
    goto LAB_2c1188a2;
  }
  *(int *)param_2 = param_2;
  *(uint *)(param_2 + 4) = param_3;
  *(int **)(param_2 + 8) = piVar8;
  *(uint *)(param_2 + 0xc) = unaff_r4;
  *(int *)(param_2 + 0x10) = unaff_r5;
  *(char *)(puVar5 + 6) = (char)param_3;
  do {
    uVar9 = unaff_r4;
    puVar7 = puVar5;
    if (((uint)piVar11 >> 8 & 1) == 0 || (uint)piVar11 >> 9 == 0) {
      *(short *)(unaff_r7 + 0xc) = (short)piVar11;
      puVar12 = (undefined4 *)piVar8[3];
      uVar6 = *puVar12;
      iVar10 = puVar12[4];
      iVar13 = puVar12[5];
      piVar8 = (int *)(piVar8[1] >> 0x1f);
      *piVar8 = iVar10;
      piVar8[1] = (int)(puVar12 + 6);
      piVar8[2] = iVar13;
      *(undefined4 *)(iVar10 * 2) = uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    while( true ) {
      *(int **)(unaff_r5 + 0x3c) = piVar11;
      *puVar7 = uVar9;
      puVar7[1] = unaff_r7;
      if (puVar7 != (uint *)0xfffffff8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar12 = (undefined4 *)(unaff_r7 * 0x10);
      if (((int)puVar12 >> 0x16 & 1U) != 0 && (int)puVar12 >> 0x17 != 0) {
        *puVar12 = 0;
        puVar12[1] = param_3;
        puVar12[2] = 0;
        puVar12[3] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (-1 < (int)puVar12 >> 0x17) {
        coprocessor_load(5,in_cr8,unaff_r9 + -0x3f8);
        *(undefined4 *)(in_stack_00000030 + 4) = 0;
        halt_baddata();
      }
      puVar12[7] = param_3;
      *(undefined2 *)((int)piVar8 + 10) = 0;
      piVar8 = (int *)(uint)*(byte *)((int)piVar8 + 0x1f);
      puVar5 = (uint *)0x0;
      param_2 = iRam2c118a4c;
      if (!bVar14) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
LAB_2c1188a2:
      unaff_r4 = unaff_r5 << 1;
      sVar3 = *(short *)(unaff_r7 + param_3);
      unaff_r5 = (int)sVar3;
      if (param_2 == 0) {
        in_d0 = VectorFloatToSignedRound(in_d0,0,4);
        puVar5 = (uint *)((int)puVar5 >> 0x18);
        goto LAB_2c1188ea;
      }
      unaff_lr = 0x2c1188b3;
      uVar6 = func_0x2ca34ab8(*(undefined2 *)((int)piVar8 + 0x36));
      in_d0 = CONCAT44(extraout_s1,uVar6);
      coprocessor_movefromRt(0xc,6,0,in_cr8,in_cr5);
      iVar10 = extraout_r1 >> 8;
      coprocessor_function2(3,0xc,7,in_cr3,in_cr8,in_cr1);
      puVar5 = (uint *)(unaff_r7 + iVar10);
      unaff_r4 = (uint)*(byte *)(unaff_r7 + iVar10 + 0x1b);
      *(short *)(unaff_r4 + 8) = sVar3;
      piVar8 = (int *)(extraout_r3 << 0xd);
      piVar11 = (int *)&stack0x00000288;
      param_2 = _DAT_2c118a94;
      param_3 = extraout_r2;
      if (SCARRY4(unaff_r7,iVar10)) goto LAB_2c1188ea;
      *(int **)(_DAT_2c118a94 + 0x5c) = piVar8;
      uVar9 = _NMI;
      puVar7 = _MasterStackPointer;
      bVar14 = false;
      param_3 = in_stack_000000e4;
      if (in_stack_000000e4 != 0) break;
      piVar8 = (int *)((int)puVar5 * 0x1000000 >> 7);
      bVar14 = false;
      *piVar8 = (int)puVar5 * 0x1000000;
      piVar8[1] = 0;
      piVar8[2] = -0x4f69f2c9;
      piVar8 = piVar8 + 3;
      piVar11 = piVar8;
    }
  } while( true );
}

