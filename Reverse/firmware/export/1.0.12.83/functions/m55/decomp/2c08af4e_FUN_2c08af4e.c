/* FUN_2c08af4e @ 0x2c08af4e */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c08abca) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c08af4e(undefined4 param_1,short param_2)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int extraout_r1;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int extraout_r3;
  int iVar8;
  uint unaff_r5;
  int iVar9;
  undefined4 unaff_r9;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  int in_stack_00000034;
  undefined4 in_stack_00000154;
  
  piVar4 = (int *)(unaff_r5 >> 0x17);
  coprocessor_loadlong(3,in_cr2,unaff_r9);
  piVar2 = (int *)*piVar4;
  iVar6 = piVar4[1];
  iVar3 = *piVar2;
  uVar7 = piVar2[1];
  iVar8 = piVar2[2];
  iVar9 = piVar2[3];
  *(short *)((int)piVar4 * 0x200 + 0x20) = (short)iVar9;
  *(char *)(iVar3 + 0x18) = (char)iVar9;
  *(int *)((int)piVar4 * 0x200 + 0x58) = iVar8;
  uVar5 = (int)piVar4 << 0x1d;
  if (uVar5 == 0 || (int)uVar5 < 0 != SCARRY4(iVar6,0x5e)) {
    uVar5 = (uVar7 & 0x3fffff) >> 6;
    if (uVar5 == 0 || SCARRY4(iVar6,0x5e)) {
      uVar5 = (uVar7 & 0x3fffff) >> 0xf;
      if (uVar5 == 0) {
        *(undefined4 *)(param_2 + 0x28) = 0;
        *(undefined4 *)(in_stack_00000034 + 0x50) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto code_r0x2c08abc6;
    }
  }
  else {
    coprocessor_loadlong(3,in_cr1,unaff_r9);
  }
  coprocessor_loadlong(3,in_cr2,unaff_r9);
code_r0x2c08abc6:
  coprocessor_loadlong(3,in_cr3,unaff_r9);
  coprocessor_loadlong(3,in_cr4,unaff_r9);
  coprocessor_loadlong(3,in_cr5,unaff_r9);
  coprocessor_loadlong(3,in_cr6,unaff_r9);
  coprocessor_loadlong(3,in_cr7,unaff_r9);
  _DAT_00000074 = 0;
  iVar3 = uVar5 + _NMI;
  uVar1 = (*(code *)&stack0x0000006c)
                    (_MasterStackPointer,_DAT_2c08b010,*(undefined1 *)(_DAT_2c08b010 + 0x18),_Reset)
  ;
  *(int *)(extraout_r1 + 0x60) = iVar3;
  *(undefined1 *)(extraout_r3 + 0x1b) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

