/* FUN_1405d6bc @ 0x1405d6bc */

undefined4 FUN_1405d6bc(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0xb) {
    uVar1 = *(undefined4 *)(DAT_1405d6cc + (param_1 + 0x1a) * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

