/* thunk_FUN_1011a4f8 @ 0x1011a5f2 */

undefined4 thunk_FUN_1011a4f8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    if (param_2 == param_1) {
      return 0;
    }
    iVar3 = param_1[2];
    if (iVar3 == 0) {
      param_1[2] = param_2;
      *param_2 = 0;
      param_2[1] = param_2;
    }
    else {
      puVar2 = *(undefined4 **)(iVar3 + 4);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = param_2;
        param_2[1] = puVar2;
        *(undefined4 **)(iVar3 + 4) = param_2;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}

