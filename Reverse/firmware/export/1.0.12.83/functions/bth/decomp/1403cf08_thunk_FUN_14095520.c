/* thunk_FUN_14095520 @ 0x1403cf08 */

void thunk_FUN_14095520(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_14095550;
  while( true ) {
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      *piVar1 = param_1;
      piVar1[1] = param_2;
      return;
    }
    piVar1 = piVar1 + 2;
    if (iVar2 == param_1) break;
    if (DAT_14095550 + 0x40 == piVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x41,DAT_14095554);
    }
  }
  return;
}

