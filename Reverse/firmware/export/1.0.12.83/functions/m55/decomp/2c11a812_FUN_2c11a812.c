/* FUN_2c11a812 @ 0x2c11a812 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c11a812(int *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  short sVar1;
  int *piVar2;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  undefined4 unaff_r7;
  uint unaff_lr;
  bool bVar3;
  
  while( true ) {
    *(uint *)((int)register0x00000054 + -4) = unaff_lr;
    *(uint *)((int)register0x00000054 + -8) = unaff_r6;
    *(uint *)((int)register0x00000054 + -0xc) = unaff_r5;
    *(uint *)((int)register0x00000054 + -0x10) = unaff_r4;
    *(uint *)((int)register0x00000054 + -0x14) = param_4;
    *(uint *)((int)register0x00000054 + -0x18) = param_3;
    *(uint *)(param_4 + unaff_r5) = unaff_r6;
    bVar3 = 0xffffff9e < param_3;
    piVar2 = (int *)(param_3 + 0x61);
    if (!bVar3 || piVar2 == (int *)0x0) break;
    param_1 = (int *)((int)param_1 * 0x100000);
    param_3 = (int)piVar2 >> 0xc;
    param_4 = *(uint *)((int)register0x00000054 + unaff_r4 + 0x368);
    unaff_r6 = *(uint *)((int)register0x00000054 + unaff_r4 + 0xec);
    *(int **)(param_4 + 0xc) = param_1;
    *param_1 = (unaff_r4 * 0x2000 - 0xca) + param_3 + (uint)(0xc9 < unaff_r4 * 0x2000);
    param_1[1] = unaff_r4;
    param_1[2] = unaff_r6;
    unaff_r5 = unaff_r5 + 0x1e;
    param_1 = param_1 + 0x27;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
  }
  if (((int)unaff_r4 >> 0xe & 1U) == 0 || (int)unaff_r4 >> 0xf == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)((int)param_1 +
          (unaff_r6 -
          (!CARRY4((uint)param_1,unaff_r5) && !CARRY4((int)param_1 + unaff_r5,(uint)bVar3))) +
          (uint)bVar3) = (int)unaff_r4 >> 0xf;
  sVar1 = *(short *)(param_4 * 2);
  *(short *)(param_3 + 0x91) = (short)param_4;
  *piVar2 = (int)sVar1;
  *(int *)(param_3 + 0x65) = (int)unaff_r4 >> 0x1f;
  *(int *)(param_3 + 0x69) = ((int)unaff_r4 >> 0x1f) << 6;
  *(undefined4 *)(param_3 + 0x6d) = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

