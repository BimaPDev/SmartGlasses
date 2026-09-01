/* FUN_10116500 @ 0x10116500 */

void FUN_10116500(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1 != (int *)0x0) {
    iVar3 = param_1[5];
    if (iVar3 == 0) {
      iVar1 = param_3;
      FUN_10119dc2(DAT_1011658c,DAT_10116588,DAT_10116584,0x78,param_1,param_2,param_3,0,param_4);
      FUN_10119dc2(DAT_10116590);
      FUN_1011a1f0(DAT_10116584,0x78,iVar1,iVar3);
    }
    iVar3 = DAT_10116594;
    FUN_1013cfea(*(undefined4 *)(DAT_10116594 + 8),param_1);
    iVar1 = thunk_FUN_10115958();
    iVar3 = *(int *)(iVar3 + 8);
    piVar4 = *(int **)(iVar3 + 0xa8);
    param_1[2] = param_2;
    param_1[3] = param_3;
    param_1[4] = iVar1 + param_2;
    if ((int *)(iVar3 + 0xa8) != piVar4) {
      for (; piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
        if ((iVar1 + param_2) - piVar4[4] < 0) {
          piVar2 = (int *)piVar4[1];
          *param_1 = (int)piVar4;
          param_1[1] = (int)piVar2;
          *piVar2 = (int)param_1;
          piVar4[1] = (int)param_1;
          return;
        }
        if ((int *)*(int *)(iVar3 + 0xac) == piVar4) break;
      }
    }
    piVar4 = *(int **)(iVar3 + 0xac);
    *param_1 = iVar3 + 0xa8;
    param_1[1] = (int)piVar4;
    *piVar4 = (int)param_1;
    *(int **)(iVar3 + 0xac) = param_1;
  }
  return;
}

