/* FUN_1405db3c @ 0x1405db3c */

void FUN_1405db3c(undefined2 param_1,undefined1 param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined1 *)FUN_14074378(0xd6f,param_1,4,0x18);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = param_2;
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    *(undefined4 *)(puVar1 + 4) = *param_3;
    *(undefined4 *)(puVar1 + 8) = uVar2;
    *(undefined4 *)(puVar1 + 0xc) = uVar3;
    *(undefined4 *)(puVar1 + 0x10) = uVar4;
    *(undefined4 *)(puVar1 + 0x14) = param_3[4];
    FUN_140743d0(puVar1);
    return;
  }
  return;
}

