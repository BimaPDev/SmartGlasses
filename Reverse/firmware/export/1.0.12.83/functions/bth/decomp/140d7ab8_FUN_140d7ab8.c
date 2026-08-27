/* FUN_140d7ab8 @ 0x140d7ab8 */

void FUN_140d7ab8(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 < param_2) {
    FUN_140d7aa4(param_1,param_2 - uVar1);
  }
  else if (uVar1 != param_2) {
    FUN_140d7770();
  }
  return;
}

