/* FUN_140bfe38 @ 0x140bfe38 */

void FUN_140bfe38(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = DAT_140bfe9c;
  if (*DAT_140bfe9c == 0) {
    iVar3 = FUN_140e5138(DAT_140bfec4);
    *piVar1 = iVar3;
    iVar3 = *DAT_140bfea0;
    piVar1 = DAT_140bfea0;
  }
  else {
    iVar3 = *DAT_140bfea0;
    piVar1 = DAT_140bfea0;
  }
  DAT_140bfea0 = piVar1;
  if (iVar3 == 0) {
    iVar3 = FUN_140e5138(DAT_140bfec8);
    *piVar1 = iVar3;
  }
  FUN_140e5918(DAT_140bfea8,0x3fc,DAT_140bfea4);
  piVar1 = DAT_140bfeac;
  FUN_140e5918(DAT_140bfeb4,0xff,DAT_140bfeb0);
  FUN_140bfefc(DAT_140bfeb8);
  if (*piVar1 == 0) {
    iVar3 = FUN_140e51d8(DAT_140bfecc);
    *piVar1 = iVar3;
  }
  uVar2 = FUN_140e5418(DAT_140bfebc,0);
  *DAT_140bfec0 = uVar2;
  return;
}

