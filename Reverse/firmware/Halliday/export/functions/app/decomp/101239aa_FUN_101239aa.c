/* FUN_101239aa @ 0x101239aa */

int FUN_101239aa(undefined4 *param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_1c;
  undefined4 uStack_18;
  char *local_14;
  
  if (param_1 == (undefined4 *)0x0) {
    return 9;
  }
  local_1c = param_2;
  uStack_18 = param_3;
  local_14 = param_4;
  iVar1 = FUN_10084bcc(&local_1c,&local_14,0,param_4,param_1);
  if (iVar1 == 0) {
    *param_1 = local_14;
    iVar2 = thunk_FUN_1013cfe2(0x460);
    if (iVar2 == 0) {
      FUN_10122b7a(local_14,0x11);
      return 0x11;
    }
    *(int *)(local_14 + 0xc) = iVar2;
    *(int *)(local_14 + 0x10) = iVar2 + 0x200;
    iVar1 = FUN_10084fcc(param_1,local_1c);
    if (iVar1 == 0) {
      if (-1 < *(char *)((int)param_1 + 0x4b)) {
        if (-1 < (int)((uint)*(byte *)((int)param_1 + 6) << 0x1b)) {
          iVar1 = 5;
          goto LAB_10123a6e;
        }
        if (*local_14 == '\x04') {
          param_1[7] = param_1[2];
          iVar1 = *(int *)(local_14 + 0x10);
          param_1[8] = param_1[4] & 0xffffff00 | (uint)*(byte *)((int)param_1 + 7);
          param_1[9] = param_1[0x13];
          uVar3 = FUN_1012227a(iVar1 + 0x34);
          param_1[2] = uVar3;
          uVar5 = FUN_1012228a(iVar1 + 0x38);
          *(undefined8 *)(param_1 + 4) = uVar5;
          *(byte *)((int)param_1 + 7) = *(byte *)(iVar1 + 0x21) & 2;
        }
        else {
          uVar3 = FUN_10122592(*local_14,param_1[0xf]);
          param_1[2] = uVar3;
        }
      }
      *(undefined2 *)(param_1 + 1) = *(undefined2 *)(local_14 + 6);
      iVar1 = FUN_10122840(param_1,0);
      if (iVar1 == 0) {
        if (param_1[2] == 0) {
          param_1[10] = 0;
        }
        else {
          iVar4 = FUN_10084388(param_1,0);
          if (iVar4 == 0) {
            iVar1 = 0x12;
          }
          param_1[10] = iVar4;
        }
      }
    }
LAB_10123a6e:
    thunk_FUN_1013cfd4(iVar2);
    if (iVar1 == 4) {
      iVar1 = 5;
    }
    else if (iVar1 == 0) goto LAB_10123a7e;
  }
  *param_1 = 0;
LAB_10123a7e:
  FUN_10122b7a(local_14,iVar1);
  return iVar1;
}

