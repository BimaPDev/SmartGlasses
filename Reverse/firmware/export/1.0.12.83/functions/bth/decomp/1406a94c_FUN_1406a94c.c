/* FUN_1406a94c @ 0x1406a94c */

void FUN_1406a94c(undefined1 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,
                 undefined1 param_5,undefined4 *param_6)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_14066108(param_2);
  if ((iVar1 != 0) &&
     (puVar2 = (undefined2 *)FUN_14074378(0xb02,*(undefined2 *)(iVar1 + 4),2,0x1a),
     puVar2 != (undefined2 *)0x0)) {
    puVar2[1] = param_3;
    *(char *)(puVar2 + 2) = (char)param_2;
    *(undefined1 *)((int)puVar2 + 5) = param_1;
    puVar2[3] = param_4;
    *(undefined1 *)(puVar2 + 4) = param_5;
    *puVar2 = 0x304;
    uVar3 = param_6[1];
    uVar4 = param_6[2];
    uVar5 = param_6[3];
    *(undefined4 *)((int)puVar2 + 9) = *param_6;
    *(undefined4 *)((int)puVar2 + 0xd) = uVar3;
    *(undefined4 *)((int)puVar2 + 0x11) = uVar4;
    *(undefined4 *)((int)puVar2 + 0x15) = uVar5;
    FUN_140743d0();
    return;
  }
  return;
}

