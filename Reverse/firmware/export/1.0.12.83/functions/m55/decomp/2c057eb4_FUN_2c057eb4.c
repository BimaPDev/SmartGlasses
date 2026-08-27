/* FUN_2c057eb4 @ 0x2c057eb4 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c05719e) */
/* WARNING: Removing unreachable block (ram,0x2c057192) */
/* WARNING: Removing unreachable block (ram,0x2c05719c) */
/* WARNING: Removing unreachable block (ram,0x2c0571a2) */
/* WARNING: Removing unreachable block (ram,0x2c056e6a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c057eb4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  short sVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint extraout_r1;
  int extraout_r3;
  int unaff_r5;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined4 unaff_r8;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr6;
  undefined4 in_cr9;
  undefined4 in_cr14;
  undefined4 extraout_s0;
  undefined1 extraout_var [12];
  undefined8 extraout_d4;
  undefined8 unaff_d12;
  undefined8 unaff_d14;
  undefined1 in_q8 [16];
  undefined1 in_q11 [16];
  undefined8 in_d31;
  undefined1 auStack_2d4 [696];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 *puStack_14;
  undefined1 auVar10 [16];
  
  uStack_1c = param_2;
  uStack_18 = param_3;
  puStack_14 = param_4;
  func_0x2c6d90b8(param_1,param_2,*param_4,param_4[1]);
  iVar7 = extraout_r1 * 0x100;
  iVar4 = func_0x2cbdaf08(extraout_r1);
  uVar3 = uRam0000003e;
  auVar10._4_12_ = extraout_var;
  auVar10._0_4_ = extraout_s0;
  puVar8 = (uint *)(uint)*(byte *)(iVar4 + 0x1f);
  uVar2 = (undefined2)uRam0000003e;
  if (0x32 < uRam0000003e) {
    coprocessor_store(0,in_cr14,iVar7 >> 3);
    uVar3 = *puVar8;
    uVar5 = puVar8[2];
    puVar9 = (undefined4 *)puVar8[3];
    VectorMultiply(in_d31,extraout_var._4_8_,1,1);
    *(undefined2 *)(puVar8[1] + 2) = uVar2;
    if (iVar7 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    UnsignedSaturate((uVar5 & 0xffff) + (uVar3 >> 0x10),0x10);
    UnsignedSaturate((uVar5 >> 0x10) - (uVar3 & 0xffff),0x10);
    if ((int)(uVar5 - 0xc1) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)((int)puVar9 >> 3) = (char)(uVar5 - 0xc1);
    *puVar9 = 0;
    puVar9[1] = puVar9;
    *(undefined1 *)((int)puVar9 + (uVar3 - 0x7f)) = 0;
    *(int *)(iRam00000012 + 0xc) = (int)uVar3 >> 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  VectorShiftRightAccumulate(auVar10._0_8_,extraout_d4,0x1f);
  *(short *)(puVar8 + 2) = (short)iVar7;
  VectorSub(in_q11,in_q8,2);
  *(short *)(iVar4 + 0x30) = (short)iVar4;
  VectorSub(unaff_d14,unaff_d12,1,1);
  *(int *)(iVar7 + 0x10) = iVar7;
  sVar1 = *(short *)(iVar7 + 0x46 + extraout_r3);
  if (iVar7 + 0x46 != 0) {
    puVar6 = (uint *)((extraout_r1 & 0xffffff) * 4);
    *puVar6 = uVar3;
    puVar6[1] = (uint)puVar8;
    *(undefined2 *)(iVar7 + 10) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(extraout_r3 * 2) = sVar1;
                    /* WARNING: Ignoring partial resolution of indirect */
  DAT_00000006_3 = 0;
  coprocessor_load(5,in_cr9,auStack_2d4);
  coprocessor_store(8,in_cr6,iVar7 + -0x194);
  software_bkpt(0xe0);
  uVar3 = *(uint *)(*(short *)(sVar1 * 2) + 0x40);
  coprocessor_loadlong(2,in_cr3,unaff_r8);
  if ((uVar3 >> 3 & 1) == 0 || uVar3 >> 4 == 0) {
    coprocessor_loadlong(2,in_cr2,(unaff_r5 + 1) * 2);
    _DAT_00000006 = _DAT_00000006;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_00000006 = _DAT_00000006;
  return uVar3;
}

