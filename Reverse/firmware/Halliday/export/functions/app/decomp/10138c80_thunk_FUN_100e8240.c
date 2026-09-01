/* thunk_FUN_100e8240 @ 0x10138c80 */

int thunk_FUN_100e8240(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*DAT_100e8258;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (*piVar1 == param_1) break;
    piVar1 = (int *)piVar1[2];
  }
  return piVar1[1];
}

