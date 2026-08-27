/* FUN_2c0943d4 @ 0x2c0943d4 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c0944f4) */
/* WARNING: Removing unreachable block (ram,0x2c094568) */

void FUN_2c0943d4(int param_1,undefined4 param_2,undefined4 param_3,code *param_4)

{
  code *pcVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int extraout_r3;
  undefined4 *puVar8;
  uint unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int iVar9;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr8;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr14;
  undefined4 in_cr15;
  int in_stack_000003e4;
  
  puVar8 = (undefined4 *)(param_1 >> 2);
  puVar3 = (ushort *)(*param_4)(*(undefined4 *)(param_1 + (int)puVar8));
  puVar6 = (undefined4 *)(unaff_r5 >> 0x1c);
  uVar2 = *(ushort *)(unaff_r5 + 0x20);
  uVar5 = (uint)uVar2;
  if ((unaff_r5 >> 0x1b & 1) != 0 && puVar6 != (undefined4 *)0x0) {
    *(byte *)((int)puVar6 + 2) = (byte)(unaff_r5 >> 0x1c);
    coprocessor_function(0,0xd,2,in_cr15,in_cr8,in_cr14);
    iVar9 = func_0x2c3c69b8();
    *(int *)(iVar9 + 0x10) = iVar9 + 0x10;
    *(int *)(iVar9 + 0x14) = (int)puVar8 + unaff_r7 + -4;
    *(undefined4 *)(iVar9 + 0x18) = 0xe0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xe9,0x2c094694);
    (*pcVar1)();
  }
  iVar9 = (int)puVar3 * 4;
  *(short *)(extraout_r3 + (int)puVar3) = (short)iVar9;
  if (SBORROW4((int)puVar8,0xc)) {
    *puVar8 = puVar3;
    puVar8[1] = uVar5;
    puVar8[2] = extraout_r3;
    puVar8[3] = unaff_r5;
    puVar6 = (undefined4 *)(uint)*(ushort *)(puVar8 + 0x10);
    iVar7 = uVar5 + 1;
    *puVar6 = puVar3;
    puVar6[1] = uVar5;
    puVar6[2] = iVar7;
    puVar6[3] = iVar9;
    if (iVar7 != 0 && !SCARRY4(uVar5,1)) {
      *(short *)(in_stack_000003e4 + 8) = (short)in_stack_000003e4;
      software_bkpt(2);
      coprocessor_function2(2,0xd,0,in_cr5,in_cr8,in_cr4);
      coprocessor_moveto(9,6,1,param_4,in_cr12,in_cr11);
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfd,0x2c0945a6);
      (*pcVar1)();
    }
    puVar4 = (undefined2 *)(in_stack_000003e4 >> 0x19);
    *(undefined1 *)((int)puVar4 + 0x1f) = 0xe;
    puVar4[0xf] = (short)iVar7;
    *puVar4 = 0x7e0;
    uRamfd00001c = 0x3f;
    puVar4[0x1c] = 0xe;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 **)(puVar3 + 0x3e2) = puVar8;
  *(undefined4 **)(puVar3 + 0x3e) = puVar6;
  *puVar3 = uVar2;
  *(short *)(iVar9 + -0x2a + unaff_r6) = (short)puVar8;
  *puVar6 = puVar3;
  puVar6[1] = uVar5;
  puVar6[2] = puVar6;
  puVar6[3] = (uint)puVar8 >> 0x1b;
  puVar6[4] = puVar8;
  puVar6[5] = (int)(short)(ushort)(unaff_r5 >> 0x1c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

