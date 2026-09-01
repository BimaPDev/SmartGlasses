/* FUN_1011a4ae @ 0x1011a4ae */

int * FUN_1011a4ae(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      param_1 = (int *)0x0;
    }
    else {
      uVar2 = param_1[1];
      if ((uint)param_1[2] < uVar2) {
        while( true ) {
          uVar1 = param_1[2];
          if (uVar2 <= uVar1) break;
          if (0x20 < *(byte *)(*param_1 + uVar1)) {
            return param_1;
          }
          param_1[2] = uVar1 + 1;
        }
        if (uVar2 == uVar1) {
          param_1[2] = uVar2 - 1;
        }
      }
    }
  }
  return param_1;
}

