/* FUN_2c602428 @ 0x2c602428 */

void FUN_2c602428(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*DAT_2c602450;
  do {
    if (piVar1 == (int *)0x0) {
      return;
    }
    while ((piVar1[1] != param_1 && (*piVar1 != param_1))) {
      piVar1 = (int *)piVar1[5];
      if (piVar1 == (int *)0x0) {
        return;
      }
    }
    *(byte *)(piVar1 + 7) = *(byte *)(piVar1 + 7) | 1;
    piVar1 = (int *)piVar1[5];
  } while( true );
}

