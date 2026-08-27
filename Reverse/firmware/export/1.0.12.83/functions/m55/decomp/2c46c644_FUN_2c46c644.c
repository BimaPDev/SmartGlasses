/* FUN_2c46c644 @ 0x2c46c644 */

void FUN_2c46c644(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  puVar3 = (undefined1 *)FUN_2c6685b4(0x28,1);
  uVar2 = DAT_2c46c668;
  uVar1 = DAT_2c46c664;
  if (puVar3 != (undefined1 *)0x0) {
    *(undefined4 *)(puVar3 + 0x18) = param_1;
    *puVar3 = 1;
    *(undefined4 *)(puVar3 + 0xc) = 1;
    *(undefined4 *)(puVar3 + 4) = uVar1;
    *(undefined4 *)(puVar3 + 8) = uVar2;
  }
  return;
}

