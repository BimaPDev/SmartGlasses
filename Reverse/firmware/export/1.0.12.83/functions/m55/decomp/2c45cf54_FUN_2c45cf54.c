/* FUN_2c45cf54 @ 0x2c45cf54 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c45d028) */
/* WARNING: Removing unreachable block (ram,0x2c45d022) */
/* WARNING: Removing unreachable block (ram,0x2c45d02a) */
/* WARNING: Removing unreachable block (ram,0x2c45d068) */
/* WARNING: Removing unreachable block (ram,0x2c45d030) */

void FUN_2c45cf54(void)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int in_r3;
  int unaff_r6;
  uint *puVar7;
  int unaff_r7;
  uint unaff_r11;
  int iVar8;
  undefined4 in_cr7;
  undefined4 in_cr14;
  int in_stack_000001c8;
  int in_stack_00000334;
  
  uVar6 = coprocessor_movefromRt(5,7,4,in_cr14,in_cr7);
  uVar2 = *(ushort *)(unaff_r6 + 0x3a);
  puVar7 = (uint *)(uint)uVar2;
  HintYield();
  if (!SCARRY4(in_r3,in_r3)) {
    iVar8 = *(int *)(unaff_r11 - 0x230);
    *puRam000000f6 = uVar6;
    *(uint **)(iVar8 + -4) = puVar7;
    *(undefined4 *)(iVar8 + -8) = uVar6;
    software_hlt(0x23);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar5 = (uint)(ushort)puVar7[0xd];
  uVar6 = *(undefined4 *)(in_r3 + (int)puVar7);
  bVar3 = (bool)hasExclusiveAccess(&stack0x00000264);
  if (puVar7 == (uint *)0x0) {
    *(ushort *)(uVar5 + 0x1e) = uVar2;
    (&stack0x000000e4)[uVar5] = (char)uVar2;
    *(uint *)(in_r3 + uVar5) = uVar5;
    if ((int)(uVar5 - 0x30) < 0) {
      uVar4 = *(uint *)(unaff_r7 + 0x1e);
      uVar6 = *(undefined4 *)(unaff_r7 + 0x2a);
      bVar1 = *(byte *)(*(int *)(unaff_r7 + 0x26) + 0x12);
      *(short *)(*(int *)(unaff_r7 + 0x22) + 0x30) = (short)uVar6;
      puVar7 = (uint *)(in_stack_00000334 + (unaff_r11 >> 0x1a) + (uint)(0xa3 < bVar1));
      puVar7[0x10] = (uint)puVar7;
      uVar5 = puVar7[6];
      *(undefined4 *)(in_stack_000001c8 + 0x3c) = uVar6;
      *puVar7 = uVar4 & (uint)&stack0x000000e4;
      puVar7[1] = (uint)puVar7;
      puVar7[2] = (uint)(byte)uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(ushort *)(!bVar3 + 2) = uVar2;
  *(short *)(puVar7 + 4) = (short)uVar6;
  puVar7[2] = uVar5;
  *puVar7 = uVar5;
  puVar7[1] = (uint)!bVar3;
  puVar7[2] = 0;
  puVar7[3] = 0x4a;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

