/* FUN_100b551c @ 0x100b551c */

int FUN_100b551c(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (DAT_100b5570 - DAT_100b556c) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_100b5574 | uVar1,DAT_100b557c,DAT_100b5578,param_1);
  do {
    if (*(int *)(param_1 + 0x2c) != 0) {
      iVar2 = 0;
      break;
    }
    iVar2 = FUN_100b51d8(param_1);
  } while (iVar2 == 0);
  FUN_100a5b78(DAT_100b5580 | uVar1,DAT_100b557c,DAT_100b5584,param_1,iVar2);
  return iVar2;
}

