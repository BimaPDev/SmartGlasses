/* FUN_100fbb98 @ 0x100fbb98 */

void FUN_100fbb98(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)*param_1;
  piVar4 = piVar3;
  if (piVar3 == (int *)0x0) {
    return;
  }
  do {
    while( true ) {
      piVar2 = (int *)piVar4[2];
      *piVar4 = *piVar2;
      if ((int)((uint)*(ushort *)(piVar4 + 3) << 0x1c) < 0) break;
      piVar4[2] = (int)(piVar2 + -1);
      piVar4[4] = piVar4[4] + -1;
      piVar2 = piVar4 + 1;
      piVar4 = (int *)*piVar2;
      if ((int *)*piVar2 == (int *)0x0) goto LAB_100fbbc4;
    }
    piVar4[2] = (int)(piVar2 + 1);
    piVar4[4] = piVar4[4] + -1;
    piVar2 = piVar4 + 1;
    piVar4 = (int *)*piVar2;
  } while ((int *)*piVar2 != (int *)0x0);
LAB_100fbbc4:
  piVar4 = (int *)piVar3[1];
  do {
    piVar2 = param_1;
    if (piVar4 == (int *)0x0) {
      return;
    }
    while (*piVar3 <= *piVar4) {
      piVar2 = piVar3 + 1;
      piVar1 = piVar4 + 1;
      piVar3 = piVar4;
      piVar4 = (int *)*piVar1;
      if ((int *)*piVar1 == (int *)0x0) {
        return;
      }
    }
    *piVar2 = (int)piVar4;
    piVar3[1] = piVar4[1];
    piVar4[1] = (int)piVar3;
    piVar3 = (int *)*param_1;
    piVar4 = (int *)piVar3[1];
  } while( true );
}

