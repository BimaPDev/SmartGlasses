/* FUN_14074d10 @ 0x14074d10 */

void FUN_14074d10(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 == param_2) {
    return;
  }
  iVar1 = 0x3ea;
  puVar3 = param_1;
  while( true ) {
    puVar2 = puVar3;
    puVar3 = (undefined4 *)*puVar2;
    if (param_1 == puVar3) {
      return;
    }
    iVar1 = iVar1 + -1;
    if (iVar1 == 0) break;
    if (puVar3 == param_2) {
      *puVar2 = *puVar3;
      if (puVar3 == (undefined4 *)param_1[1]) {
        param_1[1] = puVar2;
      }
      if (param_1[2] == 0) {
        return;
      }
      param_1[2] = param_1[2] + -1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140749f8();
}

