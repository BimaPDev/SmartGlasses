/* FUN_2c44d6c2 @ 0x2c44d6c2 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c44d6c2(int param_1,int param_2,uint param_3,int param_4)

{
  code *pcVar1;
  int unaff_r4;
  int unaff_r5;
  uint uVar2;
  int unaff_r6;
  int unaff_r11;
  int in_r12;
  char in_OV;
  bool bVar3;
  undefined4 in_cr8;
  undefined4 in_cr14;
  
  if (param_4 >> 0xb == 0) {
    if (in_OV == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar3 = false;
    if (in_OV != '\0') {
      uRam00000013 = *(undefined1 *)((param_3 & 0xff) + 0x1e);
      coprocessor_loadlong(4,in_cr8,param_2 + 0xb0);
      *(char *)(param_2 + 8) = (char)param_3;
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0x4e,0x2c44d4da);
      (*pcVar1)();
    }
  }
  else {
    bVar3 = SBORROW4(unaff_r6,0x8d);
    *(short *)(param_1 + 0x28) = (short)unaff_r4;
  }
  if (bVar3) {
    coprocessor_loadlong(10,in_cr14,unaff_r11 + 0x37c);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = *(uint *)(*(char *)(unaff_r5 + unaff_r4) + 0x5c);
  *(ushort *)(unaff_r5 + 0x20) = (ushort)(uVar2 >> 0x1d);
  *(uint *)param_3 = param_3;
  *(uint *)(param_3 + 4) = uVar2 >> 0x1d;
  *(int *)(param_3 + 8) = unaff_r4;
  *(int *)(param_3 + 0xc) = unaff_r5;
  *(uint *)(param_3 + 0x10) = uVar2;
  bVar3 = (bool)hasExclusiveAccess((int *)(in_r12 + 0x144));
  if (bVar3) {
    *(int *)(in_r12 + 0x144) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

