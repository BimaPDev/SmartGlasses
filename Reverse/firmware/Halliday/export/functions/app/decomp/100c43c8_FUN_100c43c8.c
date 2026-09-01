/* FUN_100c43c8 @ 0x100c43c8 */

undefined4 FUN_100c43c8(void)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = (int *)*DAT_100c43f4;
  if (piVar2 == (int *)0x0) {
    return 3;
  }
  if ((piVar2[2] != 0) && (*piVar2 != 0)) {
    return 1;
  }
  if (piVar2[1] != 0) {
    return 2;
  }
  if (*piVar2 == 0) {
    uVar1 = 3;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

