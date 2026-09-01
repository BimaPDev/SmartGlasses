/* FUN_1008cb9c @ 0x1008cb9c */

undefined4 FUN_1008cb9c(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = DAT_1008cbe8;
  if (param_1 == 0) {
    uVar2 = 0;
    if (*DAT_1008cbe8 != 0) {
      uVar2 = 1;
    }
  }
  else {
    iVar4 = 0;
    do {
      iVar3 = piVar1[iVar4 * 2];
      if (iVar3 != 0) {
        if (*(char *)(iVar3 + 4) != '\x02') {
          return 1;
        }
        if ((int)((uint)*(byte *)(iVar3 + 0x1c) << 0x1f) < 0) {
          iVar3 = FUN_1012ab98();
        }
        else {
          iVar3 = FUN_1012aa22(param_1,iVar3 + 8,*(undefined4 *)(iVar3 + 0x18));
        }
        if (iVar3 == 0) {
          return 1;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x10);
    uVar2 = 0;
  }
  return uVar2;
}

