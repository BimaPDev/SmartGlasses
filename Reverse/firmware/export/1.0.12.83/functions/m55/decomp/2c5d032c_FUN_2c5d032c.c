/* FUN_2c5d032c @ 0x2c5d032c */

void FUN_2c5d032c(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = param_1 + 1;
  do {
    puVar5 = puVar4;
    if (param_2 == puVar4) {
      return;
    }
    while( true ) {
      puVar4 = puVar5 + 1;
      puVar3 = (uint *)*puVar5;
      if (*(uint *)*param_1 <= *puVar3) break;
      if (param_1 != puVar5) {
        FUN_2c673eb8(param_1 + 1,param_1,(int)puVar5 - (int)param_1,*(uint *)*param_1,param_4);
      }
      *param_1 = puVar3;
      puVar5 = puVar4;
      if (param_2 == puVar4) {
        return;
      }
    }
    puVar2 = (uint *)puVar5[-1];
    puVar1 = puVar5 + -1;
    if (*puVar3 < *puVar2) {
      do {
        puVar5 = puVar1;
        puVar5[1] = puVar2;
        puVar2 = (uint *)puVar5[-1];
        puVar1 = puVar5 + -1;
      } while (*puVar3 < *puVar2);
    }
    *puVar5 = puVar3;
  } while( true );
}

