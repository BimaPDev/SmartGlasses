/* FUN_1405de1c @ 0x1405de1c */

void FUN_1405de1c(undefined2 param_1,undefined4 param_2,undefined2 param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  puVar2 = (undefined1 *)FUN_14074378(0xd65,param_1,4,0xc);
  if (puVar2 != (undefined1 *)0x0) {
    iVar3 = FUN_1405d6bc(param_2);
    *puVar2 = (char)param_2;
    uVar1 = *(undefined1 *)(iVar3 + 0xd);
    *(undefined2 *)(puVar2 + 2) = param_3;
    puVar2[1] = uVar1;
    puVar2[4] = 0;
    FUN_140743d0(puVar2);
    return;
  }
  return;
}

