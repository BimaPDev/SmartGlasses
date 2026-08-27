/* FUN_14042aa8 @ 0x14042aa8 */

undefined4 FUN_14042aa8(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = (undefined1 *)FUN_14074378(0xd30,param_1 << 8 | 4,0,0x68);
  iVar2 = FUN_1409f860(puVar1 + 8);
  if (iVar2 != 0) {
    FUN_1402a6e8(4,0x850,DAT_14042b34,DAT_14042b38,DAT_14042b30,iVar2);
    FUN_1402a9fc(DAT_14042b3c,1,0x10,puVar1 + 8);
    puVar1[1] = (char)iVar2;
    *puVar1 = 0x30;
    *(undefined4 *)(puVar1 + 2) = *param_2;
    *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(param_2 + 1);
    FUN_140743d0(puVar1);
    return 1;
  }
  FUN_1402a6e8(4,0x84b,DAT_14042b34,DAT_14042b38,DAT_14042b40);
  thunk_FUN_14074168(puVar1 + -0xc);
  return 0;
}

