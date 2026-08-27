/* FUN_2c46c72c @ 0x2c46c72c */

void FUN_2c46c72c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined8 in_d0;
  
  puVar3 = (undefined1 *)FUN_2c6685b4(0x28,1);
  uVar2 = DAT_2c46c764;
  uVar1 = DAT_2c46c760;
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 2;
    *(undefined4 *)(puVar3 + 0xc) = 1;
    *(undefined4 *)(puVar3 + 4) = uVar1;
    *(undefined4 *)(puVar3 + 8) = uVar2;
    *(undefined8 *)(puVar3 + 0x18) = in_d0;
  }
  return;
}

