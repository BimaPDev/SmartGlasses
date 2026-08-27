/* FUN_2c66ae30 @ 0x2c66ae30 */

void FUN_2c66ae30(undefined4 *param_1,undefined4 *param_2,uint param_3,int param_4)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  puVar2 = param_1;
  if (param_4 == 2) {
    do {
      uVar1 = *(undefined1 *)puVar2;
      puVar3 = (undefined4 *)((int)puVar2 + 1);
      *(undefined1 *)puVar2 = *(undefined1 *)param_2;
      *(undefined1 *)param_2 = uVar1;
      puVar2 = puVar3;
      param_2 = (undefined4 *)((int)param_2 + 1);
    } while (0 < (int)((int)param_1 + (param_3 - (int)puVar3)));
  }
  else {
    param_3 = param_3 >> 2;
    do {
      param_3 = param_3 - 1;
      uVar4 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar4;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (0 < (int)param_3);
  }
  return;
}

