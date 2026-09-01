/* FUN_10134a7a @ 0x10134a7a */

undefined4 FUN_10134a7a(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  char *pcVar2;
  
  param_1 = param_1 + 8;
  puVar1 = (undefined2 *)FUN_100c1fe4(param_1,4,param_3,param_4,param_4);
  pcVar2 = *(char **)(param_3 + 0xc);
  *puVar1 = *(undefined2 *)(param_3 + 8);
  puVar1[1] = *(undefined2 *)(param_3 + 10);
  if (*pcVar2 == '\0') {
    FUN_101327c8(param_1,*(undefined2 *)(pcVar2 + 2));
  }
  else {
    FUN_101327a0(param_1,pcVar2 + 1,0x10);
  }
  return 0;
}

