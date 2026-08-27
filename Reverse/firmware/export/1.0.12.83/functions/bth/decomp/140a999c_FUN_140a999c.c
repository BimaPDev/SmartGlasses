/* FUN_140a999c @ 0x140a999c */

undefined4 FUN_140a999c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_140a99c4;
  FUN_140e5148(*(undefined4 *)(DAT_140a99c4 + 0xcc),0xffffffff,param_3,param_4,param_4);
  uVar2 = FUN_140b4ff0(param_1);
  FUN_140e52d8(*(undefined4 *)(iVar1 + 0xcc));
  return uVar2;
}

