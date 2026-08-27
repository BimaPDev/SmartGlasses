/* FUN_2c441324 @ 0x2c441324 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c4413d2) */
/* WARNING: Removing unreachable block (ram,0x2c44102e) */
/* WARNING: Removing unreachable block (ram,0x2c4413d4) */
/* WARNING: Removing unreachable block (ram,0x2c4413d8) */
/* WARNING: Removing unreachable block (ram,0x2c4413b6) */
/* WARNING: Removing unreachable block (ram,0x2c4413ba) */
/* WARNING: Removing unreachable block (ram,0x2c4413ca) */
/* WARNING: Removing unreachable block (ram,0x2c441236) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c441324(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r10;
  int unaff_lr;
  undefined4 in_cr13;
  
  while( true ) {
    iVar1 = _DAT_2c4413dc;
    *(int *)((int)register0x00000054 + -4) = unaff_lr;
    *(int *)((int)register0x00000054 + -8) = unaff_r6;
    iVar3 = *(int *)((int)register0x00000054 + 300);
    *(char *)(unaff_r6 + 0x10) = (char)unaff_r6;
    *(int *)((int)register0x00000054 + 0x340) = (int)param_1 >> 5;
    *(short *)(param_1 + 0x22) = (short)iVar3;
    *(char *)(iVar3 + 6) = (char)param_1;
    coprocessor_loadlong(7,in_cr13,unaff_r10);
    if (((int)param_1 >> 0xc & 1U) == 0) {
      *(undefined2 *)(iVar1 + 0x32) = 0x14bc;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (SBORROW4(iVar1,0x2c4414bc)) break;
    uVar2 = (uint)*(ushort *)(((int)param_1 >> 0xd) + 0x28);
    iVar3 = uVar2 + 4;
    *(int *)((int)register0x00000054 + 0x19c) = unaff_r6;
    *(char *)(unaff_r6 + 6) = (char)(param_1 >> 0x11);
    *(int *)(uVar2 + 0x7c) = iVar3;
    *(int *)((int)register0x00000054 + -0xc) = unaff_r6;
    *(int *)((int)register0x00000054 + -0x10) = iVar3;
    *(int *)((int)register0x00000054 + -0x14) = iVar1 + -0x2c4414bc;
    *(int *)((int)register0x00000054 + -0x18) = (int)register0x00000054 + 0x35c;
    if ((param_1 >> 0x10 & 1) == 0 || param_1 >> 0x11 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(int *)((int)register0x00000054 + 0x3d8) = iVar1 + -0x2c4414bc;
    unaff_r10 = unaff_r10 + -0x374;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
  }
  if ((int *)((int)register0x00000054 + 0x35c) != (int *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)((int)register0x00000054 + 0x328) = 0x28;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

