/* FUN_140414d0 @ 0x140414d0 */

void FUN_140414d0(int param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  
  FUN_1402a6e8(4,0x1b8,DAT_1404151c,DAT_14041518,DAT_14041510,DAT_14041514);
  puVar1 = (undefined1 *)FUN_14074378(0xe56,param_1 << 8 | 3);
  puVar1[2] = param_2;
  puVar1[1] = 0x52;
  *puVar1 = (char)param_1;
  FUN_140743d0();
  return;
}

