/* FUN_100d0724 @ 0x100d0724 */

undefined4 FUN_100d0724(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)*DAT_100d0768;
  if (piVar3 == (int *)0x0) {
    return 3;
  }
  iVar2 = *piVar3;
  if ((iVar2 == 0) || (piVar3[1] == 0)) {
    if ((*DAT_100d076c != '\0') && ((iVar2 != 0 && (piVar3[2] != 0)))) {
      return 1;
    }
  }
  else if ((piVar3[2] != 0) || (*DAT_100d076c == '\0')) {
    return 4;
  }
  if (piVar3[1] != 0) {
    return 2;
  }
  if (iVar2 == 0) {
    uVar1 = 3;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

