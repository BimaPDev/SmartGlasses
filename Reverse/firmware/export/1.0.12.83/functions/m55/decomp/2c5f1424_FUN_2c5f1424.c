/* FUN_2c5f1424 @ 0x2c5f1424 */

undefined4 FUN_2c5f1424(code *param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (param_3 <= param_4) {
    return 0;
  }
  uVar1 = *(undefined1 *)(param_2 + param_3);
  *(undefined1 *)(param_2 + param_3) = 0;
  uVar2 = (*param_1)(param_2 + param_4);
  *(undefined1 *)(param_2 + param_3) = uVar1;
  return uVar2;
}

