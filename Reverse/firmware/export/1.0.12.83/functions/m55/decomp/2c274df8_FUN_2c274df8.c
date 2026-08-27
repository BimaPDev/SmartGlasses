/* FUN_2c274df8 @ 0x2c274df8 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c274e0e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c274df8(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 extraout_r1;
  int extraout_r2;
  uint *extraout_r3;
  int extraout_r3_00;
  int unaff_r5;
  int unaff_r6;
  undefined4 unaff_r7;
  uint uVar5;
  uint unaff_lr;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 in_cr0;
  undefined4 in_cr4;
  undefined4 in_cr13;
  undefined4 in_cr15;
  undefined8 in_d0;
  
  puVar4 = (undefined4 *)(unaff_r6 * 8);
  *puVar4 = 0;
  puVar4[1] = puVar4;
  puVar4[2] = param_3;
  puVar4[3] = param_4;
  puVar4[4] = unaff_r7;
  uVar5 = *(uint *)(unaff_r6 * 0x80 + param_4);
  VectorShiftRight(in_d0,0x21);
  coprocessor_function2(0,0xc,5,in_cr0,in_cr15,in_cr4);
  puVar4 = (undefined4 *)0x3f8;
  puVar1 = (undefined4 *)0x400;
  puVar2 = (undefined4 *)0x408;
  puVar3 = (undefined4 *)0x410;
  lVar7 = 2;
  puVar6 = param_3;
  while( true ) {
    *puVar6 = *puVar4;
    puVar6[1] = *puVar1;
    puVar6[2] = *puVar2;
    puVar6[3] = *puVar3;
    puVar6 = puVar6 + 4;
    lVar7 = lVar7 + -1;
    if (lVar7 == 0) break;
    puVar4 = puVar4 + 1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (0xd0 < uVar5) {
    coprocessor_load(0,in_cr13,(int)param_3 + unaff_lr + -0x48);
    if ((int)(uVar5 - 0xd0) < 0) {
      VectorShiftRight(in_d0,0x16);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _MasterStackPointer = uVar5 << 3;
  _Reset = (int)param_3 + unaff_lr;
  _NMI = param_4;
  _HardFault = unaff_r6 * 0x800000;
  _MemManage = unaff_r5 << (uVar5 << 3 & 0xff);
  func_0x2cc782b0(0x14);
  extraout_r3[1] = uVar5;
  *extraout_r3 = uVar5;
  func_0x2bd766c8((unaff_lr >> 0xc) << 3,extraout_r1,uVar5 << 4);
                    /* WARNING: Could not recover jumptable at 0x2c2754ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(extraout_r3_00 << 2))(extraout_r2 << 1);
  return;
}

