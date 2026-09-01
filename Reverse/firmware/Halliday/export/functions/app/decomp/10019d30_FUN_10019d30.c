/* FUN_10019d30 @ 0x10019d30 */

void FUN_10019d30(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int local_20;
  int local_1c;
  
  local_1c = *DAT_10019e08;
  local_30 = 0;
  local_2c = 0;
  if ((*(short *)(param_1 + 0x98) != param_2) || (*(int *)(param_1 + 0xa4) == 0)) {
    sVar1 = *(short *)(param_1 + 0xac);
    iVar5 = param_1 + 0xa8;
    if ((sVar1 != -1) && (param_2 != sVar1)) {
      (*(code *)**(undefined4 **)(param_1 + 0xa8))(iVar5,sVar1,&local_28,&local_30);
      if (local_20 != 0) {
        (**(code **)(*(int *)(param_1 + 0xa8) + 4))(iVar5,&local_28);
      }
      *(undefined2 *)(param_1 + 0xac) = 0xffff;
    }
    iVar2 = (*(code *)**(undefined4 **)(param_1 + 0xa8))(iVar5,param_2,&local_28,&local_30);
    if (iVar2 != 0) goto LAB_10019dfe;
    iVar2 = param_1 + 0x9c;
    if ((*(int *)(param_1 + 0xa4) != 0) &&
       (pcVar4 = *(code **)(*(int *)(param_1 + 0xa8) + 4), pcVar4 != (code *)0x0)) {
      (*pcVar4)(iVar5,iVar2);
    }
    *(undefined4 *)(param_1 + 0x9c) = local_28;
    *(short *)(param_1 + 0x98) = (short)param_2;
    *(undefined4 *)(param_1 + 0xa0) = uStack_24;
    *(int *)(param_1 + 0xa4) = local_20;
    FUN_10128174(iVar2);
    FUN_10096730(param_1,iVar2);
    FUN_10126e14(param_1,local_30,0);
    FUN_10126e1e(param_1,local_2c,0);
  }
  uVar3 = 1;
  while( true ) {
    if (*DAT_10019e08 == local_1c) break;
    FUN_1013cdc0(uVar3);
LAB_10019dfe:
    uVar3 = 0;
  }
  return;
}

