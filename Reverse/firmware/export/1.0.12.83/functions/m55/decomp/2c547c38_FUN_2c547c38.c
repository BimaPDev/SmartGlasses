/* FUN_2c547c38 @ 0x2c547c38 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c547c38(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = FUN_2c5e317c(0xd,param_2,param_2,0,1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_DAT_2c547cf4,0xe0,_LAB_2c547cec,_LAB_2c547cf0,_LAB_2c547cec);
  }
  if (*(int *)(param_1 + 0x34) != 0 || *(int *)(param_1 + 0x30) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

