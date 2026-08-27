/* FUN_14048c2c @ 0x14048c2c */

void FUN_14048c2c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  FUN_1402a6e8(4,0x57d,DAT_14048c6c,DAT_14048c68,DAT_14048c60,DAT_14048c64,param_1,param_2);
  puVar1 = DAT_14048c70;
  *DAT_14048c70 = param_1;
  *(char *)(puVar1 + 1) = (char)param_2;
  thunk_FUN_140a20f4();
  return;
}

