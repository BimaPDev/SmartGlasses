/* FUN_2c074c8a @ 0x2c074c8a */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c074d6a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c074c8a(uint param_1,undefined4 *param_2,undefined4 param_3)

{
  code *pcVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint unaff_r5;
  char cVar10;
  uint unaff_r6;
  uint uVar11;
  undefined4 *puVar12;
  int unaff_r10;
  int in_r12;
  int iVar13;
  undefined4 unaff_lr;
  uint *puVar14;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr11;
  undefined4 in_cr14;
  undefined4 in_cr15;
  undefined8 uVar15;
  undefined8 in_d4;
  undefined8 unaff_d14;
  
  while( true ) {
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(uint *)((int)register0x00000054 + -8) = unaff_r6;
    *(uint *)((int)register0x00000054 + -0xc) = unaff_r5;
    *(undefined4 *)((int)register0x00000054 + -0x10) = param_3;
    puVar14 = (uint *)((int)register0x00000054 + -0x14);
    *puVar14 = param_1;
    puVar5 = (uint *)(param_1 * 2);
    cVar10 = (char)*(undefined4 *)((int)register0x00000054 + 0x78);
    param_2[3] = puVar5;
    if ((int)puVar5 >> 0x10 == 0) {
      coprocessor_load(0,in_cr15,param_1 * 0x2000000 + -0xf4);
      coprocessor_store(2,in_cr0,0xfffffed2);
                    /* WARNING: Could not recover jumptable at 0x2c074cb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar5[1] - 4))(puVar5 + 2,param_2,*puVar5,param_1 << 0xe);
      return;
    }
    uVar4 = *puVar5;
    uVar7 = puVar5[1];
    puVar8 = (undefined4 *)puVar5[2];
    puVar6 = (undefined4 *)((int)param_2 + 0xfe);
    uVar11 = uVar4 * 0x800;
    if (((uVar4 & 0x200000) != 0 && uVar11 != 0) ||
       (cVar10 = (char)((int)uVar11 >> 0x1e), (undefined4 *)0xb7 < puVar8)) break;
    coprocessor_load(7,in_cr8,unaff_r5 * -0x80000000 + -0xf8);
    if (uVar11 < 0x98) {
      *(short *)(uVar4 + 0x10) = (short)uVar4;
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0,0x2c074c52);
      (*pcVar1)();
    }
    if (SBORROW4(uVar11,0x97)) {
      *(uint **)((int)register0x00000054 + 0x98) = puVar14;
      *(uint *)(uVar7 + 0xc) = uVar4;
      iVar3 = 0xc6;
      *puVar6 = 0xc6;
      *(uint *)((int)param_2 + 0x102) = uVar11;
      puVar6 = (undefined4 *)((int)param_2 + 0x106);
    }
    else {
      if (unaff_r5 < 0xf8) {
        *(short *)(((int)puVar5 >> 0x10) + unaff_r5) = (short)unaff_r5;
        iVar9 = *(int *)(*(int *)(in_r12 + -0x134) + -0x170);
        *(undefined1 *)((int)param_2 + 0x13b) = 0;
        coprocessor_load(3,in_cr3,puVar14);
        coprocessor_movefromRt(3,1,in_cr14);
        iVar13 = coprocessor_movefromRt2(3,1,in_cr14);
        iVar3 = iVar9 + -0xf8;
        *(int *)iVar3 = iVar3;
        *(undefined4 *)(iVar9 + -0xf4) = unaff_lr;
        coprocessor_load(5,in_cr11,iVar13 + 0x3f8);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar3 = ((int)puVar8 + -3) * 0x80;
      puVar14 = (uint *)coprocessor_movefromRt(7,5,4,in_cr7,in_cr2);
      *(undefined4 *)((int)puVar6 + ((int)puVar8 >> 0x18)) = _DAT_2c074ff4;
    }
    *(int *)(iVar3 * 2) = iVar3;
    unaff_r6 = uRam00000033 >> 0x19;
    param_1 = uRam00000033;
    param_2 = puVar6;
    param_3 = _DAT_2c074d54;
    register0x00000054 = (BADSPACEBASE *)puVar14;
  }
  puVar5 = *(uint **)((int)register0x00000054 + 0x2ac);
  uVar2 = *(ushort *)(puVar8 + 10);
  *(uint *)((int)register0x00000054 + 0x74) = uVar4;
  if (uVar7 == 0x23) {
    *(char *)((int)param_2 + 0x112) = cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar12 = (undefined4 *)((int)puVar8 - (int)puVar6);
  *puVar12 = puVar6;
  puVar12[1] = (uint)uVar2;
  puVar12[2] = uVar7;
  puVar12[3] = puVar5;
  uVar7 = _DAT_2c074eac;
  uVar4 = uRam00000033;
  if (puVar6 <= puVar8) {
    *(short *)(*puVar5 + 8) = (short)puVar5[2];
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar15 = VectorHalvingAdd(unaff_d14,in_d4,1,1);
  *puVar5 = uRam00000033;
  puVar5[1] = uVar7;
  puVar5[2] = (uint)puVar5;
  puVar8 = (undefined4 *)(uVar4 * 2);
  *(undefined4 **)((int)param_2 + 0x10a) = puVar8;
  if ((int)puVar8 >> 0x10 == 0) {
    coprocessor_load(0xc,in_cr0,uVar4 * 0x2000000 + -0x238);
    coprocessor_store(2,in_cr0,0xfffffed3);
                    /* WARNING: Could not recover jumptable at 0x2c074e0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(puVar8[1] + -4))((int)uVar15,puVar8 + 2,puVar6,*puVar8,uVar4 << 0xe);
    return;
  }
  *(undefined4 **)((int)register0x00000054 + -0xc) = puVar8;
  if (((int)puVar8 >> 0xf & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not recover jumptable at 0x2c074e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(unaff_r10 + 0x2c074e44))();
  return;
}

