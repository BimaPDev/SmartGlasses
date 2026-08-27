/* FUN_1406d7f8 @ 0x1406d7f8 */

bool FUN_1406d7f8(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*DAT_1406d800;
  while( true ) {
    if (piVar1 == (int *)param_1) {
      return true;
    }
    if (piVar1 == (int *)0x0) break;
    piVar1 = (int *)*piVar1;
  }
  return param_1 == 0;
}

