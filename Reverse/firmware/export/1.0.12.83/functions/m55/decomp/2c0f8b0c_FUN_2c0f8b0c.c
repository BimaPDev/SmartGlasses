/* FUN_2c0f8b0c @ 0x2c0f8b0c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0f8b0c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int unaff_r5;
  undefined4 *unaff_r7;
  int unaff_r10;
  undefined1 *puVar2;
  bool bVar3;
  undefined4 in_cr2;
  undefined4 in_cr10;
  undefined4 in_cr13;
  undefined8 in_d4;
  undefined8 in_d6;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 in_d29;
  
  *unaff_r7 = param_1;
  unaff_r7[1] = param_2;
  if (param_2 != 0x7b) {
    software_interrupt(0x39);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam2c0f7fc4 = *(uint *)(param_3 + 100);
  bVar3 = SBORROW4(unaff_r5,0x3d);
  iRam2c0f7fc0 = unaff_r5 << 0x11;
  *(char *)(uRam2c0f7fc4 + 0x12) = (char)uRam2c0f7fc4;
  software_interrupt(0x39);
  *(undefined1 *)(param_3 + 3) = 0;
  uRam2c0f7fb8 = param_1;
  puRam2c0f7fbc = &stack0x00000144;
  if ((uRam2c0f7fc4 & 0x20000) == 0) {
    coprocessor_storelong(5,in_cr13,unaff_r10 + 0x1f0);
    coprocessor_loadlong(5,in_cr2,&stack0x00000004);
    VectorMultiplySubtractLong(in_d4,in_d29,4,1);
    *(undefined4 *)(*(int *)(uRam2c0f7fc4 * 0x800 + 0x18) + 0x5c) =
         *(undefined4 *)(uRam2c0f7fc4 * 0x800 + 0x10);
    puVar2 = &stack0x00000004;
    while( true ) {
      VectorMultiplySubtractLong(in_d6,in_d29,1,1);
      coprocessor_loadlong(5,in_cr10,puVar2 + 0x14);
      VectorMultiplySubtractLong(unaff_d10,in_d29,1,1);
      software_bkpt(0xe0);
      do {
      } while (bVar3);
      VectorMultiplySubtractLong(unaff_d9,in_d29,1,1);
      VectorMultiplySubtractLong(unaff_d10,in_d29,2,1);
      iVar1 = (int)(puVar2 + 0x2c0f7de0) * 0x10000;
      if (((uint)(puVar2 + 0x2c0f7de0) & 0x10000) == 0 || iVar1 == 0) break;
      bVar3 = SBORROW4(iVar1,0x18600);
      puVar2 = puVar2 + 0x14;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_00000140 = 0xf0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

