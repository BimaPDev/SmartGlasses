/* FUN_101346c0 @ 0x101346c0 */

undefined4 FUN_101346c0(int param_1,undefined4 param_2,int param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined2 *)FUN_100c1fe4(param_1 + 8,2);
  *puVar1 = *(undefined2 *)(param_3 + 4);
  uVar2 = FUN_100c2044(param_1,*(undefined2 *)(param_3 + 0xc),*(undefined4 *)(param_3 + 8),0,0,0,0,0
                      );
  if (*(ushort *)(param_3 + 0xc) == uVar2) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xfffffff4;
  }
  return uVar3;
}

