/* FUN_1012d77a @ 0x1012d77a */

undefined4 FUN_1012d77a(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x54) == 0) {
    uVar1 = 0xfffffff3;
  }
  else {
    FUN_1012d1f4();
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return uVar1;
}

