/* FUN_140ade54 @ 0x140ade54 */

undefined4
FUN_140ade54(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 extraout_r2;
  
  puVar1 = (undefined4 *)FUN_140add9c();
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_140e53b8(*DAT_140ade98);
    FUN_140b4e9c(*DAT_140ade9c,puVar1,extraout_r2,DAT_140ade9c,param_4);
    if (puVar1 == (undefined4 *)0x0) {
      return 0xffffffff;
    }
  }
  *puVar1 = *param_1;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_1 + 1);
  puVar1[2] = param_1[2];
  puVar1[3] = param_1[3];
  puVar1[4] = param_1[4];
  return 0;
}

