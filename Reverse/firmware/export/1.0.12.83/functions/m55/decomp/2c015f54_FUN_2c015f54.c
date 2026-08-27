/* FUN_2c015f54 @ 0x2c015f54 */

int FUN_2c015f54(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = 0x1b;
  uVar4 = (uint)*(byte *)(DAT_2c015fac + 0x4a8);
  do {
    uVar4 = uVar4 + 1;
    if (uVar4 < 0x1b) {
      iVar5 = uVar4 * 0x2c + DAT_2c015fac;
      iVar6 = uVar4 * 0x2c + 4;
      cVar1 = *(char *)(iVar5 + 4);
    }
    else {
      uVar4 = 0;
      iVar6 = 4;
      cVar1 = *(char *)(DAT_2c015fac + 4);
      iVar5 = DAT_2c015fac;
    }
    if ((cVar1 != '\0') && (iVar5 = *(int *)(iVar5 + 0x24), iVar5 != 0)) {
      iVar3 = 0;
      do {
        iVar5 = *(int *)(iVar5 + 0x1c);
        iVar3 = iVar3 + 1;
      } while (iVar5 != 0);
      if (iVar3 != 0) {
        return DAT_2c015fac + iVar6;
      }
    }
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}

