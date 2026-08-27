/* FUN_2c43ee74 @ 0x2c43ee74 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c43f62c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c43ee74(undefined1 *param_1,int param_2,int param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int unaff_r5;
  uint uVar7;
  undefined4 *puVar8;
  int unaff_r8;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr11;
  undefined4 *in_stack_000003a0;
  
  uVar7 = (uint)*(byte *)(param_3 + 0x1c);
  if (in_OV != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar5 = (int *)(uint)*(ushort *)(param_2 + 8);
  *(char *)((int)piVar5 + param_2) = (char)param_4;
  if (in_CY && !in_ZR) {
    puVar2 = (undefined1 *)((int)in_stack_000003a0 + (int)piVar5);
    *piVar5 = param_2;
    piVar5[1] = (int)in_stack_000003a0;
    uVar7 = 0x2c43f284;
    param_4 = puVar2;
    if (unaff_r5 == 0) {
      software_interrupt(0xd2);
      coprocessor_storelong(0,in_cr0,unaff_r8 + -0x17c);
      if (SCARRY4((int)(piVar5 + 2),4)) {
        uRam2c43f169 = SUB41(in_stack_000003a0,0);
        _MasterStackPointer = *(uint *)(puVar2 + 0x30);
        uVar7 = _MasterStackPointer >> 1;
        *in_stack_000003a0 = puVar2;
        in_stack_000003a0[1] = in_stack_000003a0;
        in_stack_000003a0[2] = uVar7;
        in_stack_000003a0[3] = 0;
        *(uint *)(uVar7 + 0x54) = _MasterStackPointer;
        *(undefined1 **)(uVar7 + 0xa9) = puVar2;
        *(undefined4 *)(uVar7 + 0xad) = 0;
        _Reset = in_stack_000003a0;
        _NMI = 0x2c43f284;
        uRam2c43f284 = 0xf284;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_4 = &stack0x000002c0;
      param_2 = param_2 + -0x52;
      puRam2c43f1c8 = puVar2;
    }
    *param_4 = (char)param_2;
    uRam2c43f290 = SUB41(param_4,0);
    param_1 = &stack0x00000078;
    param_4 = param_4 + 0x2c43f284;
    *(undefined1 **)(unaff_r5 + 0x48) = param_4;
    *(undefined1 **)((int)param_1 * 2) = param_1;
    software_hlt(1);
  }
  puVar8 = *(undefined4 **)((uVar7 & (uint)param_1) + 4);
  *(char *)(*(byte *)(*(int *)((uVar7 & (uint)param_1) + 8) + 0x19) + 0x16) = (char)param_4;
  *(undefined2 *)(param_4 + 0x1e) = 0xf2d4;
  puVar1 = (undefined4 *)puVar8[1];
  uVar3 = puVar8[2];
  uVar4 = puVar8[3];
  uVar6 = puVar8[4];
  *puVar1 = *puVar8;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = puVar8 + 6;
  uRam2c43f2d8 = (undefined2)uVar6;
  uVar7 = *(int *)((uint)(puVar1 + 4) >> 0x12) - 0x1dc;
  coprocessor_storelong(2,in_cr11,uVar7);
  if ((uVar7 >> 0x11 & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(((int *)((uint)(puVar1 + 4) >> 0x12))[2] + 0x1e) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

