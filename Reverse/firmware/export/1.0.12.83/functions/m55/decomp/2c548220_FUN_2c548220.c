/* FUN_2c548220 @ 0x2c548220 */

void FUN_2c548220(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = *(undefined1 **)(param_1 + 0x60);
  puVar4 = param_2 + 2;
  if ((undefined4 *)*param_2 == puVar4) {
    iVar3 = 0;
    if (param_2[1] != 0) {
      if (param_2[1] == 1) {
        *puVar1 = *(undefined1 *)(param_2 + 2);
        iVar3 = param_2[1];
        puVar1 = *(undefined1 **)(param_1 + 0x60);
      }
      else {
        FUN_2c674668();
        iVar3 = param_2[1];
        puVar1 = *(undefined1 **)(param_1 + 0x60);
      }
    }
    *(int *)(param_1 + 100) = iVar3;
    puVar1[iVar3] = 0;
    param_2[1] = 0;
    *(undefined1 *)*param_2 = 0;
    return;
  }
  *(undefined4 **)(param_1 + 0x60) = (undefined4 *)*param_2;
  *(undefined4 *)(param_1 + 100) = param_2[1];
  if (puVar1 == (undefined1 *)(param_1 + 0x68)) {
    *(undefined4 *)(param_1 + 0x68) = param_2[2];
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x68) = param_2[2];
    if (puVar1 != (undefined1 *)0x0) {
      *param_2 = puVar1;
      param_2[2] = uVar2;
      param_2[1] = 0;
      *puVar1 = 0;
      return;
    }
  }
  *param_2 = puVar4;
  param_2[1] = 0;
  *(undefined1 *)puVar4 = 0;
  return;
}

