/* FUN_140c0d50 @ 0x140c0d50 */

void FUN_140c0d50(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = DAT_140c0d40;
  if (*DAT_140c0d5c == 0) {
    FUN_140c0600(DAT_140c0d40,2);
    puVar2 = DAT_140c0d48;
    *DAT_140c0d44 = uVar1;
    *DAT_140c0d4c = uVar1;
    *puVar2 = uVar1;
    return;
  }
  return;
}

