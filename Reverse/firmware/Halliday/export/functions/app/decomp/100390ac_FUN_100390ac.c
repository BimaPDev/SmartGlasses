/* FUN_100390ac @ 0x100390ac */

int FUN_100390ac(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *DAT_100390e8;
  iVar1 = (**(code **)(DAT_100390ec + 0x1c))();
  if (iVar1 != 0) {
    FUN_10038a38(3);
    *(undefined1 *)(*DAT_100390f0 + 0x5b) = 3;
  }
  if (*DAT_100390e8 != iVar2) {
    FUN_1013cdc0();
  }
  return iVar1;
}

