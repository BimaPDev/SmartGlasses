/* FUN_1011dce4 @ 0x1011dce4 */

undefined4 FUN_1011dce4(int param_1,int param_2)

{
  undefined4 uVar1;
  int local_10;
  int local_c;
  
  if (param_2 == 2) {
    param_2 = 0;
  }
  else if (param_2 == 3) {
    param_2 = 1;
  }
  local_c = 0;
  local_10 = param_2;
  FUN_1011dcde(*(undefined4 *)(param_1 + 0xc),3,&local_10);
  uVar1 = 0;
  if (local_c != 0) {
    if (param_2 == 0) {
      uVar1 = *(undefined4 *)(local_c + 0x30);
    }
    else if (param_2 == 1) {
      uVar1 = *(undefined4 *)(local_c + 0x2c);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

