/* FUN_100a22ac @ 0x100a22ac */

int FUN_100a22ac(void)

{
  int *piVar1;
  int iVar2;
  undefined4 in_r3;
  
  piVar1 = DAT_100a22e4;
  if (*(int *)(*DAT_100a22e4 + 0xc) == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = FUN_1012d932();
    iVar2 = iVar2 - *(int *)(*piVar1 + 0xc);
  }
  FUN_100a5b78(DAT_100a22f0 | (DAT_100a22ec - DAT_100a22e8) * 0x20 & 0xff00U,DAT_100a22f8,
               DAT_100a22f4,iVar2,in_r3);
  return iVar2;
}

