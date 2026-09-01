/* FUN_100194a0 @ 0x100194a0 */

void FUN_100194a0(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  piVar1 = DAT_10019570;
  iVar5 = *DAT_1001956c;
  if ((*(byte *)(DAT_10019570 + 0x12) & 1) == 0) {
    if (*DAT_1001956c != iVar5) goto LAB_100194c4;
  }
  else {
    if (*DAT_10019570 == 0) {
      if (DAT_10019570[2] == 0) {
        iVar3 = FUN_10018fa0();
        piVar1[2] = iVar3;
        if (iVar3 == 0) {
          if (*DAT_1001956c == iVar5) {
            uVar2 = (DAT_10019574 - DAT_10019578) * 0x20 & 0xff00U | 0x1380011;
            uVar4 = DAT_1001958c;
            goto LAB_100194e0;
          }
          goto LAB_100194c4;
        }
      }
      FUN_1011dbf4(DAT_10019590,0xffffffff);
      FUN_100e74e4(piVar1[2]);
      FUN_100e74c0(1);
      if (*DAT_1001956c == iVar5) {
        FUN_10113e2c(DAT_10019590);
        return;
      }
    }
    else if (*DAT_1001956c == iVar5) {
      uVar2 = DAT_10019584 | (DAT_10019574 - DAT_10019578) * 0x20 & 0xff00U;
      uVar4 = DAT_10019588;
      goto LAB_100194e0;
    }
LAB_100194c4:
    FUN_1013cdc0();
  }
  uVar2 = (DAT_10019574 - DAT_10019578) * 0x20 & 0xff00U | 0x12c0031;
  uVar4 = DAT_1001957c;
LAB_100194e0:
  FUN_100a5b78(uVar2,DAT_10019580,uVar4);
  return;
}

