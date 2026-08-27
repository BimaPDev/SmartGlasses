/* FUN_1406a8d8 @ 0x1406a8d8 */

void FUN_1406a8d8(undefined1 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5,undefined1 param_6,undefined1 param_7,undefined4 *param_8)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_14066108(param_2);
  if ((iVar1 != 0) &&
     (puVar2 = (undefined2 *)FUN_14074378(0xb02,*(undefined2 *)(iVar1 + 4),2,0x1c),
     puVar2 != (undefined2 *)0x0)) {
    puVar2[1] = param_3;
    *(char *)(puVar2 + 2) = (char)param_2;
    *(undefined1 *)((int)puVar2 + 5) = param_1;
    puVar2[3] = param_4;
    puVar2[4] = param_5;
    *(undefined1 *)(puVar2 + 5) = param_6;
    *(undefined1 *)((int)puVar2 + 0xb) = param_7;
    *puVar2 = 0x303;
    uVar5 = param_8[1];
    uVar3 = param_8[2];
    uVar4 = param_8[3];
    *(undefined4 *)(puVar2 + 6) = *param_8;
    *(undefined4 *)(puVar2 + 8) = uVar5;
    *(undefined4 *)(puVar2 + 10) = uVar3;
    *(undefined4 *)(puVar2 + 0xc) = uVar4;
    FUN_140743d0();
    return;
  }
  return;
}

