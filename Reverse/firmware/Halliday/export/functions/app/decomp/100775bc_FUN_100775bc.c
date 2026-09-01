/* FUN_100775bc @ 0x100775bc */

undefined4 FUN_100775bc(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  uVar3 = (DAT_10077614 - DAT_10077610) * 0x20 & 0xff00;
  if (param_1 == 0) {
    if ((int)(*DAT_10077618 << 0x18) < 0) {
      uVar2 = (undefined1)(*DAT_10077618 & 0x38);
      if ((*DAT_10077618 & 0x38) != 0) {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0xff;
    }
    *param_2 = uVar2;
    FUN_100a5b78(DAT_1007761c | uVar3,DAT_10077624,DAT_10077620,0,*param_2,param_2);
    uVar1 = 0;
  }
  else {
    FUN_100a5b78(DAT_10077628 | uVar3,DAT_10077624,DAT_1007762c,param_1,param_1,param_2);
    uVar1 = 0xffffffea;
  }
  return uVar1;
}

