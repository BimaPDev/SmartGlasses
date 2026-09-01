/* FUN_100e5078 @ 0x100e5078 */

void FUN_100e5078(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = ((int)PTR_DAT_100e50e8 - (int)PTR_DAT_100e50e4) * 0x20 & 0xff00;
  FUN_100a5b78(uVar2 | 0x1b80031,PTR_LAB_1015b3a4_1_100e50ec);
  FUN_100e4fc0(0xffffffff,0xffffffff);
  puVar1 = (undefined4 *)FUN_100e4ed0(param_1,param_2);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_100a5b78(uVar2 | 0x1be0021,PTR_s_Can_t_find_map_client_info_100e50f0);
  }
  else if ((int)((uint)*(byte *)(puVar1 + 5) << 0x1c) < 0) {
    *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) & 0xf7;
    FUN_100e07b4(*puVar1,*(undefined1 *)(puVar1 + 2),1);
    *(undefined1 *)((int)puVar1 + 10) = 8;
  }
  FUN_100e4fb4();
  return;
}

