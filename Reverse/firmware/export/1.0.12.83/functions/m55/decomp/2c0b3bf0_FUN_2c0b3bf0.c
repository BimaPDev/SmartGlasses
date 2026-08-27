/* FUN_2c0b3bf0 @ 0x2c0b3bf0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c0b34c6) */
/* WARNING: Removing unreachable block (ram,0x2c0b34d2) */
/* WARNING: Removing unreachable block (ram,0x2c0b33ea) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0b3bf0(undefined4 *param_1,int param_2,int *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_r4;
  uint unaff_r5;
  uint uVar4;
  int unaff_r6;
  int iVar5;
  int unaff_r7;
  uint *puStack00000050;
  int in_stack_00000218;
  
  *(int *)(unaff_r6 + -0x2a7) = (int)param_1;
  *(int **)(unaff_r6 + -0x2a3) = param_3;
  *(int **)(unaff_r6 + -0x29f) = (int *)(unaff_r6 + -0x2a7);
  *(int *)(unaff_r6 + -0x29b) = unaff_r7;
  iVar5 = _DAT_2c0b3c98 + -0xf4;
  if (-1 < iVar5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_3 = param_2;
  param_3[1] = (int)param_3;
  param_3[2] = unaff_r4;
  param_3[3] = unaff_r5;
  param_3[4] = iVar5;
  *(char *)((int)param_1 * 2) = (char)param_1;
  param_1[0xf] = param_1;
  if (0x53 < unaff_r7 + -0x17) {
    *(short *)(param_2 + (int)param_1) = (short)unaff_r5;
    uVar2 = *param_1;
    uVar3 = param_1[1];
    puStack00000050 = (uint *)param_1[2];
    uVar4 = 0;
    if (param_1[3] + -4 != 0) {
      uVar3 = (uint)puStack00000050 >> 0x1b;
      *(short *)(in_stack_00000218 + 0xc) = (short)(param_1[3] + -4);
      *(undefined4 *)((unaff_r5 >> 0xd) + 0x54) = uVar2;
      enableIRQinterrupts();
      unaff_r5 = 0x8b;
      if (0x5c < (int)(uVar3 * 0x100 + -0x5c)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (_DAT_2c0b3594 == 0) {
        *(undefined2 *)(iRam000000ff + 0x34) = 0;
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0x1e,0x2c0b34dc);
        (*pcVar1)();
      }
      uVar4 = _DAT_2c0b3594 - 3;
    }
    *puStack00000050 = uVar3;
    puStack00000050[1] = unaff_r5;
    puStack00000050[2] = uVar4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

