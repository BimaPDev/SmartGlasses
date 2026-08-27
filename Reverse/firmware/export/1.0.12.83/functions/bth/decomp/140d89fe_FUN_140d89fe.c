/* FUN_140d89fe @ 0x140d89fe */

void FUN_140d89fe(int param_1,undefined4 param_2)

{
  undefined4 uStack_c;
  
  *(undefined4 *)(param_1 + 4) = 6;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x1002;
  uStack_c = param_2;
  FUN_140c0d60(&uStack_c);
  FUN_140c0394(param_1 + 0x6c,&uStack_c);
  FUN_140c0378(&uStack_c);
  return;
}

