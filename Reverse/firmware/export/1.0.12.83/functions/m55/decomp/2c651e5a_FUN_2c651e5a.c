/* FUN_2c651e5a @ 0x2c651e5a */

uint * FUN_2c651e5a(int param_1,uint *param_2,uint *param_3,undefined1 param_4,undefined1 *param_5)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    while (param_2 < param_3) {
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      iVar1 = FUN_2c66eb38(uVar2);
      uVar3 = param_4;
      if (iVar1 != -1) {
        uVar3 = (char)iVar1;
      }
      *param_5 = uVar3;
      param_5 = param_5 + 1;
    }
  }
  else {
    while (param_2 < param_3) {
      if (*param_2 < 0x80) {
        *param_5 = *(undefined1 *)(*param_2 + param_1 + 0xd);
      }
      else {
        iVar1 = FUN_2c66eb38();
        uVar3 = param_4;
        if (iVar1 != -1) {
          uVar3 = (char)iVar1;
        }
        *param_5 = uVar3;
      }
      param_5 = param_5 + 1;
      param_2 = param_2 + 1;
    }
  }
  return param_3;
}

