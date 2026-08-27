/* FUN_1406566c @ 0x1406566c */

byte FUN_1406566c(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while ((((iVar2 = FUN_1406d054(iVar3,param_2,param_1), iVar2 == 0 ||
           (*(byte *)(iVar2 + 0x13) != param_1)) ||
          ((*(char *)(iVar2 + 0x11) != '\x03' && (*(char *)(iVar2 + 0x11) != '\n')))) ||
         (*(int *)(iVar2 + 0x28) == 0))) {
    if (iVar3 != 0) {
      return 0x43;
    }
    iVar3 = 1;
  }
  bVar1 = *(byte *)(iVar2 + 0x12);
  *(byte *)(iVar2 + 0x34) = *(byte *)(iVar2 + 0x34) | 1;
  if ((bVar1 & 0xf) != 0) {
    return 0;
  }
  FUN_1406d210(iVar3,iVar2,4,0x44,param_4);
  return bVar1 & 0xf;
}

