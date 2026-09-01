/* FUN_1011f002 @ 0x1011f002 */

undefined4 FUN_1011f002(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)**(undefined4 **)(param_1 + 4);
  if (param_2 == 0) {
    uVar1 = uVar1 & 0xfffeffff;
  }
  else {
    uVar1 = uVar1 | 0x10000;
  }
  *(uint *)**(undefined4 **)(param_1 + 4) = uVar1;
  return 0;
}

