/* FUN_2c6442fc @ 0x2c6442fc */

undefined4 FUN_2c6442fc(int param_1,int param_2)

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
    uVar1 = FUN_2c6450ec(*(undefined4 *)(param_1 + 4),local_c,0);
  }
  return uVar1;
}

