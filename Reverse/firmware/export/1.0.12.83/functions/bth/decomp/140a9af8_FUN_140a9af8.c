/* FUN_140a9af8 @ 0x140a9af8 */

undefined4 FUN_140a9af8(float param_1)

{
  int iVar1;
  
  iVar1 = DAT_140a9b78;
  FUN_140e5148(*(undefined4 *)(DAT_140a9b78 + 0xd0),0xffffffff);
  if (*(float *)(iVar1 + 0x10) != param_1) {
    *(float *)(iVar1 + 0x10) = param_1;
    FUN_1409a4c8(param_1 - 1.0,0);
    FUN_1402a6e8(4,0x302,DAT_140a9b88,DAT_140a9b84,DAT_140a9b80,
                 (int)((param_1 - 1.0) * DAT_140a9b7c),(int)(param_1 * DAT_140a9b7c));
  }
  FUN_140e52d8(*(undefined4 *)(iVar1 + 0xd0));
  return 0;
}

