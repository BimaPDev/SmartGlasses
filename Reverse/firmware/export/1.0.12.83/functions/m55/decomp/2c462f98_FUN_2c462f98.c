/* FUN_2c462f98 @ 0x2c462f98 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c462f98(undefined4 param_1,int param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  int unaff_r4;
  int unaff_r5;
  uint uVar2;
  int unaff_r6;
  int unaff_r7;
  uint uStack000001b0;
  
  uStack000001b0 = unaff_r4 - 5;
  *(int *)(*(byte *)(unaff_r7 + 0xf) + 0x60) = unaff_r4;
  uVar1 = _LAB_2c463a90;
  uVar2 = uStack000001b0 >> 0x17;
  if ((uStack000001b0 >> 0x16 & 1) == 0 || uVar2 == 0) {
    *(int *)(unaff_r7 + 0x10) = unaff_r4 + -0x87;
    *(int *)(unaff_r4 + -0x83) = param_4;
    if (SBORROW4(unaff_r6,0xb3)) {
      *(char *)(unaff_r5 + 5) = (char)param_2 + 'r';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_2 != 0) {
    *(uint *)(unaff_r7 + 0x4c) = uVar2;
    *(uint *)(unaff_r7 + 0x18) = uVar2;
    software_bkpt(0x32);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_3 = param_4 + -0x75;
  param_3[1] = 0x60000000;
                    /* WARNING: Could not recover jumptable at 0x2c463746. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(param_3 + 2))(uVar1,&stack0x000000f0);
  return;
}

