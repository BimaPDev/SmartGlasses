/* FUN_14051b8c @ 0x14051b8c */

undefined1 FUN_14051b8c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  
  iVar2 = FUN_1404a1b4();
  iVar3 = FUN_1404a1b4(0);
  if ((*(char *)(iVar3 + 0xda) == '\x01') ||
     (iVar3 = FUN_1404a1b4(0), *(char *)(iVar3 + 0xdc) != '\0')) {
    if ((*(char *)(DAT_14051c3c + 0x185) == '\0') ||
       (((*(char *)(DAT_14051c3c + 0x188) != '\0' && (*(char *)(iVar2 + 0xd9) != '\x01')) &&
        (1 < *(byte *)(iVar2 + 0xd8) - 2)))) {
      return 0;
    }
    if (param_1 != 0) {
      iVar3 = FUN_1404a1b4(0);
      cVar1 = *(char *)(iVar3 + 0xdc);
      *(undefined1 *)(iVar2 + 0xdc) = 1;
      iVar2 = FUN_1404a1b4(0);
      cVar4 = '\0';
      if (*(char *)(iVar2 + 0xda) != '\x01') {
        cVar4 = -1;
      }
      if (cVar4 == -1) {
        if (cVar1 == '\0') {
          return 1;
        }
        iVar2 = FUN_1404a1b4(0);
        *(undefined1 *)(iVar2 + 0xdd) = 1;
        FUN_14050d50(param_1,1);
        return 2;
      }
      FUN_14050de0(0);
      FUN_14050d50(param_1,1);
      return 2;
    }
  }
  *(undefined1 *)(iVar2 + 0xdc) = 1;
  return 1;
}

