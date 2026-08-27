/* FUN_140a9a8c @ 0x140a9a8c */

undefined4 FUN_140a9a8c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_140a9adc;
  FUN_140e5148(*(undefined4 *)(DAT_140a9adc + 0xd0),0xffffffff);
  uVar3 = DAT_140a9ae8;
  uVar2 = DAT_140a9ae4;
  *(undefined4 *)(iVar1 + 0xdc) = DAT_140a9ae0;
  *(undefined4 *)(iVar1 + 0xe0) = uVar2;
  *(undefined4 *)(iVar1 + 0xe4) = uVar3;
  *(undefined4 *)(iVar1 + 0xf8) = 0;
  *(undefined4 *)(iVar1 + 0xfc) = 0;
  FUN_140e52d8(*(undefined4 *)(iVar1 + 0xd0));
  FUN_1402a6e8(4,0x2e1,DAT_140a9af4,DAT_140a9af0,DAT_140a9aec);
  return 0;
}

