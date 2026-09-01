/* FUN_100a3890 @ 0x100a3890 */

void FUN_100a3890(undefined4 param_1,int param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_10112e84(DAT_100a38b0);
  if (iVar1 != 0) {
    if (param_2 == 0) {
      UNRECOVERED_JUMPTABLE = (code *)(*(undefined4 **)(iVar1 + 8))[1];
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)**(undefined4 **)(iVar1 + 8);
    }
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100a38a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

