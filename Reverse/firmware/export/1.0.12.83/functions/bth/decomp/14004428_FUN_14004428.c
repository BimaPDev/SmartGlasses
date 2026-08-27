/* FUN_14004428 @ 0x14004428 */

undefined4 FUN_14004428(int param_1,int param_2)

{
  undefined4 uVar1;
  int local_c [2];
  
  if (param_1 == 0) {
    uVar1 = 0xfffffffc;
  }
  else if (param_2 == 0) {
    uVar1 = 0xffffff81;
  }
  else {
    local_c[0] = param_2;
    uVar1 = FUN_14005118(*(undefined4 *)(param_1 + 4),local_c,0);
  }
  return uVar1;
}

