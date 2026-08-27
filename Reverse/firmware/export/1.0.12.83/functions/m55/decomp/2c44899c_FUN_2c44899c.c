/* FUN_2c44899c @ 0x2c44899c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c44899c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  uint unaff_r4;
  undefined2 *puVar2;
  undefined4 *puVar3;
  int unaff_r6;
  
  *(uint *)(param_1 + 0x58) = unaff_r4;
  piVar1 = piRam2c448b84;
  puVar2 = (undefined2 *)(unaff_r4 >> 4);
  *piRam2c448b84 = param_1;
  piVar1[1] = param_2;
  piVar1[2] = param_4;
  piVar1[3] = (int)puVar2;
  piVar1[4] = unaff_r6;
  piVar1[5] = 0x2c448b14;
  puVar3 = (undefined4 *)(uint)bRam000000dc;
  *puVar2 = (short)puVar2;
  software_interrupt(1);
  *puVar3 = (undefined4 *)((int)puVar2 << 1);
  puVar3[1] = param_2;
  puVar3[2] = 0xc0;
  puVar3[3] = unaff_r4 >> 7;
  puVar3[4] = puVar2;
  puVar3[5] = piVar1 + 6;
  puVar3[6] = puVar3;
  puVar3[7] = param_4 + 0x2c448b14;
  *(undefined4 *)((int)puVar2 << 1) = 0xc0;
  *(short *)(param_2 + 0x10) = (short)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

