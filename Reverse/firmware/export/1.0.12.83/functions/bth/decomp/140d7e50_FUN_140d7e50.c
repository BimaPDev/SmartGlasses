/* FUN_140d7e50 @ 0x140d7e50 */

int FUN_140d7e50(int *param_1,undefined4 param_2,int *param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar3 = *(int *)(*param_1 + -8);
  local_24 = 0;
  local_20 = 0;
  piVar1 = *(int **)(*(int *)((int)param_1 + iVar3) + -4);
  local_1c = 0x10;
  if ((piVar1 == *(int **)(*param_1 + -4)) &&
     ((**(code **)(*piVar1 + 0x1c))
                (piVar1,param_4,6,param_3,(int)param_1 + iVar3,param_2,param_1,&local_24),
     local_24 != 0)) {
    if ((local_20._2_1_ & 6) == 6) {
      return local_24;
    }
    if (((byte)local_20 & local_20._1_1_ & 6) == 6) {
      return local_24;
    }
    if (((local_20._1_1_ & 5) != 4) && (local_20._2_1_ == 0)) {
      if (param_4 < 0) {
        if (param_4 == -2) {
          uVar2 = 0;
        }
        else {
          uVar2 = (**(code **)(*param_3 + 0x20))(param_3,param_4,local_24,param_2,param_1);
        }
      }
      else if (param_1 == (int *)(local_24 + param_4)) {
        uVar2 = 6;
      }
      else {
        uVar2 = 0;
      }
      if ((uVar2 & 6) == 6) {
        return local_24;
      }
    }
  }
  return 0;
}

