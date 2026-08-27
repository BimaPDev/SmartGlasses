/* FUN_1406b7e4 @ 0x1406b7e4 */

void FUN_1406b7e4(undefined1 param_1,undefined4 param_2,undefined1 param_3,undefined2 param_4,
                 undefined2 param_5)

{
  int iVar1;
  undefined2 *puVar2;
  
  iVar1 = FUN_14066108(param_2);
  if ((iVar1 != 0) &&
     (puVar2 = (undefined2 *)FUN_14074378(0xb02,*(undefined2 *)(iVar1 + 4),2,0xc),
     puVar2 != (undefined2 *)0x0)) {
    *(char *)(puVar2 + 2) = (char)param_2;
    *(undefined1 *)((int)puVar2 + 5) = param_1;
    *(undefined1 *)(puVar2 + 3) = param_3;
    puVar2[4] = param_4;
    puVar2[5] = param_5;
    *puVar2 = 0x306;
    puVar2[1] = 0;
    FUN_140743d0();
    return;
  }
  return;
}

