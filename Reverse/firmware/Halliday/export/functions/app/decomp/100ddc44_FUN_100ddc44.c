/* FUN_100ddc44 @ 0x100ddc44 */

uint FUN_100ddc44(byte *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  undefined4 unaff_lr;
  
  if (param_1 == (byte *)0x0) {
    FUN_10119dc2(DAT_100ddc7c,DAT_100ddc78,DAT_100ddc74,0x169);
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0);
    }
    software_interrupt(2);
  }
  if (param_1 == (byte *)0x0) {
    uVar2 = 0xfffffffb;
  }
  else {
    if (param_2 == 0) {
      bVar3 = param_1[8] & 0xfb;
      uVar2 = 0;
    }
    else {
      uVar2 = *param_1 & 2;
      if ((*param_1 & 2) != 0) {
        uVar2 = (DAT_100df2e8 - DAT_100df2e4) * 0x20 & 0xff00;
        FUN_100a5b78(DAT_100df2ec | uVar2,DAT_100df2f0,DAT_100df2e4,uVar2,param_4,unaff_lr);
        return 0xfffffff0;
      }
      bVar3 = param_1[8] | 4;
    }
    param_1[8] = bVar3;
  }
  return uVar2;
}

