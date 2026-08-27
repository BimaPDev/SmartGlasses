/* FUN_2c083872 @ 0x2c083872 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c083d56) */
/* WARNING: Removing unreachable block (ram,0x2c083d5e) */
/* WARNING: Removing unreachable block (ram,0x2c083d64) */
/* WARNING: Removing unreachable block (ram,0x2c083d6a) */
/* WARNING: Removing unreachable block (ram,0x2c083d98) */
/* WARNING: Removing unreachable block (ram,0x2c083c28) */
/* WARNING: Removing unreachable block (ram,0x2c083c2a) */
/* WARNING: Removing unreachable block (ram,0x2c083d92) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c083872(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int unaff_r5;
  int unaff_r6;
  undefined2 unaff_r7;
  bool in_ZR;
  bool in_CY;
  bool bVar6;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr11;
  undefined8 in_d24;
  undefined4 uStack00000038;
  undefined4 in_stack_000000c0;
  
  iVar4 = *(int *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(unaff_r6 + 0x7c) = *(undefined4 *)(param_1 + 4);
  bVar1 = *(byte *)(unaff_r5 + 0x17);
  uVar2 = (uint)bVar1;
  if (in_CY && !in_ZR) {
    VectorShiftLeft(in_d24,0x1e,0x40,1);
    *(uint *)(uVar2 * 4 + 0x14) = (uint)*(ushort *)(uVar2 + 0x10);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar6 = true;
  uVar2 = (uint)*(ushort *)(uVar2 + 0x3c);
  while( true ) {
    uVar3 = uVar2;
    if (!bVar6) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar2 = uVar3 - 0x2a;
    if (uVar3 < 0x2a || uVar2 == 0) break;
    *(byte *)(iVar4 + 2) = bVar1;
    bVar6 = false;
    if (uVar2 == 0) {
      *(undefined4 *)(unaff_r6 + 100) = 0;
      *(byte *)(uVar3 - 0x27) = bVar1;
      coprocessor_function(0,7,4,in_cr7,in_cr0,in_cr2);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  sRam000000b0 = (short)iVar5 * 2;
  software_bkpt(0xfd);
  uRam0000003e = unaff_r7;
  *(int *)(uVar3 - 0x1a) = iVar5 << 3;
  coprocessor_movefromRt(6,7,7,in_cr11,in_cr7);
  coprocessor_function2(7,0xe,2,in_cr0,in_cr8,in_cr7);
  UNRECOVERED_JUMPTABLE = (code *)(_DAT_2c0840a4 - 0x91U >> 3);
  uStack00000038 = param_3;
                    /* WARNING: Could not recover jumptable at 0x2c08403e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (UNRECOVERED_JUMPTABLE,in_stack_000000c0,(int)&stack0x00000020 * 0x400,
             *(undefined4 *)(iVar4 + iVar5 * 2),param_2,param_3,param_4);
  return;
}

