/* FUN_2c46c8a0 @ 0x2c46c8a0 */

undefined1 * FUN_2c46c8a0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  
  puVar3 = (undefined1 *)FUN_2c6685b4(0x28,1);
  uVar1 = DAT_2c46c8d0;
  uVar4 = DAT_2c46c8cc;
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 5;
    *(undefined4 *)(puVar3 + 0xc) = 1;
    uVar2 = DAT_2c46c8d4;
    *(undefined4 *)(puVar3 + 4) = uVar4;
    *(undefined4 *)(puVar3 + 8) = uVar1;
    uVar4 = FUN_2c46c8e0(uVar2);
    *(undefined4 *)(puVar3 + 0x18) = uVar4;
  }
  return puVar3;
}

