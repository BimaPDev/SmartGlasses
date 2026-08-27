/* FUN_140926e0 @ 0x140926e0 */

void FUN_140926e0(undefined1 param_1)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_140926f4;
  if (*DAT_140926f0 == '\0') {
    *DAT_140926f0 = '\x01';
    *puVar1 = param_1;
  }
  return;
}

