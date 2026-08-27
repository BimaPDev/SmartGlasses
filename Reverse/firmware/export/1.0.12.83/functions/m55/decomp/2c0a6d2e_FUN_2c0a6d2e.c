/* FUN_2c0a6d2e @ 0x2c0a6d2e */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c0a6d2e(undefined4 param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined4 extraout_r1;
  int *extraout_r1_00;
  int extraout_r2;
  undefined4 *puVar3;
  int *extraout_r2_00;
  undefined4 *puVar4;
  undefined2 uVar5;
  int *piVar6;
  char cVar7;
  uint unaff_r4;
  uint uVar8;
  int iVar9;
  undefined1 *unaff_r5;
  uint unaff_r6;
  int iVar10;
  int iVar11;
  int unaff_r8;
  undefined4 unaff_r10;
  int in_r12;
  undefined4 *puVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  uint *puVar16;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr6;
  undefined4 in_cr8;
  undefined4 in_cr10;
  undefined4 in_cr13;
  undefined4 in_cr15;
  undefined4 extraout_s4;
  undefined1 extraout_var [12];
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined1 auVar17 [16];
  
  bVar15 = SBORROW4((int)_DAT_2c0a6e04,0x12);
  iVar10 = 0x44;
  bVar13 = (unaff_r6 >> 0x1d & 1) != 0;
  uVar2 = param_2 + 0x41;
  uStack_18 = param_1;
  iStack_14 = param_2;
  uStack_10 = param_3;
  if (unaff_r6 >> 0x1e != 0) {
    uVar8 = unaff_r4;
    if (_DAT_2c0a6e04 == (undefined1 *)0x0) {
      uVar8 = unaff_r4 + 0x3a;
      func_0x2c8c431c(uVar2 * 0x200,0x4400);
      auVar17._4_12_ = extraout_var;
      auVar17._0_4_ = extraout_s4;
      software_bkpt(0xf4);
      *(undefined4 *)(extraout_r2 + 0x70) = extraout_r1;
      *(undefined4 *)(unaff_r6 + 0x6c) = extraout_r1;
      uRam000000a8 = uVar8;
      *(short *)(unaff_r6 + 8) = (short)unaff_r6;
      iVar10 = _DAT_2c0a7154;
      uRam000000a4 = 0x94;
      VectorPairwiseAddAccumulateLong(auVar17,4);
      coprocessor_moveto(6,7,7,uVar8,in_cr0,in_cr6);
      *(char *)(unaff_r4 + 0x57) = (char)extraout_r1;
    }
    coprocessor_moveto(0,7,7,*(undefined4 *)(uVar8 + iVar10),in_cr0,in_cr0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  software_interrupt(0xd8);
  puVar4 = (undefined4 *)(uint)uRam00000016;
  uVar8 = (uint)*(ushort *)((int)puVar4 + 0x3e);
  uVar5 = 0;
  puVar12 = (undefined4 *)_DAT_2c0a6e04;
  puVar3 = &uStack_18;
  if (!bVar15) goto LAB_2c0c46de;
  if (bVar13) {
    return param_1;
  }
  puVar3 = (undefined4 *)&stack0x00000254;
  piVar6 = (int *)0x0;
  bVar14 = true;
  puVar12 = &uStack_18;
  if (bVar15) goto LAB_2c0c4728;
LAB_2c0c476e:
  uVar2 = puVar3[1];
  piVar6 = (int *)puVar3[2];
  iVar9 = puVar3[3];
  iVar10 = puVar3[5];
  puVar4 = puVar3 + 6;
  uVar1 = *(ushort *)((int)piVar6 + 0xe);
  software_hlt(0x28);
  if (puVar3[4] != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(uVar2 + 0x12) = (char)piVar6;
  uVar8 = 0;
  puVar3 = puVar12;
  if (bVar15) goto LAB_2c0c46f0;
  uVar2 = (uint)*(ushort *)(iVar10 + 0x14);
  *(int *)(iVar9 + 0x44) = iVar9;
  *(undefined4 *)(uVar1 + 0x48) = 0;
  bVar14 = false;
  while( true ) {
    puVar16 = (uint *)(piVar6 + 1);
    if (!bVar15) break;
    iVar10 = 0x2c0c4a30;
    puVar4 = (undefined4 *)(uint)*(ushort *)(*piVar6 + 4);
    if (!bVar15) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar15) {
      coprocessor_movefromRt(0xe,7,7,in_cr15,in_cr13);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar13 = (uVar2 >> 0xb & 1) != 0;
    unaff_r4 = uVar2 >> 0xc;
    uVar5 = *(undefined2 *)(uVar8 + 0x14);
    unaff_r5 = (undefined1 *)puVar12;
    puVar3 = puVar12;
LAB_2c0c46de:
    puVar3[0x8c] = unaff_r4;
    puVar3[0x97] = unaff_r5;
    puVar3[0x99] = iVar10;
    *(char *)(unaff_r4 + 0x12) = (char)uVar5;
    *(undefined2 *)((int)puVar12 + uVar2) = uVar5;
    piVar6 = (int *)(uint)*(byte *)((int)puVar12 + iVar10);
    *(undefined4 **)(uVar2 + 0x44) = puVar12;
    uVar2 = (uint)*(byte *)((int)piVar6 + uVar2);
LAB_2c0c46f0:
    puVar4[0xc] = puVar4;
    uRam00000084 = 0x22;
    cVar7 = 'E';
    *(undefined4 *)(uVar8 + 100) = 0x45;
    puVar12 = (undefined4 *)((int)puVar3 + 0x110);
    uVar8 = uVar8 + unaff_r8 + in_r12;
    bVar14 = false;
    *(char *)((int)puVar4 + (int)unaff_r5) = (char)uVar2;
    *(undefined1 *)((int)puVar4 + uVar2) = 0x45;
    uRam00000055 = 0x45;
    puVar4 = *(undefined4 **)((int)puVar3 + 0x344);
    puVar3 = (undefined4 *)((int)puVar3 + 0x33c);
    while (cVar7 == '\0') {
      if (bVar13 && !bVar14) goto LAB_2c0c469a;
LAB_2c0c4728:
      *(short *)(uVar2 + 0x24) = (short)uVar2;
      puVar4 = puVar12 + 0xf9;
      uVar2 = (uint)*(ushort *)(iVar10 + 0x1c);
      *(undefined4 **)(unaff_r5 + 100) = puVar4;
      cVar7 = (char)puVar4;
      if (puVar3 != (undefined4 *)0x0) goto LAB_2c0c476e;
      puVar3 = puVar12 + 0xb9;
      if (!bVar13 || bVar14) {
        if (piVar6 != (int *)0x0) {
          coprocessor_movefromRt(0,7,7,in_cr15,in_cr10);
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  piVar6 = *(int **)((int)puVar12 + 0x2dc);
  if (bVar13 && !bVar14) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar4 = (undefined4 *)((uint)piVar6 >> 0x11);
  uVar2 = *puVar16 >> 0x12;
  puVar3 = (undefined4 *)((uint)piVar6 >> 5);
LAB_2c0c469a:
  *(short *)(puVar3 + 3) = (short)((uint)puVar3 & 0xff);
  *(uint *)(((uint)puVar4 >> 2) + 4) = (uint)puVar3 & 0xff;
  *(short *)((int)puVar3 + uVar2) = (short)((uint)puVar4 >> 2);
  func_0x2bec40a8((undefined1 *)((int)puVar4 - 0x39U),(undefined1 *)((int)puVar4 - 0x39U),
                  (uVar2 + 0x33) * 0x1000,(int)piVar6 - 0x3d);
  iVar10 = extraout_r2_00[1];
  iVar9 = extraout_r2_00[4];
  coprocessor_loadlong(1,in_cr1,unaff_r10);
  *(int *)(*extraout_r2_00 + extraout_r2_00[3]) = iVar9;
  uVar2 = (uint)*(ushort *)(iVar9 + 2);
  iVar9 = extraout_r1_00[3];
  iVar11 = extraout_r1_00[4];
  coprocessor_loadlong(0xc,in_cr1,(undefined1 *)((int)puVar12 + 0x3c));
  *(int *)(*extraout_r1_00 + 0x14) = iVar11;
  *(short *)(uVar2 - 0x25) = (short)iVar10;
  *(int *)((int)puVar12 + -4) = iVar11;
  *(int *)((int)puVar12 + -8) = iVar9;
  *(int *)((int)puVar12 + -0xc) = *(int *)((int)puVar12 + 0x238);
  if (uVar2 == 0x2f) {
    *(short *)(iVar11 + 0x3a) = (short)*(undefined4 *)(*(int *)((int)puVar12 + 0x238) + 0x14);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_function(0xe,0xd,0,in_cr0,in_cr15,in_cr8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

