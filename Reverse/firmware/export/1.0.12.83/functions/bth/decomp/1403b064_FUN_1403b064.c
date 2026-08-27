/* FUN_1403b064 @ 0x1403b064 */

int FUN_1403b064(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_1403b10c;
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(DAT_1403b10c + 0x78) == 0) {
    FUN_1402a6e8(4,0x2c,DAT_1403b120,DAT_1403b11c,DAT_1403b118);
  }
  else {
    FUN_140e5148(*(int *)(DAT_1403b10c + 0x78),0xffffffff);
  }
  if ((*(char *)(iVar1 + 7) != '\0') && (iVar2 = FUN_140db784(DAT_1403b10c,param_1,6), iVar2 == 0))
  {
    if (*(int *)(iVar1 + 0x78) == 0) {
      return DAT_1403b10c;
    }
    FUN_140e52d8();
    return DAT_1403b10c;
  }
  if ((*(char *)(iVar1 + 0x2f) == '\0') ||
     (iVar2 = FUN_140db784(DAT_1403b110,param_1,6), iVar2 != 0)) {
    if ((*(char *)(iVar1 + 0x57) == '\0') ||
       (iVar2 = FUN_140db784(DAT_1403b114,param_1,6), iVar2 != 0)) {
      if (*(int *)(iVar1 + 0x78) != 0) {
        FUN_140e52d8();
      }
      iVar2 = 0;
    }
    else {
      iVar2 = DAT_1403b114;
      if (*(int *)(iVar1 + 0x78) != 0) {
        FUN_140e52d8();
        iVar2 = DAT_1403b114;
      }
    }
  }
  else {
    iVar2 = DAT_1403b110;
    if (*(int *)(iVar1 + 0x78) != 0) {
      FUN_140e52d8();
      return DAT_1403b110;
    }
  }
  return iVar2;
}

