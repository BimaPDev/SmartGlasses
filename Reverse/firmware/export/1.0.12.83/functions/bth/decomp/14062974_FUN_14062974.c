/* FUN_14062974 @ 0x14062974 */

undefined4
FUN_14062974(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = DAT_140629a4;
  if (param_1 != (undefined4 *)0x0) {
    FUN_1402a9fc(DAT_140629a8,1,6,DAT_140629a4,param_4);
    iVar2 = DAT_140629ac;
    *param_1 = *puVar1;
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(puVar1 + 1);
    *(byte *)((int)param_1 + 6) = *(byte *)(iVar2 + 0x5e) & 1;
    return 0;
  }
  return 0x40;
}

