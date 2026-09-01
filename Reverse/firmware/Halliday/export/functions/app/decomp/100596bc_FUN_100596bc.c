/* FUN_100596bc @ 0x100596bc */

void FUN_100596bc(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    return;
  }
  if ((int)param_2 < 1) {
    uVar1 = 0x42;
  }
  else {
    uVar1 = 0x41;
  }
  FUN_1011ae5e(*(undefined4 *)(param_1 + 0x14),DAT_100596d8,
               (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f),uVar1);
  return;
}

