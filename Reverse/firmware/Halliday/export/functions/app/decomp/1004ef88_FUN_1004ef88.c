/* FUN_1004ef88 @ 0x1004ef88 */

void FUN_1004ef88(int param_1)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  puVar2 = DAT_1004f078;
  iVar4 = *DAT_1004f05c;
  uVar5 = (DAT_1004f060 - DAT_1004f064) * 0x20 & 0xff00;
  if (*DAT_1004f068 == '\0') {
    if (*DAT_1004f05c != iVar4) goto LAB_1004efb4;
  }
  else {
    if (param_1 == 0) {
      if (*DAT_1004f05c == iVar4) {
        uVar5 = uVar5 | 0xb30000;
        uVar3 = DAT_1004f074;
        goto LAB_1004efc0;
      }
    }
    else {
      uVar1 = *(undefined2 *)(DAT_1004f078 + 2);
      FUN_10126e28(param_1,0x100,0);
      FUN_10126e32(param_1,0);
      FUN_10126e3c(param_1,0);
      FUN_10126e28(param_1,uVar1,0);
      FUN_100a5b78(uVar5 | 0xc40031,DAT_1004f070,DAT_1004f07c,uVar1);
      FUN_10126e32(param_1,0xb4,0);
      FUN_10126e3c(param_1,0xb4,0);
      FUN_100a5b78(uVar5 | 0xd10033,DAT_1004f070,DAT_1004f080,*puVar2,uVar1,param_1);
      if (*DAT_1004f05c == iVar4) {
        return;
      }
    }
LAB_1004efb4:
    FUN_1013cdc0();
  }
  uVar5 = uVar5 | 0xae0000;
  uVar3 = DAT_1004f06c;
LAB_1004efc0:
  FUN_100a5b78(uVar5 | 0x11,DAT_1004f070,uVar3);
  return;
}

