/* FUN_1013428c @ 0x1013428c */

undefined4 FUN_1013428c(undefined4 param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  
  uVar1 = FUN_100cb508();
  iVar2 = FUN_100cb5a8(0x12,uVar1,8);
  if (iVar2 == 0) {
    uVar1 = 0xfffffff4;
  }
  else {
    puVar3 = (undefined2 *)FUN_100c1fe4(iVar2 + 8);
    *puVar3 = *param_2;
    puVar3[1] = param_2[1];
    puVar3[2] = param_2[2];
    puVar3[3] = param_2[3];
    FUN_1013411a(param_1,iVar2);
    uVar1 = 0;
  }
  return uVar1;
}

