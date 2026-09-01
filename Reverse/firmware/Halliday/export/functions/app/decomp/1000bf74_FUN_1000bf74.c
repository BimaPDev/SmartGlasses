/* FUN_1000bf74 @ 0x1000bf74 */

void FUN_1000bf74(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = *DAT_1000bf9c;
  *param_1 = 2;
  if (*DAT_1000bf9c != iVar1) {
    param_1 = (undefined1 *)FUN_1013cdc0();
  }
  iVar1 = *DAT_1000bbac;
  if (-1 < (int)((uint)(byte)param_1[2] << 0x1f)) {
    param_1[2] = param_1[2] | 1;
    param_1[7] = 1;
    *(undefined4 *)(param_1 + 8) = DAT_1000bbb0;
    *(undefined2 *)(param_1 + 0xc) = 0x80;
  }
  if (*DAT_1000bbac != iVar1) {
    FUN_1013cdc0();
  }
  return;
}

