/* FUN_1001dcdc @ 0x1001dcdc */

undefined4 FUN_1001dcdc(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  undefined4 uVar6;
  
  bVar5 = false;
  iVar4 = *DAT_1001dd38;
  cVar3 = '\x03';
  piVar1 = DAT_1001dd3c;
  while( true ) {
    iVar2 = *piVar1;
    if ((((0x14 < iVar2 - 0x4cU) || (-1 < (int)((DAT_1001dd40 >> (iVar2 - 0x4cU & 0xff)) << 0x1f)))
        && (iVar2 != 0x17)) && ((iVar2 != 0x6d && (!bVar5)))) break;
    cVar3 = cVar3 + -1;
    bVar5 = true;
    uVar6 = 1;
    piVar1 = piVar1 + 1;
    if (cVar3 == '\0') {
LAB_1001dd22:
      if (*DAT_1001dd38 != iVar4) {
        FUN_1013cdc0();
      }
      return uVar6;
    }
  }
  FUN_1001dca0();
  uVar6 = 0;
  goto LAB_1001dd22;
}

