/* FUN_2c1162fc @ 0x2c1162fc */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c1162fc(int param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_r5;
  int unaff_r7;
  undefined1 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined4 in_cr12;
  uint *in_stack_000003d0;
  undefined1 auStack_20 [16];
  
  puVar7 = auStack_20;
  bVar3 = *(byte *)(param_1 + 0xb);
  *(undefined4 *)(unaff_r7 + 0x5c) = unaff_r5;
  coprocessor_load(7,in_cr12,bVar3 - 0x1c0);
  *(uint *)((byte *)(param_3 * 0x20000000) + 0x48) = (uint)bVar3;
  puVar6 = (undefined1 *)0x0;
  uVar5 = 0x1a;
  software_bkpt(0xe0);
  uVar4 = (uint)*(byte *)(param_3 * 0x20000000);
  puVar1 = (undefined1 *)0x338;
  puVar2 = (undefined1 *)0x348;
  lVar8 = 8;
  while( true ) {
    *puVar1 = *puVar6;
    puVar6 = puVar6 + 1;
    *puVar2 = *puVar6;
    puVar6 = puVar6 + 1;
    lVar8 = lVar8 + -1;
    if (lVar8 == 0) break;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  *in_stack_000003d0 = uVar4;
  in_stack_000003d0[1] = (uint)(puVar7 + 0xbc);
  in_stack_000003d0[2] = uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

