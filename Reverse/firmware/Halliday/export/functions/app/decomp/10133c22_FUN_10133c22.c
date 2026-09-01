/* FUN_10133c22 @ 0x10133c22 */

int FUN_10133c22(undefined2 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int local_14;
  undefined4 uStack_10;
  
  local_14 = param_2;
  uStack_10 = param_3;
  if (*(char *)(param_1 + 1) == '\x01') {
    FUN_100cb0c8(param_1 + 0x48,0,param_3,1,param_1);
  }
  switch(*(undefined1 *)((int)param_1 + 0xd)) {
  case 2:
    *(char *)(param_1 + 6) = (char)param_2;
    FUN_100cad6c(param_1,0);
    FUN_100c71c4(0);
  case 8:
    iVar2 = 0;
    break;
  default:
    iVar2 = -0x80;
    break;
  case 6:
    if (*(char *)(param_1 + 1) == '\x02') {
      iVar2 = FUN_100c5d4c(0x408,6);
      if (iVar2 == 0) {
        iVar2 = -0x69;
      }
      else {
        puVar1 = (undefined4 *)FUN_100c1fe4(iVar2 + 8,6);
        *puVar1 = *(undefined4 *)(param_1 + 0x48);
        *(undefined2 *)(puVar1 + 1) = param_1[0x4a];
        iVar2 = FUN_100c5e48(0x408,iVar2,&local_14);
        if (iVar2 == 0) {
          if (**(char **)(local_14 + 8) != '\0') {
            iVar2 = -5;
          }
          FUN_100c1c90();
        }
      }
    }
    else {
      FUN_1013cb84(param_1 + 0x30);
      iVar2 = FUN_100c6d68();
    }
    break;
  case 7:
    iVar2 = FUN_10133064(*param_1,param_2);
    if (iVar2 == 0) {
      FUN_100cad6c(param_1,8);
    }
  }
  return iVar2;
}

