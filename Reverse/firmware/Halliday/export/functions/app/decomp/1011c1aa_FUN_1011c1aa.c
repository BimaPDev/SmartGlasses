/* FUN_1011c1aa @ 0x1011c1aa */

undefined4 FUN_1011c1aa(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 != (undefined4 *)0x0) {
    if (param_2 == *(undefined4 **)(param_1 + 4)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *param_2;
    }
  }
  return uVar1;
}

