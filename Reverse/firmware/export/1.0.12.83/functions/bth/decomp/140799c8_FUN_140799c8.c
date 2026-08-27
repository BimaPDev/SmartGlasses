/* FUN_140799c8 @ 0x140799c8 */

void FUN_140799c8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  pcVar1 = DAT_14079a48;
  if (*DAT_14079a48 == '\0') {
    FUN_14090744(DAT_14079a5c,8,param_3,0,param_4);
    FUN_14090744(DAT_14079a60,8);
    *pcVar1 = '\x01';
  }
  FUN_140e5658(param_1 + 0x110,0,0x80);
  FUN_140e5658(param_1 + 400,0,0x80);
  FUN_140e5658(param_1 + 0xd0,0,0x40);
  puVar2 = DAT_14079a4c;
  *(undefined1 *)(param_1 + 0x250) = 0;
  *puVar2 = param_2;
  puVar2 = DAT_14079a50;
  *(undefined4 *)(param_1 + 8) = 0;
  *puVar2 = param_3;
  *(int *)(param_1 + 0x10) = param_1 + 0x10;
  *(int *)(param_1 + 0x14) = param_1 + 0x10;
  uVar3 = DAT_14079a54;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  uVar3 = DAT_14079a58;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x21) = 8;
  *(undefined1 *)(param_1 + 0x3b) = 1;
  return;
}

