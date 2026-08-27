/* FUN_140d84dc @ 0x140d84dc */

void FUN_140d84dc(char *param_1,float *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  char *local_1c [2];
  
  uVar1 = FUN_140db60c(0);
  iVar2 = FUN_140dd3a4();
  uVar3 = thunk_FUN_140bff34(iVar2 + 1);
  FUN_140e5278(uVar3,uVar1,iVar2 + 1);
  FUN_140db60c(0,DAT_140d8568);
  fVar5 = (float)FUN_140de0ac(param_1,local_1c);
  *param_2 = fVar5;
  if ((local_1c[0] == param_1) || (*local_1c[0] != '\0')) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = DAT_140d8574;
    if (fVar5 != DAT_140d856c) {
      if (fVar5 != DAT_140d8570) goto LAB_140d852e;
      fVar4 = -3.4028235e+38;
    }
  }
  *param_2 = fVar4;
  *param_3 = 4;
LAB_140d852e:
  FUN_140db60c(0,uVar3);
  thunk_FUN_140db700(uVar3);
  return;
}

