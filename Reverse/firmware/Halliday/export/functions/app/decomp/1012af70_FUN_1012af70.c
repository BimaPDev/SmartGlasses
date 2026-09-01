/* FUN_1012af70 @ 0x1012af70 */

int FUN_1012af70(undefined4 *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  uint local_14;
  int iStack_10;
  
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    return 0xb;
  }
  pcVar3 = *(code **)(iVar1 + 0x18);
  if (pcVar3 == (code *)0x0) {
    return 9;
  }
  local_14 = param_2;
  iStack_10 = param_3;
  if (*(short *)(iVar1 + 2) == 0) {
LAB_1012afc0:
    iVar1 = (*pcVar3)(iVar1,*param_1,param_2,param_3,param_1);
  }
  else {
    if (param_3 == 1) {
      puVar2 = (uint *)param_1[2];
      param_2 = puVar2[2] + param_2;
      puVar2[2] = param_2;
      if ((param_2 < *puVar2) || (puVar2[1] < param_2)) {
        param_3 = 0;
        goto LAB_1012afc0;
      }
    }
    else {
      if (param_3 == 2) {
        iVar1 = (*pcVar3)(iVar1,*param_1,param_2,2,param_1);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(param_1[1] + 0x1c))(param_1[1],*param_1,&local_14);
        if (iVar1 != 0) {
          return iVar1;
        }
        *(uint *)(param_1[2] + 8) = local_14;
        return 0;
      }
      if (param_3 == 0) {
        puVar2 = (uint *)param_1[2];
        puVar2[2] = param_2;
        if ((param_2 < *puVar2) || (puVar2[1] < param_2)) {
          param_3 = 0;
          goto LAB_1012afc0;
        }
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}

