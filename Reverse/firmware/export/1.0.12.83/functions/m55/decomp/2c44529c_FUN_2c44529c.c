/* FUN_2c44529c @ 0x2c44529c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x2c4451aa) overlaps instruction at (ram,0x2c4451a8)
    */
/* WARNING: Removing unreachable block (ram,0x2c445344) */
/* WARNING: Removing unreachable block (ram,0x2c44535e) */
/* WARNING: Removing unreachable block (ram,0x2c4453f8) */
/* WARNING: Removing unreachable block (ram,0x2c4453fa) */
/* WARNING: Removing unreachable block (ram,0x2c445474) */
/* WARNING: Removing unreachable block (ram,0x2c445490) */
/* WARNING: Removing unreachable block (ram,0x2c445520) */
/* WARNING: Removing unreachable block (ram,0x2c445544) */
/* WARNING: Removing unreachable block (ram,0x2c445546) */
/* WARNING: Removing unreachable block (ram,0x2c445568) */
/* WARNING: Removing unreachable block (ram,0x2c445b90) */
/* WARNING: Removing unreachable block (ram,0x2c445ba6) */
/* WARNING: Removing unreachable block (ram,0x2c445bba) */
/* WARNING: Removing unreachable block (ram,0x2c445b92) */
/* WARNING: Removing unreachable block (ram,0x2c445b96) */
/* WARNING: Removing unreachable block (ram,0x2c445b60) */
/* WARNING: Removing unreachable block (ram,0x2c445498) */
/* WARNING: Removing unreachable block (ram,0x2c4454fc) */
/* WARNING: Removing unreachable block (ram,0x2c44549c) */
/* WARNING: Removing unreachable block (ram,0x2c4454a0) */
/* WARNING: Removing unreachable block (ram,0x2c445446) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c44529c(uint param_1,int *param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint *unaff_r6;
  uint unaff_r7;
  int iVar9;
  undefined4 unaff_pc;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr8;
  uint in_stack_00000210;
  undefined1 in_stack_00000224;
  
  *(char *)(unaff_r6 + 6) = (char)unaff_r6;
  uVar1 = *(ushort *)((int)param_2 + 0x3a);
  if (((uint)unaff_r6 & 0x100) != 0) {
    uVar3 = *unaff_r6;
    uVar4 = unaff_r6[1];
    uVar8 = unaff_r6[2];
    iVar6 = *(int *)unaff_r6[3];
    iVar7 = ((int *)unaff_r6[3])[1];
    *(char *)(uVar8 + 0x12) = (char)uVar3;
    *(char *)(iVar6 + 3) = (char)uVar3;
    *(char *)(uVar8 + uVar4) = (char)iVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar6 = *(int *)(param_4 + 0x58);
  *(int **)(iVar6 + 0xab) = param_2;
  *(undefined4 *)(iVar6 + 0xaf) = 0x2c44540c;
  *(uint *)(iVar6 + 0xb3) = unaff_r7;
  iVar7 = _LAB_2c445564;
  iVar6 = iRam2c445478;
  if (uVar1 != 0) {
    *unaff_r6 = (uint)uVar1;
    unaff_r6[1] = (int)(short)((ushort)((param_1 & 0xff) << 8) | (ushort)(param_1 >> 8) & 0xff);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam00000026 = (undefined2)param_1;
  if (param_2 != (int *)0x0) {
    iVar6 = param_2[2];
    iVar9 = param_2[3];
    *(char *)(*param_2 + 9) = (char)iVar9;
    *(short *)(iVar9 + 6) = (short)iVar6;
    software_interrupt(0x2c);
    *(undefined1 *)(iVar7 + 0xe5) = in_stack_00000224;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_r6 + 1) = (char)&stack0x00000139;
  *(uint *)((int)unaff_r6 + -1) = param_1;
  *(undefined4 *)((int)unaff_r6 + 3) = 0;
  *(undefined4 *)((int)unaff_r6 + 7) = 0x2c44540c;
  *(undefined1 **)((int)unaff_r6 + 0xb) = &stack0x00000139;
  *(int *)((int)unaff_r6 + 0xf) = iVar6;
  piVar5 = (int *)(unaff_r7 >> 8);
  puVar2 = (undefined1 *)0xf6;
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
    if (unaff_r7 != 0) {
code_r0x2c445188:
      coprocessor_moveto2(4,7,piVar5,unaff_pc,in_cr2);
      uRam2c445368 = (char)_LAB_2c4451f0;
      coprocessor_function(1,0xf,1,in_cr3,in_cr8,in_cr2);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar2[iVar6 + -0x6a] = 0;
    if (0xff < iVar6) {
      if (-1 < iVar6 + -0xff) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto code_r0x2c445188;
    }
    iVar6 = piVar5[1];
    iVar7 = piVar5[2];
    *(char *)(*piVar5 + 0x10) = (char)iVar6;
    piVar5 = (int *)(iVar6 + 0xd0);
    iVar6 = iVar7 << 6;
    *(short *)(iVar7 * 0x1000) = (short)iVar7 * 0x800;
    puVar2 = &stack0x000004e4;
    unaff_r7 = in_stack_00000210;
  } while( true );
}

