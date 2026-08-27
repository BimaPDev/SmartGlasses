/* FUN_2c45443e @ 0x2c45443e */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c45443e(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_r5;
  int unaff_r6;
  code *unaff_r10;
  undefined4 in_cr2;
  
  puVar1 = (undefined4 *)(uint)*(ushort *)(param_3 + 0x1e);
  uVar3 = (uint)*(byte *)((unaff_r5 >> 0xc) + unaff_r6);
  software_interrupt(0x48);
  coprocessor_load(1,in_cr2,param_3);
  uVar2 = *puVar1;
  *(undefined4 **)(uVar3 + puVar1[2]) = puVar1 + 4;
  (*unaff_r10)(puVar1 + 4,uVar2,param_3,uVar3,param_1,param_4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

