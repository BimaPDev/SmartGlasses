/* FUN_2c09739e @ 0x2c09739e */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c09739e(uint param_1,undefined2 *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined2 *extraout_r1;
  uint extraout_r2;
  int extraout_r3;
  uint unaff_r4;
  uint uVar2;
  undefined1 *puVar3;
  int unaff_r7;
  undefined4 unaff_pc;
  char in_OV;
  bool bVar4;
  undefined1 in_q8 [16];
  int in_stack_000003e4;
  
  uVar2 = unaff_r4 >> 6;
  if (uVar2 != 0 && in_OV == '\0') goto LAB_2c0973d4;
  param_1 = (uint)(ushort)param_2[6];
  *(short *)(unaff_r4 + 0x10) = (short)unaff_r4;
  while( true ) {
    *param_2 = 0;
    *param_2 = (short)unaff_r7;
    unaff_r4 = (param_4 >> 6) + 0x19b;
    uVar2 = param_1 - 4;
    if (uVar2 != 0 && 3 < param_1) {
      *(char *)(param_1 + 8) = (char)param_1;
      *(char *)(param_1 + 0x1c) = (char)uVar2;
      software_bkpt(0x86);
      VectorTableLookup(unaff_pc,((int)param_2 >> 0x1f) << 10,4);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_2c0973d4:
    if (param_1 + unaff_r4 == 0 || (int)(param_1 + unaff_r4) < 0 != SCARRY4(param_1,unaff_r4)) {
      func_0x2cc0b632();
      puVar3 = &stack0x0000031d;
      bVar4 = SCARRY4(uVar2,extraout_r3);
      iVar1 = uVar2 + extraout_r3;
      *(short *)(iVar1 + 2) = (short)uVar2;
      *(char *)(unaff_r7 + 2) = (char)extraout_r1;
      param_2 = extraout_r1;
      uVar2 = extraout_r2;
      param_4 = extraout_r3;
      if (iVar1 == 0) {
        *(short *)(unaff_r4 + 4) = (short)extraout_r2;
        VectorCopyNarrow(in_q8,8);
        software_bkpt(0x20);
        func_0x2c7d57e6(in_stack_000003e4 + 0xe0,
                        (in_stack_000003e4 - (int)extraout_r1) + extraout_r3 * -0x1000,extraout_r2,
                        in_stack_000003e4 + 0xe0 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      iVar1 = (int)*(short *)(param_1 * 2);
      uVar2 = _DAT_2c097448 << 2;
      param_2 = (undefined2 *)(iVar1 >> 0xe);
      bVar4 = SBORROW4(uVar2,iVar1);
      *(int *)(unaff_r4 + 0x7c) = iVar1;
      *(char *)(unaff_r4 * 2) = (char)param_4;
      puVar3 = (undefined1 *)(unaff_r7 >> 0x15);
      if ((uint)puVar3 >> 4 != 0 && !bVar4) {
        *(char *)(param_4 + 0x1e) = (char)puVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    *(char *)(unaff_r7 + 0x16) = (char)puVar3;
    if (uVar2 >> 9 != 0 && bVar4 == false) break;
    iVar1 = iVar1 * 0x1000000;
    if (iVar1 == 0 || iVar1 < 0 != bVar4) {
      *(undefined1 **)(iVar1 + 0x5c) = puVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 **)(unaff_r7 + iVar1) = puVar3;
    param_1 = (uint)param_2 >> 0x10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

