/* FUN_140d8578 @ 0x140d8578 */

void FUN_140d8578(char *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char *local_24 [2];
  
  uVar1 = FUN_140db60c(0);
  iVar2 = FUN_140dd3a4();
  uVar3 = thunk_FUN_140bff34(iVar2 + 1);
  FUN_140e5278(uVar3,uVar1,iVar2 + 1);
  FUN_140db60c(0,DAT_140d861c);
  uVar5 = FUN_140de094(param_1,local_24);
  uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uVar1 = 0;
  *param_2 = uVar5;
  if ((local_24[0] == param_1) || (*local_24[0] != '\0')) {
    uVar4 = 0;
  }
  else {
    iVar2 = FUN_140e3cd0((int)uVar5,uVar4,0,DAT_140d8620);
    if (iVar2 == 0) {
      iVar2 = FUN_140e3cd0((int)uVar5,uVar4,0,DAT_140d8624);
      if (iVar2 == 0) goto LAB_140d85d6;
      uVar1 = 0xffffffff;
      uVar4 = 0xffefffff;
    }
    else {
      uVar1 = 0xffffffff;
      uVar4 = DAT_140d8628;
    }
  }
  *(undefined4 *)param_2 = uVar1;
  *(undefined4 *)((int)param_2 + 4) = uVar4;
  *param_3 = 4;
LAB_140d85d6:
  FUN_140db60c(0,uVar3);
  thunk_FUN_140db700(uVar3);
  return;
}

