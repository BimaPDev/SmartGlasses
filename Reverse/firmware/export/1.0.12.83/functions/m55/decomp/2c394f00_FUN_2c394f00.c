/* FUN_2c394f00 @ 0x2c394f00 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c394f00(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  undefined4 unaff_r5;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *in_stack_000000c8;
  undefined1 auStack_c [4];
  
  uVar3 = *(undefined4 *)(unaff_r4 + 0x34);
  iVar5 = *(int *)(unaff_r4 + 0x38);
  puVar6 = *(undefined4 **)(unaff_r4 + 0x3c);
  *(int *)(param_2 + 0x2c) = param_2;
  *puVar6 = param_1;
  puVar6[1] = uVar3;
  puVar6[2] = unaff_r5;
  puVar6[3] = iVar5;
  uVar1 = *(ushort *)(unaff_r4 + 0xfa);
  *(int *)(iVar5 * 4 + 0x3c) = iVar5 * 4;
  iVar2 = *(int *)(unaff_r4 + 0x44);
  piVar4 = *(int **)(unaff_r4 + 0x4c);
  iVar7 = unaff_r4 + 0x54;
  if (iVar7 == 0) {
    *(short *)((uint)uVar1 + (uint)*(byte *)(iVar5 * 4 + 4)) =
         (short)*(undefined4 *)(unaff_r4 + 0x50);
    puVar6 = (undefined4 *)(int)(short)((short)auStack_c + 4);
    *(short *)(iVar2 + 0x3e) = (short)iVar2;
    *(int *)(iVar2 + 0x4c) = iVar2;
    *in_stack_000000c8 = (int)(in_stack_000000c8 + 0x17);
    in_stack_000000c8[1] = 0x2c395070;
    *puVar6 = 0x2c395070;
    puVar6[1] = puVar6;
    piVar4 = (int *)in_stack_000000c8[5];
    if (in_stack_000000c8 != (int *)0xffffffe4) {
      halt_baddata();
    }
    *(int *)(in_stack_000000c8[3] + 0x48) = in_stack_000000c8[2];
    iVar7 = 0;
  }
  *piVar4 = iVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

