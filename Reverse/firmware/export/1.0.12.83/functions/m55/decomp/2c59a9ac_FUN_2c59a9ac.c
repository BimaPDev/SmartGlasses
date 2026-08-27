/* FUN_2c59a9ac @ 0x2c59a9ac */

void FUN_2c59a9ac(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = *(undefined1 **)(param_1 + 0x14);
  puVar4 = param_2 + 2;
  if ((undefined4 *)*param_2 == puVar4) {
    iVar3 = 0;
    if (param_2[1] != 0) {
      if (param_2[1] == 1) {
        *puVar1 = *(undefined1 *)(param_2 + 2);
        iVar3 = param_2[1];
        puVar1 = *(undefined1 **)(param_1 + 0x14);
      }
      else {
        FUN_2c674668();
        iVar3 = param_2[1];
        puVar1 = *(undefined1 **)(param_1 + 0x14);
      }
    }
    *(int *)(param_1 + 0x18) = iVar3;
    puVar1[iVar3] = 0;
    param_2[1] = 0;
    *(undefined1 *)*param_2 = 0;
    return;
  }
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)*param_2;
  *(undefined4 *)(param_1 + 0x18) = param_2[1];
  if (puVar1 == (undefined1 *)(param_1 + 0x1c)) {
    *(undefined4 *)(param_1 + 0x1c) = param_2[2];
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x1c) = param_2[2];
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

