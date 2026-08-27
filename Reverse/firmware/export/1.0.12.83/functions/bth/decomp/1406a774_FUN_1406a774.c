/* FUN_1406a774 @ 0x1406a774 */

void FUN_1406a774(undefined1 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,
                 undefined1 param_5,byte param_6,undefined4 param_7)

{
  int iVar1;
  undefined2 *puVar2;
  
  iVar1 = FUN_14066108(param_2);
  if ((iVar1 != 0) &&
     (puVar2 = (undefined2 *)
               FUN_14074378(0xb02,*(undefined2 *)(iVar1 + 4),2,(uint)param_6 * 0x16 + 0x20),
     puVar2 != (undefined2 *)0x0)) {
    puVar2[1] = param_3;
    *(char *)(puVar2 + 2) = (char)param_2;
    *(undefined1 *)((int)puVar2 + 5) = param_1;
    puVar2[3] = param_4;
    *(undefined1 *)(puVar2 + 4) = param_5;
    *(byte *)((int)puVar2 + 9) = param_6;
    *puVar2 = 0x300;
    FUN_140e5278(puVar2 + 5,param_7,(uint)param_6 * 0x16);
    FUN_140743d0(puVar2);
    return;
  }
  return;
}

