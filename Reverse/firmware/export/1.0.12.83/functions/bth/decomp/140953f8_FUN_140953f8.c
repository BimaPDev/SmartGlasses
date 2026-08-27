/* FUN_140953f8 @ 0x140953f8 */

byte FUN_140953f8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  undefined4 local_24;
  undefined2 local_20;
  int local_1c;
  
  iVar1 = DAT_14095498;
  local_24 = *DAT_14095484;
  local_1c = *DAT_14095488;
  local_20 = (undefined2)DAT_14095484[1];
  if (*(char *)(DAT_14095498 + 0x12) != '\0') {
    if ((param_1 == 0) || (iVar2 = FUN_140db784(&local_24,param_1,6,0), iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x41,DAT_14095494,DAT_14095490);
    }
    iVar5 = DAT_1409548c + 0x23;
    iVar2 = DAT_1409548c;
    do {
      bVar4 = *(byte *)(iVar2 + 6);
      if ((bVar4 != 0) && (iVar3 = FUN_140db784(iVar2,param_1,6), iVar3 == 0)) goto LAB_14095452;
      iVar2 = iVar2 + 7;
    } while (iVar2 != iVar5);
    if (*(char *)(iVar1 + 0x12) != '\0') {
      bVar4 = *(byte *)(iVar1 + 0x14) ^ 1;
      goto LAB_14095452;
    }
  }
  bVar4 = 0;
LAB_14095452:
  if (*DAT_14095488 == local_1c) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

