/* FUN_100e0e08 @ 0x100e0e08 */

int FUN_100e0e08(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = DAT_100e0e40;
  iVar4 = 0;
  while ((iVar3 = iVar4 * 0x18 + *piVar1, *(char *)(iVar3 + 6) != '\x01' ||
         (iVar2 = FUN_1011ea30(param_1,iVar3,6), iVar2 != 0))) {
    iVar4 = iVar4 + 1;
    if (iVar4 == 8) {
      return 0;
    }
  }
  return iVar3;
}

