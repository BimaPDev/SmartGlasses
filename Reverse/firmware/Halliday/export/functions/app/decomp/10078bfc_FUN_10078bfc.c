/* FUN_10078bfc @ 0x10078bfc */

undefined4 FUN_10078bfc(int param_1)

{
  int *piVar1;
  
  piVar1 = DAT_10078c20;
  while( true ) {
    if (*piVar1 << 6 < 0) {
      return 0;
    }
    if (param_1 < 1) break;
    FUN_1011598c(1);
    param_1 = param_1 + -1;
  }
  return 0xfffffff5;
}

