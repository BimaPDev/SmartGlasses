/* FUN_100100ac @ 0x100100ac */

void FUN_100100ac(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *DAT_100100d4;
  uVar2 = FUN_10010520();
  if (*DAT_100100d4 != iVar3) {
    uVar2 = FUN_1013cdc0();
  }
  piVar1 = DAT_100109dc;
  iVar4 = *DAT_100109d0;
  FUN_100a5b78((DAT_100109d4 - DAT_100109d8) * 0x20 & 0xff00U | 0x710031,DAT_100109e4,DAT_100109e0,
               DAT_100109d8,uVar2);
  iVar3 = *piVar1;
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 0x2c) != 0) {
      FUN_10116598(iVar3 + 0x10);
      FUN_100a84e0(*(undefined4 *)(*piVar1 + 0x2c));
      FUN_100a8428(*(undefined4 *)(*piVar1 + 0x2c));
    }
    FUN_1012d1f4(*piVar1);
    *piVar1 = 0;
  }
  if (*DAT_100109d0 != iVar4) {
    FUN_1013cdc0();
  }
  return;
}

