/* FUN_140a9a20 @ 0x140a9a20 */

undefined4 FUN_140a9a20(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_140a9a4c;
  FUN_140e5148(*(undefined4 *)(DAT_140a9a4c + 0xcc),0xffffffff);
  uVar2 = FUN_140b4ef4(param_1,param_2);
  FUN_140e52d8(*(undefined4 *)(iVar1 + 0xcc));
  return uVar2;
}

