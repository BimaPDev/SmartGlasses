/* FUN_2c46c6fc @ 0x2c46c6fc */

void FUN_2c46c6fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  puVar3 = (undefined1 *)FUN_2c6685b4(0x28,1,param_3,param_4,param_4);
  uVar1 = DAT_2c46c724;
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 3;
    uVar2 = DAT_2c46c728;
    *(undefined4 *)(puVar3 + 0xc) = 1;
    *(undefined4 *)(puVar3 + 0x18) = param_1;
    *(undefined4 *)(puVar3 + 0x1c) = param_2;
    *(undefined4 *)(puVar3 + 4) = uVar1;
    *(undefined4 *)(puVar3 + 8) = uVar2;
  }
  return;
}

