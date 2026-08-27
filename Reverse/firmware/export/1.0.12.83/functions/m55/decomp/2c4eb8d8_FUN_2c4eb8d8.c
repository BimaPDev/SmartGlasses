/* FUN_2c4eb8d8 @ 0x2c4eb8d8 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4eb8d8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  **(undefined1 **)(param_1 + 0x14) = 1;
  *(char *)(param_1 + 0x19) = (char)param_4;
  if (param_4 < *(short *)(param_1 + 0xc)) {
    uVar1 = FUN_2c62bdd8(_DAT_2c4eb924,*(short *)(param_1 + 0xc) * 1000,param_1);
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    FUN_2c62be70(uVar1,1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

