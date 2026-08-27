/* FUN_2c066c24 @ 0x2c066c24 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c066c24(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int extraout_r1;
  uint extraout_r2;
  code *extraout_r2_00;
  int iVar2;
  int extraout_r3;
  code *unaff_r4;
  int unaff_r5;
  
  *(int *)(unaff_r4 + 0x54) = unaff_r5;
  iVar2 = *(int *)(_DAT_2c066d38 + 0x60) - unaff_r5;
  sVar1 = *(short *)(unaff_r4 + iVar2);
  *(code **)(*(int *)(_DAT_2c066d38 + 0x60) + unaff_r5) = unaff_r4;
  (*unaff_r4)((int)sVar1,param_2,(int)sVar1,iVar2,param_3,param_4);
  *(char *)(extraout_r3 + extraout_r1) = (char)(extraout_r2 >> 0x17);
  iVar2 = func_0x2b878c64();
  (*extraout_r2_00)((int)extraout_r2_00 * iVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

