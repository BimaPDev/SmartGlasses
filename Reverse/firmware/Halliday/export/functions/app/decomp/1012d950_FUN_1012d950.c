/* FUN_1012d950 @ 0x1012d950 */

undefined4 FUN_1012d950(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)0x0;
  puVar2 = (undefined4 *)*param_1;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    if (puVar2 == param_2) break;
    puVar1 = puVar2;
    puVar2 = (undefined4 *)*puVar2;
  }
  uVar3 = *param_2;
  if (puVar1 == (undefined4 *)0x0) {
    *param_1 = uVar3;
    if (param_2 == (undefined4 *)param_1[1]) {
      param_1[1] = uVar3;
    }
  }
  else {
    *puVar1 = uVar3;
    if (param_2 == (undefined4 *)param_1[1]) {
      param_1[1] = puVar1;
    }
  }
  *param_2 = 0;
  return 1;
}

