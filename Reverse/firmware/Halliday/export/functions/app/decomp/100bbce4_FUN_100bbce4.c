/* FUN_100bbce4 @ 0x100bbce4 */

void FUN_100bbce4(byte *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = DAT_100bbd58;
  uVar3 = DAT_100bbd54;
  if ((-1 < (int)((uint)*param_1 << 0x1f)) &&
     (uVar2 = DAT_100bbd6c, uVar3 = DAT_100bbd68, *DAT_100bbd5c == '\0')) {
    *DAT_100bbd5c = '\x01';
    puVar1 = DAT_100bbd60;
    *DAT_100bbd60 = *(undefined4 *)(param_1 + 1);
    uVar3 = DAT_100bbd64;
    *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(param_1 + 5);
    FUN_1011dc0a(uVar3,4000);
    FUN_1011aab8(0);
    return;
  }
  FUN_100a5b78(uVar2 | (DAT_100bbd4c - DAT_100bbd48) * 0x20 & 0xff00U,DAT_100bbd50,uVar3);
  return;
}

