/* FUN_1008cadc @ 0x1008cadc */

undefined4 FUN_1008cadc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_1008cafc;
  if (param_1 == -1) {
    uVar1 = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(DAT_1008cafc + param_1 * 8);
    *(undefined4 *)(DAT_1008cafc + param_1 * 8) = 0;
    iVar2 = iVar2 + param_1 * 8;
  }
  if (param_1 != -1) {
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  return uVar1;
}

