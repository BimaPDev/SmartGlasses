/* FUN_100935a4 @ 0x100935a4 */

int FUN_100935a4(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint local_1c;
  undefined4 uStack_18;
  
  puVar1 = DAT_100935cc;
  iVar2 = 0;
  local_1c = 0;
  uStack_18 = param_3;
  while ((local_1c < param_2 && (*(char *)(param_1 + local_1c) != '\0'))) {
    (*(code *)*puVar1)(param_1,&local_1c);
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

