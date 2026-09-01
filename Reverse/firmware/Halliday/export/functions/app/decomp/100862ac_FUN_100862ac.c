/* FUN_100862ac @ 0x100862ac */

undefined1 FUN_100862ac(uint param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_1 < 5) {
    uVar3 = *(undefined4 *)(DAT_100862d8 + param_1 * 4);
    FUN_100869d4(uVar3);
    uVar2 = FUN_1011b4a2(uVar3);
    if (uVar2 < 0x17) {
      uVar1 = *(undefined1 *)(DAT_100862dc + uVar2);
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}

