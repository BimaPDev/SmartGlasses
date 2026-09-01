/* FUN_100b62ec @ 0x100b62ec */

int FUN_100b62ec(void)

{
  int *piVar1;
  undefined4 in_r3;
  int iVar2;
  
  piVar1 = DAT_100b6330;
  iVar2 = *DAT_100b6330;
  if (*(int *)(iVar2 + 4) == 0) {
    iVar2 = FUN_100a03c0(*(undefined4 *)(iVar2 + 0xc),3,0,iVar2,in_r3);
    if (iVar2 == 0) {
      *(undefined4 *)(*piVar1 + 4) = 1;
    }
    else {
      FUN_100a5b78((DAT_100b6338 - DAT_100b6334) * 0x20 & 0xff00U | 0x440011,DAT_100b6340,
                   DAT_100b633c);
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

