/* FUN_100d9fd8 @ 0x100d9fd8 */

void FUN_100d9fd8(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = (DAT_100da040 - DAT_100da044) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_100da048 | uVar3,DAT_100da050,DAT_100da04c);
  if ((param_2 == 0) && (iVar1 = FUN_1013662e(0), iVar1 == 0)) {
    uVar3 = uVar3 | 0x2ac0011;
    uVar2 = DAT_100da054;
  }
  else {
    iVar1 = FUN_101364ba(param_2);
    if (iVar1 == 0) {
      uVar2 = FUN_100ddcbc(param_2,1);
      FUN_100a5b78(DAT_100da060 | uVar3,DAT_100da050,DAT_100da064,uVar2);
      return;
    }
    uVar3 = DAT_100da058 | uVar3;
    uVar2 = DAT_100da05c;
  }
  FUN_100a5b78(uVar3,DAT_100da050,uVar2);
  return;
}

