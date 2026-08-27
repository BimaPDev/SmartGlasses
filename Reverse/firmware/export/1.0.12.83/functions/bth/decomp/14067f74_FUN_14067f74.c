/* FUN_14067f74 @ 0x14067f74 */

void FUN_14067f74(undefined4 param_1,uint param_2,undefined4 param_3,undefined2 param_4,
                 undefined2 param_5,undefined2 param_6,undefined2 param_7)

{
  int iVar1;
  undefined2 *puVar2;
  
  iVar1 = FUN_14066108(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_1406d034(param_1,param_3);
    if (((iVar1 != 0) && (*(byte *)(iVar1 + 0x13) == param_2)) && (*(char *)(iVar1 + 0x35) == '\0'))
    {
      *(undefined4 *)(iVar1 + 0x24) = 0;
      *(undefined1 *)(iVar1 + 0x35) = 1;
      FUN_1406d210(param_1,iVar1,6,0xe);
      return;
    }
  }
  else {
    puVar2 = (undefined2 *)FUN_14074378(0xb03,*(undefined2 *)(iVar1 + 4),2,0xe);
    if (puVar2 != (undefined2 *)0x0) {
      puVar2[1] = (short)param_3;
      *(char *)(puVar2 + 2) = (char)param_2;
      *(char *)((int)puVar2 + 5) = (char)param_1;
      puVar2[3] = param_4;
      puVar2[4] = param_5;
      puVar2[5] = param_6;
      puVar2[6] = param_7;
      *puVar2 = 0x300;
      FUN_140743d0();
      return;
    }
  }
  return;
}

