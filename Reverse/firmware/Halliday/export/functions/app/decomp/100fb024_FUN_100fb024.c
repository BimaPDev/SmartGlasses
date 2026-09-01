/* FUN_100fb024 @ 0x100fb024 */

int FUN_100fb024(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  char local_11;
  
  pcVar3 = (code *)param_1[5];
  *param_2 = 0;
  local_11 = '\0';
  if (pcVar3 == (code *)0x0) {
    uVar2 = param_1[2];
    if (uVar2 < (uint)param_1[1]) {
      local_11 = *(char *)(*param_1 + uVar2);
      goto LAB_100fb056;
    }
  }
  else {
    iVar1 = (*pcVar3)(param_1,param_1[2],&local_11,1);
    if (iVar1 == 1) {
      uVar2 = param_1[2];
LAB_100fb056:
      param_1[2] = uVar2 + 1;
      return (int)local_11;
    }
  }
  *param_2 = 0x55;
  return 0;
}

