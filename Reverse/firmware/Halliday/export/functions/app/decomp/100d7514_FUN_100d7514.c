/* FUN_100d7514 @ 0x100d7514 */

undefined4 FUN_100d7514(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = DAT_100d753c;
  iVar3 = 0xac;
  do {
    iVar2 = FUN_1011ea30(param_1,*piVar1 + iVar3,6);
    if (iVar2 == 0) {
      return 1;
    }
    iVar3 = iVar3 + 0x28;
  } while (iVar3 != 0x14c);
  return 0;
}

