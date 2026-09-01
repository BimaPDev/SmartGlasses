/* FUN_1000b218 @ 0x1000b218 */

void FUN_1000b218(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  
  iVar1 = *DAT_1000b244;
  puVar2 = (undefined2 *)*DAT_1000b248;
  *puVar2 = param_1;
  puVar2[1] = param_2;
  puVar2[0xc] = 0;
  if (*DAT_1000b244 != iVar1) {
    FUN_1013cdc0();
  }
  return;
}

