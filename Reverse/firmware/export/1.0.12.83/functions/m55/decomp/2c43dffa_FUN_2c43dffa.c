/* FUN_2c43dffa @ 0x2c43dffa */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c43dffa(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int extraout_r1;
  int unaff_r5;
  int unaff_r10;
  char in_CY;
  undefined8 in_d3;
  undefined8 uVar2;
  undefined8 in_d31;
  undefined4 uStack00000050;
  int iStack0000016c;
  
  uStack00000050 = param_2;
  if (in_CY == '\0') {
    uStack00000050 = *(undefined4 *)(unaff_r5 + -0x36);
  }
  uVar2 = VectorAdd(in_d31,in_d3,2,0);
  SatQ(uVar2,2,0);
  cVar1 = *(char *)(unaff_r10 + 0x456);
  iStack0000016c = param_3;
  func_0x2d30bd9c(param_3 << 0x11,param_2);
  *(int *)(cVar1 + 0xf96) = extraout_r1 + -0x24;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

