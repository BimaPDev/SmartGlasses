/* FUN_2c082c08 @ 0x2c082c08 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c083e8a) */
/* WARNING: Removing unreachable block (ram,0x2c083d92) */
/* WARNING: Removing unreachable block (ram,0x2c083db4) */
/* WARNING: Removing unreachable block (ram,0x2c083dd4) */
/* WARNING: Removing unreachable block (ram,0x2c083dda) */
/* WARNING: Removing unreachable block (ram,0x2c083de6) */
/* WARNING: Removing unreachable block (ram,0x2c083de8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c082c08(undefined2 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int unaff_r4;
  int iVar8;
  uint uVar9;
  int unaff_r5;
  uint uVar10;
  uint uVar11;
  int unaff_r7;
  undefined4 unaff_r11;
  int in_r12;
  undefined4 unaff_lr;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined4 in_cr6;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined8 unaff_d14;
  undefined1 in_q15 [16];
  uint in_stack_00000020;
  uint in_stack_00000240;
  ushort in_stack_0000037a;
  
  _NMI = unaff_r5 + 0x3e;
  *(undefined2 *)(unaff_r5 + 0x4c) = param_1;
  _MasterStackPointer = 0x41;
  _Reset = param_4;
  _HardFault = &stack0x000002e4;
  _MemManage = unaff_r7 + -0xff;
  *(undefined2 *)(*(byte *)(unaff_r4 + 1) + 0x10) = 0x41;
  *(short *)(param_4 + unaff_r4) = (short)&stack0x000002e4;
  uVar1 = uRam0000002a;
  iVar8 = (uint)uRam0000002a + (unaff_r7 + -0xff) * -0x80;
  *(undefined1 *)(iVar8 + 8) = 0x14;
  *(ushort *)((iVar8 >> 0x20) + 0x121) = uVar1;
  iVar8 = ((uint)&stack0x000002e4 >> 6) * 0x800;
  coprocessor_loadlong(6,in_cr6,unaff_r11);
  coprocessor_load(4,in_cr6,in_r12 + 0x33c);
  do {
    uVar5 = (iVar8 + -0x242000) * 0x400;
    software_bkpt(0xab);
    uVar6 = uVar5 - 0xe8;
  } while (0xe7 < uVar5);
  uVar11 = in_stack_00000020 & 0xff;
  iVar3 = 0x2c083830 << uVar11;
  if (uVar11 == 0 || (0x2c083830 << uVar11 - 1 & 0x80000000U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar9 = (uint)*(byte *)(uVar6 * 2);
  uVar10 = (uint)*(byte *)(*(short *)(in_stack_00000240 + in_stack_00000020) + 0xf8);
  coprocessor_moveto(8,7,6,in_stack_00000240,in_cr1,in_cr1);
  uVar2 = *(uint *)(iVar3 + uVar9);
  *(short *)(uVar5 - 0xb6) = (short)iVar3;
  VectorAdd(in_q15,unaff_d14,1,1);
  uVar2 = uVar2 >> 6;
  uVar11 = _DAT_2c083e78;
  if (uVar2 == 0) {
    *(char *)(uVar5 - 0xe5) = (char)iVar3;
    puVar4 = (uint *)(iVar8 + -0x242000 >> 0x18);
    iRam00000d60 = iVar3;
    *puVar4 = (uint)bRam00000d01;
    puVar4[1] = uVar10;
    puVar4[2] = in_stack_00000240;
    iVar3 = (int)(puVar4 + 3) + uVar9;
    uVar2 = (uint)*(ushort *)(iVar8 + -0x241fca);
    uVar6 = (uint)*(byte *)(iVar3 * 2);
    if (iVar3 * 0x40 == 0) {
      uVar5 = *(uint *)(iVar8 + -0x241fc0);
      uVar6 = uVar5 >> 0x14;
      if ((uVar5 >> 0x13 & 1) == 0 || uVar6 == 0) {
        *(uint *)(uVar10 + 0x18) = uVar6;
        *(uint *)(in_stack_00000240 + uVar5 * 0x20000) = uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      coprocessor_function2(0xb,0xd,5,in_cr2,in_cr8,in_cr1);
      *(uint *)(iRam2c084108 + 0x40) = (uint)(*(ushort *)(iVar8 + -0x241fca) >> 7);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar11 = uVar10;
    if (iVar3 * 0x40 < 0 != SCARRY4((int)(puVar4 + 3),uVar9)) {
      coprocessor_moveto(1,7,5,unaff_lr,in_cr9,in_cr11);
      *(char *)(iVar8 + -0x241ffd) = (char)in_stack_0000037a;
      *(short *)(uVar9 + 2) = (short)&stack0xffffffdc + 0x39c;
      uVar7 = *(undefined4 *)(uVar9 + 4);
      iVar8 = *(int *)(uVar9 + 8);
      *(undefined4 *)(in_stack_0000037a + 0x18) = uVar7;
      coprocessor_function2(1,0,2,in_cr10,in_cr4,in_cr0);
      *(short *)(iVar8 + 4) = (short)uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(int *)iVar3 = iVar3;
  *(uint *)(iVar3 + 4) = uVar6;
  *(uint *)(iVar3 + 8) = uVar9;
  *(uint *)(iVar3 + 0xc) = uVar11;
  coprocessor_moveto(1,0,4,uVar2,in_cr2,in_cr2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

