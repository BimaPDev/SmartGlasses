/* FUN_2c0b7150 @ 0x2c0b7150 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0b7150(undefined4 param_1,int param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint unaff_r4;
  int unaff_r5;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int unaff_r9;
  code *unaff_r11;
  bool bVar11;
  undefined4 in_cr3;
  undefined8 uVar12;
  uint in_stack_000002a8;
  
  bVar1 = *(byte *)(param_4 + unaff_r4);
  uVar5 = unaff_r5 - 0xee;
  uRam2c0b7259 = param_4;
  *(short *)(unaff_r4 + 0x1c) = (short)uVar5;
  uVar8 = bVar1 & 0x2c0b71e5;
  *(uint *)(in_stack_000002a8 + unaff_r4 + param_4) = unaff_r4 + param_4;
  *(char *)(param_2 + 0x17) = (char)uVar5;
  uVar5 = unaff_r4 & uVar5;
  uVar3 = (param_4 & in_stack_000002a8) - 0x21;
  uVar9 = uVar8 - 0xf9;
  if ((int)(uVar8 - 0x4f) < 0xaa) {
    uVar9 = uVar8 - 0x1ee;
    iVar4 = *(int *)((param_4 & in_stack_000002a8) + 0x1b);
    uVar5 = *(uint *)(iVar4 + 4);
    uVar3 = iVar4 + 8;
  }
  puVar6 = (uint *)(uRam2c0b773c & (uVar3 & uVar9) + 0x6e & (uint)&stack0x000000dc);
  puVar2 = (uint *)*puVar6;
  uVar3 = puVar6[1];
  uVar8 = puVar6[2];
  uVar9 = puVar6[4];
  puVar7 = puVar6 + 6;
  uVar10 = puVar6[5] & uVar5 - 0x86;
  if ((int)uVar10 < 0) {
    bVar11 = puVar7 < (uint *)0x29;
    puVar7 = (uint *)((int)puVar6 + -0x11);
    if (bVar11) {
      *(uint *)uVar3 = uVar3;
      *(uint *)(uVar3 + 4) = uVar8;
      *(uint *)(uVar3 + 8) = uVar5 - 0x86;
      *(uint *)((uVar10 & uVar3) + 0x68) = uVar8;
      coprocessor_store(0xe,in_cr3,((uint)puVar2 & uVar9) - 0x278);
      uVar5 = *(uint *)(unaff_r9 + 0xd2);
      uVar9 = *(uint *)(uVar9 + 4);
      iVar4 = 0xc9;
    }
    else {
      if ((int)puVar7 < 0x59) {
        uVar9 = uVar9 & (uint)(puVar6 + -0x4a);
      }
      uVar10 = *puVar2;
      uVar5 = puVar2[1];
      uVar8 = uVar10 >> 0x18;
      iVar4 = uVar10 - 0x86;
      puVar7 = (uint *)(puVar2[2] - 0x87);
      if (puVar7 == (uint *)0x0 || (int)(puVar2[2] - 4) < 0x83) {
        iVar4 = *(int *)(uVar10 - 0x72);
        *(char *)(*(int *)(uVar10 - 0x76) + 0xd) = (char)*(undefined4 *)(uVar10 - 0x7a);
        if (0x4d < iVar4 - 0x22U) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    uVar12 = (*unaff_r11)(iVar4,uVar3,uVar8,uVar5,param_4);
    puVar2 = (uint *)uVar12;
    uVar9 = uVar9 & (uint)((ulonglong)uVar12 >> 0x20);
  }
  software_bkpt(0x8c);
  *(byte *)(((uint)puVar2 >> 0x17) + uVar9) = (byte)puVar2 & (byte)uVar9;
  *(undefined1 **)((int)puVar7 + -0x13e) = &stack0x00000044;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

