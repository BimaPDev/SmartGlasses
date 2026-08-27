/* FUN_2c24cf9c @ 0x2c24cf9c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c24cf9c(undefined4 param_1,int param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_pc;
  longlong lVar7;
  undefined4 in_cr0;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  
  *(undefined1 *)(param_2 + 0x17) = param_3;
  _MemManage = 0;
  *(short *)(unaff_r5 + 2) = (short)unaff_r7;
  coprocessor_loadlong(0,in_cr0,unaff_pc);
  *(int *)(param_2 + (unaff_r6 + -0xf1) * 4) = unaff_r4;
  *(undefined4 *)((unaff_r6 + -0xf1) * 8) = unaff_r7;
  puVar5 = (undefined1 *)(unaff_r4 << 3);
  puVar1 = (undefined1 *)0x328;
  puVar2 = (undefined1 *)0x330;
  puVar3 = (undefined1 *)0x338;
  puVar4 = (undefined1 *)0x340;
  lVar7 = 8;
  while( true ) {
    *puVar5 = *puVar1;
    puVar5[1] = *puVar2;
    puVar5[2] = *puVar3;
    puVar5[3] = *puVar4;
    puVar5 = puVar5 + 4;
    lVar7 = lVar7 + -1;
    if (lVar7 == 0) break;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar6 = (undefined8 *)(unaff_r4 * 8);
  *puVar6 = unaff_d10;
  puVar6[1] = unaff_d11;
  puVar6[2] = unaff_d12;
  *(int *)(*(int *)(unaff_r4 + 0x34) + 0x6c) = *(int *)(unaff_r4 + 0x34);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

