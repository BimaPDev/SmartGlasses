/* FUN_2c4bc1cc @ 0x2c4bc1cc */

void FUN_2c4bc1cc(void)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar2;
  
  if (*(int *)(DAT_2c4bc21c + 0x200) << 0x17 < 0) {
    UNRECOVERED_JUMPTABLE = (code *)*DAT_2c4bc220;
    uVar2 = *(uint *)(DAT_2c4bc228 + 0x34);
    uVar1 = FUN_2c4bc18c();
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      (*UNRECOVERED_JUMPTABLE)(0,uVar2 & 0xffff,uVar1);
    }
  }
  if (*(int *)(DAT_2c4bc21c + 0x204) << 2 < 0) {
    UNRECOVERED_JUMPTABLE = (code *)DAT_2c4bc220[1];
    uVar2 = *(uint *)(DAT_2c4bc224 + 0x34);
    uVar1 = FUN_2c4bc18c();
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c4bc200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(1,uVar2 & 0xffff,uVar1);
      return;
    }
  }
  return;
}

