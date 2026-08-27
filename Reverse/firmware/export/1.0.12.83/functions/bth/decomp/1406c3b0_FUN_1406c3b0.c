/* FUN_1406c3b0 @ 0x1406c3b0 */

void FUN_1406c3b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 *puVar2;
  
  iVar1 = FUN_14066108(param_2);
  if (iVar1 == 0) {
    FUN_1406c364(param_1,param_2,param_3,0xe,0);
  }
  else {
    puVar2 = (undefined2 *)FUN_14074378(0xb03,*(undefined2 *)(iVar1 + 4),2,8);
    if (puVar2 != (undefined2 *)0x0) {
      puVar2[1] = (short)param_3;
      *(char *)(puVar2 + 2) = (char)param_2;
      *(char *)((int)puVar2 + 5) = (char)param_1;
      puVar2[3] = param_4;
      *puVar2 = 0x202;
      FUN_140743d0();
      return;
    }
  }
  return;
}

