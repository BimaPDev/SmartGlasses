/* FUN_2c0f74f4 @ 0x2c0f74f4 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x2c0f6d88) overlaps instruction at (ram,0x2c0f6d86)
    */
/* WARNING: Removing unreachable block (ram,0x2c0f71b0) */
/* WARNING: Removing unreachable block (ram,0x2c0f7218) */
/* WARNING: Removing unreachable block (ram,0x2c0f71b6) */
/* WARNING: Removing unreachable block (ram,0x2c0f6d64) */
/* WARNING: Removing unreachable block (ram,0x2c0f6d6a) */
/* WARNING: Removing unreachable block (ram,0x2c0f6d88) */
/* WARNING: Removing unreachable block (ram,0x2c0f6d86) */
/* WARNING: Removing unreachable block (ram,0x2c0f6d9a) */
/* WARNING: Removing unreachable block (ram,0x2c0f6e0c) */
/* WARNING: Removing unreachable block (ram,0x2c0f6a50) */
/* WARNING: Removing unreachable block (ram,0x2c0f720c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0f74f4(uint param_1,int param_2,undefined4 param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int extraout_r3;
  uint unaff_r4;
  int iVar5;
  int unaff_r6;
  int unaff_r7;
  int *piVar6;
  undefined4 in_cr3;
  undefined4 in_cr7;
  undefined4 in_cr10;
  undefined8 extraout_d6;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 in_d29;
  undefined4 in_stack_000000e4;
  int iStack_14;
  undefined4 uStack_10;
  uint *puStack_c;
  
  uVar3 = unaff_r7 >> 0xc;
  coprocessor_load(5,in_cr7,unaff_r6 + 0x1b8);
  iVar5 = param_1 + uVar3;
  if (!CARRY4(param_1,uVar3) || iVar5 == 0) {
    *(uint *)(param_2 + 0x48) = unaff_r4;
    *(uint *)(unaff_r6 + 0x8a) = uVar3;
    *(uint *)(unaff_r6 + 0x8a) = uVar3;
    *(short *)((int)param_4 + (param_1 - 0x3a)) = (short)(param_1 - 0x3a);
    uVar1 = _DAT_2c0f7530;
    *(char *)(param_1 + 0x14) = (char)unaff_r6 + ':';
    *(undefined2 *)(uVar1 + 0x24) = 0;
    if (iVar5 != 0) {
      iStack_14 = param_2;
      uStack_10 = param_3;
      puStack_c = param_4;
      iVar2 = func_0x2c30aef2(uVar1,uVar1 >> 8,in_stack_000000e4);
      iVar2 = iVar2 >> 0x11;
      coprocessor_loadlong(0xf,in_cr3,iVar5 + uVar1 + -0x100);
      *(undefined2 *)(extraout_r3 + 6) = 0x97;
      *(short *)(iVar2 + 0x16) = (short)extraout_r3;
      iVar5 = 0xc0000;
      piVar6 = &iStack_14;
      do {
        VectorMultiplySubtractLong(extraout_d6,in_d29,1,1);
        coprocessor_loadlong(5,in_cr10,piVar6 + 5);
        VectorMultiplySubtractLong(unaff_d10,in_d29,1,1);
        software_bkpt(0xe0);
        do {
        } while (SBORROW4(iVar5,iVar2));
        VectorMultiplySubtractLong(unaff_d9,in_d29,1,1);
        VectorMultiplySubtractLong(unaff_d10,in_d29,2,1);
        iVar2 = 0x18600;
        piVar4 = piVar6 + 0xb03df78;
        iVar5 = (int)piVar4 * 0x10000;
        piVar6 = piVar6 + 5;
      } while (((uint)piVar4 & 0x10000) != 0 && iVar5 != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(short *)param_4 = (short)((int)(uVar3 << 0x18) >> 0xc);
    *(char *)(uVar3 + 2) = (char)uVar1 + '\b';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)(unaff_r4 * 5) = unaff_r4;
  ((uint *)(unaff_r4 * 5))[1] = 0x21;
  *param_4 = unaff_r4;
  param_4[1] = 0x21;
  *(uint *)unaff_r4 = unaff_r4;
  *(undefined4 *)(unaff_r4 + 4) = 0x21;
  uRam00000021 = unaff_r4;
  uRam00000025 = 0x21;
  if (unaff_r4 < 0x21) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

