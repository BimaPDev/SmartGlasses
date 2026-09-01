/* FUN_10133064 @ 0x10133064 */

undefined4 FUN_10133064(undefined2 param_1,undefined1 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_100c5d4c(0x406,3);
  if (iVar1 != 0) {
    puVar2 = (undefined2 *)FUN_100c1fe4(iVar1 + 8,3);
    *(undefined1 *)(puVar2 + 1) = param_2;
    *puVar2 = param_1;
    uVar3 = FUN_100c5e48(0x406,iVar1,0);
    return uVar3;
  }
  return 0xffffff97;
}

