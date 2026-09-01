/* FUN_10134934 @ 0x10134934 */

undefined4 FUN_10134934(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  char *pcVar2;
  undefined2 uVar3;
  
  param_1 = param_1 + 8;
  puVar1 = (undefined2 *)FUN_100c1fe4(param_1,6,param_3,param_4,param_4);
  pcVar2 = (char *)*param_3;
  *puVar1 = *(undefined2 *)(param_3 + 2);
  puVar1[1] = *(undefined2 *)((int)param_3 + 0xe);
  uVar3 = 0x2801;
  if (*(char *)(param_3 + 4) == '\0') {
    uVar3 = 0x2800;
  }
  puVar1[2] = uVar3;
  if (*pcVar2 == '\0') {
    FUN_101327c8(param_1,*(undefined2 *)(pcVar2 + 2));
  }
  else if (*pcVar2 == '\x02') {
    FUN_101327a0(param_1,pcVar2 + 1,0x10);
  }
  return 0;
}

