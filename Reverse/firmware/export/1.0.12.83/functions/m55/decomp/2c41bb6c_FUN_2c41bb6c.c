/* FUN_2c41bb6c @ 0x2c41bb6c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c41bb6c(void)

{
  int iVar1;
  int in_r3;
  int iVar2;
  int unaff_r4;
  uint uVar3;
  int unaff_r5;
  uint uVar4;
  int unaff_r6;
  int unaff_r7;
  int unaff_lr;
  
  while( true ) {
    *(int *)((int)register0x00000054 + -4) = unaff_lr;
    *(int *)((int)register0x00000054 + -8) = unaff_r7;
    *(int *)((int)register0x00000054 + -0xc) = unaff_r6;
    *(int *)((int)register0x00000054 + -0x10) = unaff_r5;
    *(int *)((int)register0x00000054 + -0x14) = unaff_r4;
    *(int *)((int)register0x00000054 + -0x18) = in_r3;
    if (SBORROW4(unaff_r7 * 0x400000 + -0x3f,0x3f)) break;
    do {
      *(int *)((int)register0x00000054 + 0x148) = unaff_r7;
      *(int *)((int)register0x00000054 + 0x148) = unaff_r7;
      uVar4 = *(int *)((int)register0x00000054 + 0x238) - 0x3cU >> 0x18;
      uRam000000a0 = 0x6a;
      *(uint *)(uVar4 + 0x34) =
           (uint)*(ushort *)((*(int *)((int)register0x00000054 + 0x238) - 0x3cU >> 0x18) - 0x3f);
      uRam00000607 = 0x6a;
      *(short *)(uVar4 + 8) = (short)*(undefined4 *)(uVar4 + 0x2c);
      uVar3 = uRam00000045 & 0xffff;
      uRam00000045 = 0x60000;
      *(undefined2 *)(uVar3 + 6) = 0xd1;
      iVar1 = iRam60000064;
      uRam80000026 = 0xd1;
      uRam80000006 = 0xd1;
      *(undefined4 *)(uVar4 + 0x54) = 0x80000000;
      *(int *)((int)register0x00000054 + 0x3a4) = iVar1;
      unaff_r7 = iVar1 * 4;
    } while (iVar1 * 0x100 != 0x3f);
    unaff_r7 = unaff_r7 + 0x6c;
    unaff_r6 = iVar1 + 0xd8;
    iVar2 = *(int *)(iVar1 * 0x100 + 0x34);
    *(int *)((int)register0x00000054 + 0x58) = iVar1 << 8;
    in_r3 = *(int *)(iVar1 * 0x4000000);
    unaff_r5 = ((int *)(iVar1 * 0x4000000))[1] + 200;
    *(int *)(in_r3 + 100) = iVar2 + -0xfd;
    unaff_r4 = iVar2 + -0x112;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

