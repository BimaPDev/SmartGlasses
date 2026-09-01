/* FUN_100c8c5c @ 0x100c8c5c */

undefined4 FUN_100c8c5c(short *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_100c8c74;
  if (*param_1 != 0) {
    *DAT_100c8c74 = *(undefined4 *)param_1;
    puVar1[1] = *(undefined4 *)(param_1 + 2);
    return 0;
  }
  return 0xffffffea;
}

