/* FUN_1013909a @ 0x1013909a */

void FUN_1013909a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  
  while (*(char *)(param_1 + 0x1c) != '\0') {
    FUN_1011dbde(param_1 + 0x20,0xffffffff,param_3,*(char *)(param_1 + 0x1c),param_4);
    param_3 = extraout_r2;
  }
  return;
}

