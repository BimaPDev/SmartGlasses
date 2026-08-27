/* FUN_2c5d2130 @ 0x2c5d2130 */

void FUN_2c5d2130(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  
  param_2[1] = 0;
  *(undefined1 *)*param_2 = 0;
  uVar2 = DAT_2c5d21ac;
  piVar6 = *(int **)(param_1 + 0x24);
  piVar1 = *(int **)(param_1 + 0x20);
  while( true ) {
    if (piVar1 == piVar6) {
      if (param_2[1] != 0) {
        iVar5 = param_2[1] + -1;
        if (*(char *)(*param_2 + iVar5) == ',') {
          param_2[1] = iVar5;
          *(undefined1 *)(*param_2 + iVar5) = 0;
          return;
        }
      }
      return;
    }
    uVar3 = registry_lookup(*(undefined4 *)(*piVar1 + 8));
    uVar4 = FUN_2c66c4ec();
    if (0x7fffffffU - param_2[1] < uVar4) break;
    FUN_2c5d20d0(param_2,uVar3,uVar4,0x7fffffffU - param_2[1],param_4);
    if (param_2[1] == 0x7fffffff) break;
    FUN_2c5d20d0(param_2,uVar2,1,param_2[1],param_4);
    piVar1 = piVar1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c658680(DAT_2c5d21a8);
}

