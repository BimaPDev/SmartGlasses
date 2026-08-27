/* FUN_1404152c @ 0x1404152c */

void FUN_1404152c(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  
  FUN_1402a6e8(4,0x1f9,DAT_1404157c,DAT_14041578,DAT_14041570,DAT_14041574,param_2,param_1);
  puVar1 = (undefined1 *)FUN_14074378(0xe52,3,0,0x48);
  puVar1[2] = (char)param_2;
  puVar1[1] = 10;
  *puVar1 = (char)param_1;
  FUN_140743d0();
  return;
}

