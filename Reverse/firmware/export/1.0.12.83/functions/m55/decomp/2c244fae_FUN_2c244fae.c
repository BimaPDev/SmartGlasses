/* FUN_2c244fae @ 0x2c244fae */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c244fae(undefined4 param_1,undefined1 param_2)

{
  uint uVar1;
  int unaff_r4;
  int unaff_r6;
  undefined1 *unaff_r9;
  undefined8 uVar2;
  undefined8 in_d2;
  undefined8 in_d24;
  
  *unaff_r9 = param_2;
  uVar1 = (uint)bRam2c244fd4;
  *(char *)(unaff_r6 * 8 + 0xb) = (char)(unaff_r6 << 3);
  uVar2 = VectorAdd(in_d24,in_d2,1,1);
  SatQ(uVar2,1,1);
  if ((uVar1 - unaff_r4 & 0xfff) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

