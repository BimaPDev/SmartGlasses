/* FUN_2c612898 @ 0x2c612898 */

int FUN_2c612898(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_2c62c3b0(param_1,0x28);
  if (param_2 == 0) {
    return 0;
  }
  iVar2 = FUN_2c614f58(param_2);
  if (iVar2 == 0) {
    if (*(int *)(param_2 + 8) == 0) {
      return 0;
    }
    param_1[2] = param_3;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[3] = param_4;
  }
  else {
    param_1[2] = param_3;
    *(char *)(param_1 + 4) = (char)iVar2;
    param_1[3] = param_4;
    if (iVar2 == 1) {
      iVar2 = FUN_2c66c4ec(param_2);
      iVar2 = FUN_2c62be98(0x40,iVar2 + 1);
      param_1[1] = iVar2;
      if (iVar2 == 0) {
        return 0;
      }
      FUN_2c6435c4(iVar2,param_2);
      goto LAB_2c6128c8;
    }
  }
  param_1[1] = param_2;
LAB_2c6128c8:
  puVar3 = (undefined4 *)FUN_2c62ca10(DAT_2c612970);
  uVar1 = DAT_2c612970;
  if (puVar3 == (undefined4 *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    do {
      if ((((code *)*puVar3 != (code *)0x0) && (puVar3[1] != 0)) &&
         (iVar2 = (*(code *)*puVar3)(puVar3,param_2,param_1 + 5), iVar2 == 1)) {
        *param_1 = puVar3;
        iVar2 = (*(code *)puVar3[1])(puVar3,param_1);
        if (iVar2 == 1) {
          return 1;
        }
        FUN_2c62c3b0(param_1 + 5,4);
        param_1[8] = 0;
        param_1[6] = 0;
        param_1[9] = 0;
        param_1[7] = 0;
      }
      puVar3 = (undefined4 *)FUN_2c62ca20(uVar1,puVar3);
    } while (puVar3 != (undefined4 *)0x0);
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    FUN_2c62bea8(param_1[1]);
  }
  return iVar2;
}

