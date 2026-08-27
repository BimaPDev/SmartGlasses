/* FUN_2c45ef76 @ 0x2c45ef76 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c45ef76(undefined4 param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 extraout_r1;
  int extraout_r3;
  int unaff_r4;
  int unaff_r5;
  
  func_0x2b57b8ac(param_1,FUN_2c45f112,unaff_r5 << 0x1c);
  *(short *)(unaff_r4 + 0x1c) = (short)&stack0x00000228;
  *(char *)(unaff_r4 + unaff_r5) = (char)extraout_r1;
  puVar2 = _LAB_2c45f1f4;
  bVar1 = *(byte *)(extraout_r3 + 5);
  *(int *)(unaff_r5 + 0x20) = extraout_r3;
  *puVar2 = extraout_r1;
  puVar2[1] = (uint)bVar1;
  puVar2[2] = extraout_r3;
  puVar2[3] = puVar2;
  puVar2[4] = 0xa5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

