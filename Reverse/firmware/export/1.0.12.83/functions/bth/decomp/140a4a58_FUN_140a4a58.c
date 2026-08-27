/* FUN_140a4a58 @ 0x140a4a58 */

/* WARNING: Removing unreachable block (ram,0x140a4946) */

void FUN_140a4a58(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == 0) {
    FUN_1402a6e8(4,0x86,DAT_140a498c,DAT_140a4988,DAT_140a4998);
    return;
  }
  if (*DAT_140a4974 == '\0') {
    FUN_1402a6e8(4,0x8b,DAT_140a498c,DAT_140a4988,DAT_140a4990);
    FUN_140a4838();
  }
  puVar3 = (undefined1 *)FUN_140db6f0(8);
  puVar2 = DAT_140a499c;
  puVar1 = DAT_140a4978;
  uVar4 = *DAT_140a4978;
  *puVar3 = 1;
  *(int *)(puVar3 + 4) = param_1;
  FUN_140e5148(uVar4,0xffffffff);
  iVar5 = FUN_140b5050(*puVar2,DAT_140a497c,puVar3);
  if (iVar5 == 0) {
    FUN_140b4e9c(*puVar2,puVar3);
    FUN_140e52d8(*puVar1);
    return;
  }
  FUN_1402a6e8(4,0x95,DAT_140a498c,DAT_140a4988,DAT_140a4984,DAT_140a4980,1,param_1);
  FUN_140db700(puVar3);
  FUN_140e52d8(*puVar1);
  return;
}

