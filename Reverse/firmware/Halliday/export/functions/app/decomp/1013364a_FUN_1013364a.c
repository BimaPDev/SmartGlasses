/* FUN_1013364a @ 0x1013364a */

char FUN_1013364a(undefined2 *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  char cVar3;
  int local_14 [2];
  
  cVar3 = '\0';
  if (*(char *)((int)param_1 + 0xb) != '\0') {
    if (*(char *)(param_1 + 1) == '\x02') {
      iVar1 = FUN_100c5d4c(0x1408);
      if (iVar1 != 0) {
        puVar2 = (undefined2 *)FUN_100c1fe4(iVar1 + 8,2);
        *puVar2 = *param_1;
        iVar1 = FUN_100c5e48(0x1408,iVar1,local_14);
        if (iVar1 == 0) {
          cVar3 = '\0';
          if (**(char **)(local_14[0] + 8) == '\0') {
            cVar3 = (*(char **)(local_14[0] + 8))[3];
          }
          FUN_100c1c90();
          return cVar3;
        }
      }
      cVar3 = '\0';
    }
    else {
      cVar3 = '\0';
      if (*(int *)(param_1 + 0x5e) != 0) {
        cVar3 = *(char *)(*(int *)(param_1 + 0x5e) + 0xc);
      }
    }
  }
  return cVar3;
}

