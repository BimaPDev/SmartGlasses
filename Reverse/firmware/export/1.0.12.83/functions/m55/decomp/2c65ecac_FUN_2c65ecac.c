/* FUN_2c65ecac @ 0x2c65ecac */

void FUN_2c65ecac(int *param_1,uint param_2,undefined1 param_3)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = param_1[1];
  if (uVar2 < param_2) {
    FUN_2c65ec98(param_1,param_2 - uVar2);
  }
  else {
    puVar1 = (uint *)(param_1 + 1);
    if (uVar2 != param_2) {
      param_1 = (int *)*param_1;
      param_3 = 0;
      *puVar1 = param_2;
    }
    if (uVar2 != param_2) {
      *(undefined1 *)((int)param_1 + param_2) = param_3;
    }
  }
  return;
}

