/* FUN_10133d66 @ 0x10133d66 */

int FUN_10133d66(undefined2 *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  char *local_14;
  
  local_14 = param_2;
  iVar2 = FUN_100c5d4c(0x1405,2,param_3,param_4,param_1);
  if (iVar2 == 0) {
    iVar2 = -0xc;
  }
  else {
    puVar3 = (undefined2 *)FUN_100c1fe4(iVar2 + 8,2);
    *puVar3 = *param_1;
    iVar2 = FUN_100c5e48(0x1405,iVar2,&local_14);
    if (iVar2 == 0) {
      cVar1 = **(char **)(local_14 + 8);
      *param_2 = (*(char **)(local_14 + 8))[3];
      if (cVar1 != '\0') {
        iVar2 = -5;
      }
      FUN_100c1c90();
    }
  }
  return iVar2;
}

