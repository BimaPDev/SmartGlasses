/* FUN_2c5d21b0 @ 0x2c5d21b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5d21b0(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  
  param_2[1] = 0;
  *(undefined1 *)*param_2 = 0;
  uVar4 = _DAT_2c5d226c;
  uVar3 = _LAB_2c5d2268;
  puVar2 = _DAT_2c5d2264;
  piVar7 = *(int **)(param_1 + 0x24);
  piVar1 = *(int **)(param_1 + 0x20);
  while( true ) {
    if (piVar1 == piVar7) {
      if (param_2[1] != 0) {
        iVar6 = param_2[1] + -1;
        if (*(char *)(*param_2 + iVar6) == '|') {
          param_2[1] = iVar6;
          *(undefined1 *)(*param_2 + iVar6) = 0;
          return;
        }
      }
      return;
    }
    uVar8 = *(undefined4 *)(*piVar1 + 0x14);
    iVar6 = FUN_2c66b624(uVar8,*puVar2);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5d225c,0x180,uVar4,_DAT_2c5d2258);
    }
    uVar5 = FUN_2c66c4ec(uVar8);
    if ((0x7fffffffU - param_2[1] < uVar5) ||
       (FUN_2c5d20d0(param_2,uVar8,uVar5), param_2[1] == 0x7fffffff)) break;
    FUN_2c5d20d0(param_2,uVar3,1);
    piVar1 = piVar1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c658680(_LAB_2c5d2260);
}

