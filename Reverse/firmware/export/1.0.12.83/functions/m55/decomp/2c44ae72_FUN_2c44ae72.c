/* FUN_2c44ae72 @ 0x2c44ae72 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c44b550) */
/* WARNING: Removing unreachable block (ram,0x2c44b5b2) */
/* WARNING: Removing unreachable block (ram,0x2c44b552) */

void FUN_2c44ae72(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  byte bVar2;
  int *piVar3;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar4;
  int *unaff_r6;
  int *piVar5;
  int unaff_lr;
  
  piVar3 = (int *)register0x00000054;
  do {
    piVar5 = piVar3;
    piVar5[-1] = unaff_lr;
    piVar5[-2] = (int)UNRECOVERED_JUMPTABLE;
    piVar5[-3] = param_4;
    piVar5[-4] = param_3;
    piVar1 = piVar5 + 0xc6;
    *(short *)(piVar5 + 0x9e) = (short)piVar1;
    piVar5[0x71] = param_3 * 0x20000000;
    if (param_3 * 0x20000000 != 0x56) {
      piVar5[99] = (uint)*(ushort *)(piVar5 + 0xd0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar4 = (uint)*(byte *)(unaff_r6 + 3);
    *unaff_r6 = (int)piVar1;
    unaff_r6[1] = param_3;
    unaff_r6[2] = (int)unaff_r6;
    bVar2 = *(byte *)(uVar4 + 0xe);
    UNRECOVERED_JUMPTABLE = (code *)(uint)bVar2;
    piVar3 = piVar5 + -4;
  } while (0xfb < uVar4);
  *(byte *)((int)piVar1 + param_4) = *(byte *)(unaff_r6 + 3);
  *(undefined4 *)(uVar4 + 0xc) = 0x2c44b164;
  *(ushort *)(((int)piVar5 + unaff_lr + 0x313) * 0x40000 + 8) = (ushort)bVar2;
  piVar5[0xf7] = (int)(piVar5 + 0x4f);
                    /* WARNING: Could not emulate address calculation at 0x2c44ada6 */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

