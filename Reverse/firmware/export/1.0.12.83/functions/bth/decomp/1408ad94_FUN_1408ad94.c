/* FUN_1408ad94 @ 0x1408ad94 */

undefined1 FUN_1408ad94(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar4;
  int *piVar5;
  int *piVar3;
  
  if (param_1 == 0) {
    return 0xff;
  }
  piVar5 = DAT_1408adc4 + 8;
  piVar2 = DAT_1408adc4;
  while( true ) {
    piVar3 = piVar2 + 1;
    iVar4 = *piVar2;
    if ((iVar4 != 0) && (iVar1 = FUN_140db784(param_1,iVar4 + 8,6), iVar1 == 0)) break;
    piVar2 = piVar3;
    if (piVar3 == piVar5) {
      return 0xff;
    }
  }
  return *(undefined1 *)(iVar4 + 0x11);
}

