/* FUN_140d7fa0 @ 0x140d7fa0 */

undefined4
FUN_140d7fa0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,int param_7,int *param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  
  iVar1 = FUN_140d8044(param_1,param_4,param_3,param_4,param_1);
  if (iVar1 == 0) {
    if ((param_5 != param_7) || (iVar1 = FUN_140d8044(param_1,param_6), iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x140d8012. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x1c))
                        (*(int **)(param_1 + 8),param_2,param_3,param_4);
      return uVar2;
    }
    *(char *)((int)param_8 + 5) = (char)param_3;
  }
  else {
    *param_8 = param_5;
    *(char *)(param_8 + 1) = (char)param_3;
    if (param_2 < 0) {
      if (param_2 == -2) {
        *(undefined1 *)((int)param_8 + 6) = 1;
      }
    }
    else {
      if (param_7 == param_5 + param_2) {
        uVar3 = 6;
      }
      else {
        uVar3 = 1;
      }
      *(undefined1 *)((int)param_8 + 6) = uVar3;
    }
  }
  return 0;
}

