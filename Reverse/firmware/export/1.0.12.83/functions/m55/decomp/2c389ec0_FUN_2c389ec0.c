/* FUN_2c389ec0 @ 0x2c389ec0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c389ec0(undefined4 param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int unaff_r4;
  int *piVar3;
  int unaff_r6;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *in_stack_000000c8;
  undefined1 auStack_c [4];
  
  uVar1 = *(ushort *)(unaff_r6 + 0x20);
  uVar2 = *(undefined4 *)(unaff_r4 + 0x34);
  iVar4 = *(int *)(unaff_r4 + 0x38);
  puVar5 = *(undefined4 **)(unaff_r4 + 0x3c);
  puVar5[10] = param_2;
  *puVar5 = param_1;
  puVar5[1] = uVar2;
  puVar5[2] = (uint)uVar1;
  puVar5[3] = iVar4;
  iVar4 = iVar4 * 4;
  *(int *)(iVar4 + 0x3c) = iVar4;
  iVar4 = *(int *)(unaff_r4 + 0x44);
  piVar3 = *(int **)(unaff_r4 + 0x4c);
  iVar6 = unaff_r4 + 0x54;
  if (iVar6 == 0) {
    *(short *)(*(int *)(unaff_r4 + 0x40) + (uint)*(byte *)(unaff_r4 + 0x44)) =
         (short)*(undefined4 *)(unaff_r4 + 0x50);
    *(short *)(iVar4 + 0x3e) = (short)iVar4;
    *(int *)(iVar4 + 0x4c) = iVar4;
    *in_stack_000000c8 = (int)(in_stack_000000c8 + 0x17);
    in_stack_000000c8[1] = 0x2c38a030;
    piVar3 = (int *)in_stack_000000c8[5];
    iVar6 = (int)(short)((ushort)((in_stack_000000c8[3] & 0xffU) << 8) |
                        (ushort)((uint)in_stack_000000c8[3] >> 8) & 0xff);
    *(int *)((short)((short)auStack_c + 4) + 0x48) = in_stack_000000c8[6];
  }
  *piVar3 = iVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

